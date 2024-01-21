#include "eurolatin-sil.hpp"

#include <fcitx/inputpanel.h>
#include <fcitx/instance.h>

std::optional<std::string> getCHARForSIL(std::string baseCharacter,
    fcitx::KeySym silModifier)
{
  if (baseCharacter == "backslash") {
    if (silModifier == FcitxKey_d) return "ð";
    if (silModifier == FcitxKey_D) return "Ð";
    if (silModifier == FcitxKey_e) return "ɛ";
    if (silModifier == FcitxKey_E) return "Ɛ";
    if (silModifier == FcitxKey_g) return "ǥ";
    if (silModifier == FcitxKey_G) return "Ǥ";
    if (silModifier == FcitxKey_k) return "ĸ";
    if (silModifier == FcitxKey_n) return "ŉ";
    if (silModifier == FcitxKey_o) return "ø";
    if (silModifier == FcitxKey_O) return "Ø";
    if (silModifier == FcitxKey_s) return "ſ";
  }
  if (baseCharacter == "equal") {
    if (silModifier == FcitxKey_c) return "ɔ";
    if (silModifier == FcitxKey_C) return "Ɔ";
    if (silModifier == FcitxKey_e) return "ə";
    if (silModifier == FcitxKey_E) return "Ə";
    if (silModifier == FcitxKey_g) return "ɂ";
    if (silModifier == FcitxKey_G) return "Ɂ";
    if (silModifier == FcitxKey_i) return "ɲ";
    if (silModifier == FcitxKey_I) return "Ɲ";
    if (silModifier == FcitxKey_m) return "ŋ";
    if (silModifier == FcitxKey_M) return "Ŋ";
    if (silModifier == FcitxKey_o) return "ɵ";
    if (silModifier == FcitxKey_O) return "Ɵ";
    if (silModifier == FcitxKey_s) return "ß";
    if (silModifier == FcitxKey_S) return "ẞ";
    if (silModifier == FcitxKey_t) return "þ";
    if (silModifier == FcitxKey_T) return "Þ";
    if (silModifier == FcitxKey_x) return "ɣ";
    if (silModifier == FcitxKey_X) return "Ɣ";
    if (silModifier == FcitxKey_y) return "ȝ";
    if (silModifier == FcitxKey_Y) return "Ȝ";
    if (silModifier == FcitxKey_z) return "ʒ";
    if (silModifier == FcitxKey_Z) return "Ʒ";
    if (silModifier == FcitxKey_apostrophe) return "ꞌ";
    if (silModifier == FcitxKey_quotedbl) return "Ꞌ"; /* this is broken and I'm not sure how to fix without writing more than I can be assed to rn */
  }

  return {};
}

/* when the lazy way becomes the hard way */

bool isSILModifier(fcitx::KeySym key)
{
  return key == FcitxKey_A || key == FcitxKey_a ||
    key == FcitxKey_B || key == FcitxKey_b ||
    key == FcitxKey_C || key == FcitxKey_c ||
    key == FcitxKey_D || key == FcitxKey_d ||
    key == FcitxKey_E || key == FcitxKey_e ||
    key == FcitxKey_F || key == FcitxKey_f ||
    key == FcitxKey_G || key == FcitxKey_g ||
    key == FcitxKey_H || key == FcitxKey_h ||
    key == FcitxKey_I || key == FcitxKey_i ||
    key == FcitxKey_J || key == FcitxKey_j ||
    key == FcitxKey_K || key == FcitxKey_k ||
    key == FcitxKey_L || key == FcitxKey_l ||
    key == FcitxKey_M || key == FcitxKey_m ||
    key == FcitxKey_N || key == FcitxKey_n ||
    key == FcitxKey_O || key == FcitxKey_o ||
    key == FcitxKey_P || key == FcitxKey_p ||
    key == FcitxKey_Q || key == FcitxKey_q ||
    key == FcitxKey_R || key == FcitxKey_r ||
    key == FcitxKey_S || key == FcitxKey_s ||
    key == FcitxKey_T || key == FcitxKey_t ||
    key == FcitxKey_U || key == FcitxKey_u ||
    key == FcitxKey_V || key == FcitxKey_v ||
    key == FcitxKey_W || key == FcitxKey_w ||
    key == FcitxKey_X || key == FcitxKey_x ||
    key == FcitxKey_Y || key == FcitxKey_y ||
    key == FcitxKey_Z || key == FcitxKey_z ||
    key == FcitxKey_apostrophe;
}

