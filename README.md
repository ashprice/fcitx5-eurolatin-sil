# Fcitx5-eurolatin-sil

This layout is a reimplementation of the SIL Eurolatin keyboard layout within a pure FCITX5 input method. My primary motivations for this are twofold - first, I often cannot compile the keyman software on my distrubition for various reasons. Second, this greatly reduces the size of required dependencies.

This is a preliminary readme, as the layout is approaching complete parity. The layout is basically identical, though I have added 1-2 additional symbols that fill logical gaps within the Eurolatin layout (eg. some modifier + key combinations in the original layout give a given character in lowercase but do not in uppercase, so I have added their upper case versions.) There are still a few of the mathematical symbols missing which I will add soon.

This layout could be improved in a number of ways and I welcome contributions:
1. Saner code. It's quite messy and verbose.
2. Bugs. I am sure there will be undesired results of some combinations.
3. A better way to handle prefix characters in tri- and di-graphs. The way it is done currently means you may have to hit enter to confirm what you have typed when you are trying to use eg. a search box. If, say, a text editor has 'jump to next search' bound to \<n\>, this will not work as desired under how the layout currently operates, because that character is treated as 'unconfirmed,' so that it can act as an input for a longer string. Possibly this can be fixed by making use of deletion instead of uncommitted strings, however, I am not sure how the logic will work in practice, as modification sequences must remain context sensitive.
