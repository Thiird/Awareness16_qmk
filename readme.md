# Awareness16 qmk
Firmware for my [Awareness16](https://github.com/Thiird/Awareness16) macropad.

Powered by QMK.

# Usage
After having fully configured qmk on your machine, use

```qmk compile -kb awareness16 -km default```

then put your keyboard in bootloader mode and use

```qmk flash -kb awareness16 -km default```

Change ```default``` with ```via``` to make the pad [VIA](https://github.com/the-via) and [VIAL](https://github.com/vial-kb) compatible.