/* probably the below logic can be simplified in some way, but I am dumb */

void SILState::handleAlphaKey(fcitx::Key key)
	{
		if (!isSILModifier(key.sym()) && !m_lastKey.has_value()) {
      m_lastKey = key.toString();
			m_buffer.type(key.sym());
      return;
		}

    if (!isSILModifier(key.sym()) && m_lastKey.has_value()) {
      m_lastKey.reset();
      m_ic->commitString(m_buffer.userInput());
      m_buffer.clear();
      updateUI();
    }

    if (isSILModifier(key.sym()) && !m_lastKey.has_value()) {
      m_buffer.type(key.sym());
      m_ic->commitString(m_buffer.userInput());
      m_buffer.clear();
      updateUI();
      return;
    }

		if (isSILModifier(key.sym()) && m_lastKey.has_value()) {
			auto eurChar = getCHARForSIL(*m_lastKey, key.sym());
			if (eurChar) {
        m_buffer.backspace();
				m_buffer.type(*eurChar);
        m_ic->commitString(m_buffer.userInput());
        m_buffer.clear();
        updateUI();
			}
      m_lastKey.reset();
		}
	}


void SILState::keyEvent(fcitx::KeyEvent& keyEvent)
{
  if (m_buffer.empty() && !keyEvent.key().isSimple()) return;

  if (keyEvent.key().check(FcitxKey_Return)) {
    m_ic->commitString(m_buffer.userInput());
    reset();
  } else if (keyEvent.key().check(FcitxKey_space)) {
    m_ic->commitString(m_buffer.userInput());
    m_ic->commitString(" ");
    reset();
  } else if (keyEvent.key().check(FcitxKey_BackSpace)) {
    m_buffer.backspace();
  } else if (keyEvent.key().isSimple()) {
    handleAlphaKey(keyEvent.key());
  }
  updateUI();
  keyEvent.filterAndAccept();
}

void SILState::updateUI()
{
  auto& inputPanel = m_ic->inputPanel();
  inputPanel.reset();
  if (m_ic->capabilityFlags().test(fcitx::CapabilityFlag::Preedit)) {
    fcitx::Text preedit(m_buffer.userInput(),
        fcitx::TextFormatFlag::HighLight);
    inputPanel.setClientPreedit(preedit);
  } else {
    fcitx::Text preedit(m_buffer.userInput());
    inputPanel.setPreedit(preedit);
  }
  m_ic->updateUserInterface(fcitx::UserInterfaceComponent::InputPanel);
  m_ic->updatePreedit();
}

SILEngine::SILEngine(fcitx::Instance* instance)
  : m_factory(
      [this](fcitx::InputContext& ic) { return new SILState(this, &ic); })
{
  instance->inputContextManager().registerProperty("silState", &m_factory);
}

void SILEngine::keyEvent(const fcitx::InputMethodEntry&,
    fcitx::KeyEvent& keyEvent)
{
  if (keyEvent.isRelease() || keyEvent.key().states()) {
    return;
  }

  auto ic = keyEvent.inputContext();
  auto* state = ic->propertyFor(&m_factory);
  state->keyEvent(keyEvent);
}

void SILEngine::reset(const fcitx::InputMethodEntry&,
    fcitx::InputContextEvent& event)
{
  auto* state = event.inputContext()->propertyFor(&m_factory);
  state->reset();
}

FCITX_ADDON_FACTORY(SILEngineFactory);
