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
    if (silModifier == FcitxKey_quotedbl) return "Ꞌ";
  }
  if (baseCharacter == "comma") {
    if (silModifier == FcitxKey_a) return "ą";
    if (silModifier == FcitxKey_A) return "Ą";
    if (silModifier == FcitxKey_c) return "ç";
    if (silModifier == FcitxKey_C) return "Ç";
    if (silModifier == FcitxKey_d) return "ḑ";
    if (silModifier == FcitxKey_D) return "Ḑ";
    if (silModifier == FcitxKey_e) return "ę";
    if (silModifier == FcitxKey_E) return "Ę";
    if (silModifier == FcitxKey_g) return "ģ";
    if (silModifier == FcitxKey_G) return "Ģ";
    if (silModifier == FcitxKey_h) return "ḩ";
    if (silModifier == FcitxKey_H) return "Ḩ";
    if (silModifier == FcitxKey_i) return "į";
    if (silModifier == FcitxKey_I) return "Į";
    if (silModifier == FcitxKey_k) return "ķ";
    if (silModifier == FcitxKey_K) return "Ķ";
    if (silModifier == FcitxKey_l) return "ļ";
    if (silModifier == FcitxKey_L) return "Ļ";
    if (silModifier == FcitxKey_n) return "ņ";
    if (silModifier == FcitxKey_N) return "Ņ";
    if (silModifier == FcitxKey_o) return "ǫ";
    if (silModifier == FcitxKey_O) return "Ǫ";
    if (silModifier == FcitxKey_r) return "ŗ";
    if (silModifier == FcitxKey_R) return "Ŗ";
    if (silModifier == FcitxKey_s) return "ş";
    if (silModifier == FcitxKey_S) return "Ş";
    if (silModifier == FcitxKey_t) return "ţ";
    if (silModifier == FcitxKey_T) return "Ţ";
    if (silModifier == FcitxKey_u) return "ų";
    if (silModifier == FcitxKey_U) return "Ų";
    if (silModifier == FcitxKey_z) return "ⱬ";
    if (silModifier == FcitxKey_Z) return "Ⱬ";
    if (silModifier == FcitxKey_apostrophe) return "ḉ";
    if (silModifier == FcitxKey_quotedbl) return "Ḉ";
  }
  if (baseCharacter == "bar") {
    if (silModifier == FcitxKey_a) return "ạ";
    if (silModifier == FcitxKey_A) return "Ạ";
    if (silModifier == FcitxKey_b) return "ḅ";
    if (silModifier == FcitxKey_B) return "Ḅ";
    if (silModifier == FcitxKey_d) return "ḍ";
    if (silModifier == FcitxKey_D) return "Ḍ";
    if (silModifier == FcitxKey_e) return "ẹ";
    if (silModifier == FcitxKey_E) return "Ẹ";
    if (silModifier == FcitxKey_h) return "ḥ";
    if (silModifier == FcitxKey_H) return "Ḥ";
    if (silModifier == FcitxKey_i) return "ị";
    if (silModifier == FcitxKey_I) return "Ị";
    if (silModifier == FcitxKey_k) return "ḳ";
    if (silModifier == FcitxKey_K) return "Ḳ";
    if (silModifier == FcitxKey_l) return "ḷ";
    if (silModifier == FcitxKey_L) return "Ḷ";
    if (silModifier == FcitxKey_m) return "ṃ";
    if (silModifier == FcitxKey_M) return "Ṃ";
    if (silModifier == FcitxKey_n) return "ṇ";
    if (silModifier == FcitxKey_N) return "Ṇ";
    if (silModifier == FcitxKey_o) return "ọ";
    if (silModifier == FcitxKey_O) return "Ọ";
    if (silModifier == FcitxKey_r) return "ṛ";
    if (silModifier == FcitxKey_R) return "Ṛ";
    if (silModifier == FcitxKey_s) return "ṣ";
    if (silModifier == FcitxKey_S) return "Ṣ";
    if (silModifier == FcitxKey_t) return "ṭ";
    if (silModifier == FcitxKey_T) return "Ṭ";
    if (silModifier == FcitxKey_u) return "ụ";
    if (silModifier == FcitxKey_U) return "Ụ";
    if (silModifier == FcitxKey_v) return "ṿ";
    if (silModifier == FcitxKey_V) return "Ṿ";
    if (silModifier == FcitxKey_w) return "ẉ";
    if (silModifier == FcitxKey_W) return "Ẉ";
    if (silModifier == FcitxKey_y) return "ỵ";
    if (silModifier == FcitxKey_Y) return "Ỵ";
    if (silModifier == FcitxKey_z) return "ẓ";
    if (silModifier == FcitxKey_Z) return "Ẓ";
  }
  if (baseCharacter == "period") {
    if (silModifier == FcitxKey_a) return "ȧ";
    if (silModifier == FcitxKey_A) return "Ȧ";
    if (silModifier == FcitxKey_b) return "ḃ";
    if (silModifier == FcitxKey_B) return "Ḃ";
    if (silModifier == FcitxKey_c) return "ċ";
    if (silModifier == FcitxKey_C) return "Ċ";
    if (silModifier == FcitxKey_d) return "ḋ";
    if (silModifier == FcitxKey_D) return "Ḋ";
    if (silModifier == FcitxKey_e) return "ė";
    if (silModifier == FcitxKey_E) return "Ė";
    if (silModifier == FcitxKey_f) return "ḟ";
    if (silModifier == FcitxKey_F) return "Ḟ";
    if (silModifier == FcitxKey_g) return "ġ";
    if (silModifier == FcitxKey_G) return "Ġ";
    if (silModifier == FcitxKey_h) return "ḣ";
    if (silModifier == FcitxKey_H) return "Ḣ";
    if (silModifier == FcitxKey_i) return "ı";
    if (silModifier == FcitxKey_I) return "İ";
    if (silModifier == FcitxKey_j) return "ȷ";
    if (silModifier == FcitxKey_l) return "ŀ";
    if (silModifier == FcitxKey_L) return "Ŀ";
    if (silModifier == FcitxKey_m) return "ṁ";
    if (silModifier == FcitxKey_M) return "Ṁ";
    if (silModifier == FcitxKey_n) return "ṅ";
    if (silModifier == FcitxKey_N) return "Ṅ";
    if (silModifier == FcitxKey_o) return "ȯ";
    if (silModifier == FcitxKey_O) return "Ȯ";
    if (silModifier == FcitxKey_p) return "ṗ";
    if (silModifier == FcitxKey_P) return "Ṗ";
    if (silModifier == FcitxKey_r) return "ṙ";
    if (silModifier == FcitxKey_R) return "Ṙ";
    if (silModifier == FcitxKey_s) return "ṡ";
    if (silModifier == FcitxKey_S) return "Ṡ";
    if (silModifier == FcitxKey_t) return "ṫ";
    if (silModifier == FcitxKey_T) return "Ṫ";
    if (silModifier == FcitxKey_w) return "ẇ";
    if (silModifier == FcitxKey_W) return "Ẇ";
    if (silModifier == FcitxKey_x) return "ẋ";
    if (silModifier == FcitxKey_X) return "Ẋ";
    if (silModifier == FcitxKey_y) return "ẏ";
    if (silModifier == FcitxKey_Y) return "Ẏ";
    if (silModifier == FcitxKey_z) return "ż";
    if (silModifier == FcitxKey_Z) return "Ż";
  }
  if (baseCharacter == "at") {
    if (silModifier == FcitxKey_a) return "å";
    if (silModifier == FcitxKey_A) return "Å";
    if (silModifier == FcitxKey_u) return "ů";
    if (silModifier == FcitxKey_U) return "Ů";
    if (silModifier == FcitxKey_w) return "ẘ";
    if (silModifier == FcitxKey_y) return "ẙ";
  }
  if (baseCharacter == "colon") {
    if (silModifier == FcitxKey_a) return "ä";
    if (silModifier == FcitxKey_A) return "Ä";
    if (silModifier == FcitxKey_e) return "ë";
    if (silModifier == FcitxKey_E) return "Ë";
    if (silModifier == FcitxKey_h) return "ḧ";
    if (silModifier == FcitxKey_H) return "Ḧ";
    if (silModifier == FcitxKey_i) return "ï";
    if (silModifier == FcitxKey_I) return "Ï";
    if (silModifier == FcitxKey_n) return "n̈";
    if (silModifier == FcitxKey_N) return "N̈";
    if (silModifier == FcitxKey_o) return "ö";
    if (silModifier == FcitxKey_O) return "Ö";
    if (silModifier == FcitxKey_p) return "p̈";
    if (silModifier == FcitxKey_P) return "P̈";
    if (silModifier == FcitxKey_t) return "ẗ";
    if (silModifier == FcitxKey_u) return "ü";
    if (silModifier == FcitxKey_U) return "Ü";
    if (silModifier == FcitxKey_w) return "ẅ";
    if (silModifier == FcitxKey_W) return "Ẅ";
    if (silModifier == FcitxKey_x) return "ẍ";
    if (silModifier == FcitxKey_X) return "Ẍ";
    if (silModifier == FcitxKey_y) return "ÿ";
    if (silModifier == FcitxKey_Y) return "Ÿ";
  }
  if (baseCharacter == "underscore") {
    if (silModifier == FcitxKey_b) return "ḇ";
    if (silModifier == FcitxKey_B) return "Ḇ";
    if (silModifier == FcitxKey_d) return "ḏ";
    if (silModifier == FcitxKey_D) return "Ḏ";
    if (silModifier == FcitxKey_h) return "ẖ";
    if (silModifier == FcitxKey_k) return "ḵ";
    if (silModifier == FcitxKey_K) return "Ḵ";
    if (silModifier == FcitxKey_l) return "ḻ";
    if (silModifier == FcitxKey_L) return "Ḻ";
    if (silModifier == FcitxKey_n) return "ṉ";
    if (silModifier == FcitxKey_N) return "Ṉ";
    if (silModifier == FcitxKey_r) return "ṟ";
    if (silModifier == FcitxKey_R) return "Ṟ";
    if (silModifier == FcitxKey_t) return "ṯ";
    if (silModifier == FcitxKey_T) return "Ṯ";
    if (silModifier == FcitxKey_x) return "x̱";
    if (silModifier == FcitxKey_X) return "X̱";
    if (silModifier == FcitxKey_z) return "ẕ";
    if (silModifier == FcitxKey_Z) return "Ẕ";
  }
  if (baseCharacter == "minus") {
    if (silModifier == FcitxKey_a) return "ā";
    if (silModifier == FcitxKey_A) return "Ā";
    if (silModifier == FcitxKey_b) return "ƀ";
    if (silModifier == FcitxKey_B) return "Ƀ";
    if (silModifier == FcitxKey_d) return "đ";
    if (silModifier == FcitxKey_D) return "Đ";
    if (silModifier == FcitxKey_e) return "ē";
    if (silModifier == FcitxKey_E) return "Ē";
    if (silModifier == FcitxKey_g) return "ḡ";
    if (silModifier == FcitxKey_G) return "Ḡ";
    if (silModifier == FcitxKey_h) return "ħ";
    if (silModifier == FcitxKey_H) return "Ħ";
    if (silModifier == FcitxKey_i) return "ī";
    if (silModifier == FcitxKey_I) return "Ī";
    if (silModifier == FcitxKey_j) return "ɉ";
    if (silModifier == FcitxKey_J) return "Ɉ";
    if (silModifier == FcitxKey_l) return "ł";
    if (silModifier == FcitxKey_L) return "Ł";
    if (silModifier == FcitxKey_o) return "ō";
    if (silModifier == FcitxKey_O) return "Ō";
    if (silModifier == FcitxKey_r) return "ɍ";
    if (silModifier == FcitxKey_R) return "Ɍ";
    if (silModifier == FcitxKey_t) return "ŧ";
    if (silModifier == FcitxKey_T) return "Ŧ";
    if (silModifier == FcitxKey_u) return "ū";
    if (silModifier == FcitxKey_U) return "Ū";
    if (silModifier == FcitxKey_y) return "ȳ";
    if (silModifier == FcitxKey_Y) return "Ȳ";
    if (silModifier == FcitxKey_z) return "ƶ";
    if (silModifier == FcitxKey_Z) return "Ƶ";
  }
  if (baseCharacter == "grave") {
    if (silModifier == FcitxKey_a) return "à";
    if (silModifier == FcitxKey_A) return "À";
    if (silModifier == FcitxKey_e) return "è";
    if (silModifier == FcitxKey_E) return "È";
    if (silModifier == FcitxKey_i) return "ì";
    if (silModifier == FcitxKey_I) return "Ì";
    if (silModifier == FcitxKey_n) return "ǹ";
    if (silModifier == FcitxKey_N) return "Ǹ";
    if (silModifier == FcitxKey_o) return "ò";
    if (silModifier == FcitxKey_O) return "Ò";
    if (silModifier == FcitxKey_u) return "ù";
    if (silModifier == FcitxKey_U) return "Ù";
    if (silModifier == FcitxKey_w) return "ẁ";
    if (silModifier == FcitxKey_W) return "Ẁ";
    if (silModifier == FcitxKey_y) return "ỳ";
    if (silModifier == FcitxKey_Y) return "Ỳ";
  }
  if (baseCharacter == "numbersign") {
    if (silModifier == FcitxKey_a) return "ȁ";
    if (silModifier == FcitxKey_A) return "Ȁ";
    if (silModifier == FcitxKey_e) return "ȅ";
    if (silModifier == FcitxKey_E) return "Ȅ";
    if (silModifier == FcitxKey_i) return "ȉ";
    if (silModifier == FcitxKey_I) return "Ȉ";
    if (silModifier == FcitxKey_o) return "ȍ";
    if (silModifier == FcitxKey_O) return "Ȍ";
    if (silModifier == FcitxKey_r) return "ȑ";
    if (silModifier == FcitxKey_R) return "Ȑ";
    if (silModifier == FcitxKey_u) return "ȕ";
    if (silModifier == FcitxKey_U) return "Ȕ";
  }
  if (baseCharacter == "apostrophe") {
    if (silModifier == FcitxKey_a) return "á";
    if (silModifier == FcitxKey_A) return "Á";
    if (silModifier == FcitxKey_c) return "ć";
    if (silModifier == FcitxKey_C) return "Ć";
    if (silModifier == FcitxKey_e) return "é";
    if (silModifier == FcitxKey_E) return "É";
    if (silModifier == FcitxKey_g) return "ǵ";
    if (silModifier == FcitxKey_G) return "Ǵ";
    if (silModifier == FcitxKey_i) return "í";
    if (silModifier == FcitxKey_I) return "Í";
    if (silModifier == FcitxKey_k) return "ḱ";
    if (silModifier == FcitxKey_K) return "Ḱ";
    if (silModifier == FcitxKey_l) return "ĺ";
    if (silModifier == FcitxKey_L) return "Ĺ";
    if (silModifier == FcitxKey_m) return "ḿ";
    if (silModifier == FcitxKey_M) return "Ḿ";
    if (silModifier == FcitxKey_n) return "ń";
    if (silModifier == FcitxKey_N) return "Ń";
    if (silModifier == FcitxKey_o) return "ó";
    if (silModifier == FcitxKey_O) return "Ó";
    if (silModifier == FcitxKey_p) return "ṕ";
    if (silModifier == FcitxKey_P) return "Ṕ";
    if (silModifier == FcitxKey_r) return "ŕ";
    if (silModifier == FcitxKey_R) return "Ŕ";
    if (silModifier == FcitxKey_s) return "ś";
    if (silModifier == FcitxKey_S) return "Ś";
    if (silModifier == FcitxKey_u) return "ú";
    if (silModifier == FcitxKey_U) return "Ú";
    if (silModifier == FcitxKey_w) return "ẃ";
    if (silModifier == FcitxKey_W) return "Ẃ";
    if (silModifier == FcitxKey_y) return "ý";
    if (silModifier == FcitxKey_Y) return "Ý";
    if (silModifier == FcitxKey_z) return "ź";
    if (silModifier == FcitxKey_Z) return "Ź";
  }
  if (baseCharacter == "quotedbl") {
    if (silModifier == FcitxKey_o) return "ő";
    if (silModifier == FcitxKey_O) return "Ő";
    if (silModifier == FcitxKey_u) return "ű";
    if (silModifier == FcitxKey_U) return "Ű";
  }
  if (baseCharacter == "asciicircum") {
    if (silModifier == FcitxKey_a) return "â";
    if (silModifier == FcitxKey_A) return "Â";
    if (silModifier == FcitxKey_c) return "ĉ";
    if (silModifier == FcitxKey_C) return "Ĉ";
    if (silModifier == FcitxKey_e) return "ê";
    if (silModifier == FcitxKey_E) return "Ê";
    if (silModifier == FcitxKey_g) return "ĝ";
    if (silModifier == FcitxKey_G) return "Ĝ";
    if (silModifier == FcitxKey_h) return "ĥ";
    if (silModifier == FcitxKey_H) return "Ĥ";
    if (silModifier == FcitxKey_i) return "î";
    if (silModifier == FcitxKey_I) return "Î";
    if (silModifier == FcitxKey_j) return "ĵ";
    if (silModifier == FcitxKey_J) return "Ĵ";
    if (silModifier == FcitxKey_o) return "ô";
    if (silModifier == FcitxKey_O) return "Ô";
    if (silModifier == FcitxKey_s) return "ŝ";
    if (silModifier == FcitxKey_S) return "Ŝ";
    if (silModifier == FcitxKey_u) return "û";
    if (silModifier == FcitxKey_U) return "Û";
    if (silModifier == FcitxKey_w) return "ŵ";
    if (silModifier == FcitxKey_W) return "Ŵ";
    if (silModifier == FcitxKey_y) return "ŷ";
    if (silModifier == FcitxKey_Y) return "Ŷ";
    if (silModifier == FcitxKey_z) return "ẑ";
    if (silModifier == FcitxKey_Z) return "Ẑ";
  }

  return {};
}

/* the lazy way became the hard way */

bool isSpecialSILModifier(fcitx::KeySym key)
{
  return key == FcitxKey_apostrophe || key == FcitxKey_quotedbl;
}

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
    key == FcitxKey_apostrophe || key == FcitxKey_quotedbl;
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
      if (key.toString() == m_lastKey) {
        m_lastKey.reset();
        m_ic->commitString(m_buffer.userInput());
        m_buffer.clear();
        updateUI();
        return;
      } else {
        m_ic->commitString(m_buffer.userInput());
        m_buffer.clear();
        m_lastKey = key.toString();
        m_buffer.type(key.sym());
        return;
      }
    }

    if (isSpecialSILModifier(key.sym()) && m_lastKey.has_value()) {
      if (key.toString() == m_lastKey) {
        m_ic->commitString(m_buffer.userInput());
        m_buffer.clear();
        m_lastKey.reset();
        return;
      }
    }

    if (isSILModifier(key.sym()) && !isSpecialSILModifier(key.sym()) && !m_lastKey.has_value()) {
      m_buffer.type(key.sym());
      m_ic->commitString(m_buffer.userInput());
      m_buffer.clear();
      updateUI();
      return;
    }

    if (isSILModifier(key.sym()) && isSpecialSILModifier(key.sym()) && !m_lastKey.has_value()) {
      m_lastKey = key.toString();
			m_buffer.type(key.sym());
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
			} else {
        m_buffer.type(key.sym());
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
    m_lastKey.reset();
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
