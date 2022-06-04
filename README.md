# sesame_keymap

## Layouts

### Default

#### 0

```
┌──────┬──────┬──────┬──────┬──────┬──────┬──────┐ ┌──────┬──────┬──────┬──────┬──────┬──────┬──────┐
│ ESC  │  1   │  2   │  3   │  4   │  5   │  6   │ │  7   │  8   │  9   │  0   │  -   │  =   │ BSPC │
├──────┼──────┼──────┼──────┼──────┼──────┼─┬────┴─┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
│ TAB  │  Q   │  W   │  E   │  R   │  T   │ │  Y   │  U   │  I   │  O   │  P   │  [   │  ]   │  \   │
├──────┼──────┼──────┼──────┼──────┼──────┤ ├──────┼──────┼──────┼──────┼──────┼──────┼──────┴──────┤
│ CAPS │  A   │  S   │  D   │  F   │  G   │ │  H   │  J   │  K   │  L   │  ;   │  '   │     ENT     │
├──────┼──────┼──────┼──────┼──────┼──────┤ ├──────┼──────┼──────┼──────┼──────┼──────┼──────┬──────┤
│ LSFT │  Z   │  X   │  C   │  V   │  B   │ │  B   │  N   │  M   │  ,   │  .   │  /   │ RSFT │  Fn  │
├──────┼──────┼──────┼──────┴──────┼──────│ ├──────┴──────┴──────┼──────┼──────┴──────┴───┬──┴───┬──┘
│ LCTL │      │ LALT │     SPC     │ LGUI │ │        SPC         │ RALT │                 │ RCTL │
└──────┘      └──────┴─────────────┴──────┘ └────────────────────┴──────┘                 └──────┘
┌──────┐
│ PAUS │
├──────┤
│ PSCR │
├──────┤
│  F5  │
└──────┘
```

#### 1

```
┌──────┬──────┬──────┬──────┬──────┬──────┬──────┐ ┌──────┬──────┬──────┬──────┬──────┬──────┬──────┐
│  `   │  F1  │  F2  │  F3  │  F4  │  F5  │  F6  │ │  F7  │  F8  │  F9  │ F10  │ F11  │ F12  │ DEL  │
├──────┼──────┼──────┼──────┼──────┼──────┼─┬────┴─┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
│ ____ │ HOME │  UP  │ END  │ PGUP │ ____ │ │ ____ │ ____ │ ____ │ ____ │ ____ │ ____ │ ____ │ ____ │
├──────┼──────┼──────┼──────┼──────┼──────┤ ├──────┼──────┼──────┼──────┼──────┼──────┼──────┴──────┤
│ ____ │ LEFT │ DOWN │ RGHT │ PGDN │ ____ │ │ ____ │ ____ │ ____ │ ____ │ ____ │ ____ │     ____    │
├──────┼──────┼──────┼──────┼──────┼──────┤ ├──────┼──────┼──────┼──────┼──────┼──────┼──────┬──────┤
│ ____ │ ____ │ ____ │ ____ │ ____ │ ____ │ │ VOLD │ VOLU │ MUTE │ MPRV │ MNXT │ MPLY │ RSFT │ ____ │
├──────┼──────┼──────┼──────┴──────┼──────│ ├──────┴──────┴──────┼──────┼──────┴──────┴───┬──┴───┬──┘
│ ____ │      │ ____ │    ____     │ ____ │ │        ____        │ ____ │                 │ ____ │
└──────┘      └──────┴─────────────┴──────┘ └────────────────────┴──────┘                 └──────┘
┌──────┐
│ ____ │
├──────┤
│ ____ │
├──────┤
│ ____ │
└──────┘
```

### Custom

#### KL_QWERTY

```
┌──────┬──────┬──────┬──────┬──────┬──────┬──────┐ ┌──────┬──────┬──────┬──────┬──────┬──────┬──────┐
│ ESC  │  1   │  2   │  3   │  4   │  5   │  6   │ │  7   │  8   │  9   │  0   │  -   │  =   │ BSPC │
├──────┼──────┼──────┼──────┼──────┼──────┼─┬────┴─┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
│  `   │  Q   │  W   │  E   │  R   │  T   │ │  Y   │  U   │  I   │  O   │  P   │  [   │  ]   │  \   │
├──────┼──────┼──────┼──────┼──────┼──────┤ ├──────┼──────┼──────┼──────┼──────┼──────┼──────┴──────┤
│ TAB  │  A   │  S   │  D   │  F   │  G   │ │  H   │  J   │  K   │  L   │  ;   │  '   │     ENT     │
├──────┼──────┼──────┼──────┼──────┼──────┤ ├──────┼──────┼──────┼──────┼──────┼──────┼──────┬──────┤
│ LSFT │  Z   │  X   │  C   │  V   │  B   │ │ IME  │  N   │  M   │  ,   │  .   │  /   │ RSFT │ MO_L │
├──────┼──────┼──────┼──────┴──────┼──────│ ├──────┴──────┴──────┼──────┼──────┴──────┴───┬──┴───┬──┘
│ LCTL │      │ LALT │    LGUI     │LOWER │ │       RAISE        │ RALT │                 │ RCTL │
└──────┘      └──────┴─────────────┴──────┘ └────────────────────┴──────┘                 └──────┘
┌──────┐
│ PAUS │
├──────┤
│ PSCR │
├──────┤
│  F5  │
└──────┘
```

#### KL_LOWER

```
┌──────┬──────┬──────┬──────┬──────┬──────┬──────┐ ┌──────┬──────┬──────┬──────┬──────┬──────┬──────┐
│  `   │  F1  │  F2  │  F3  │  F4  │  F5  │  F6  │ │  F7  │  F8  │  F9  │ F10  │ F11  │ F12  │ DEL  │
├──────┼──────┼──────┼──────┼──────┼──────┼─┬────┴─┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
│ ____ │ ____ │ ____ │ ____ │ ____ │ ____ │ │ ____ │ ____ │ ____ │ ____ │ ____ │ ____ │ ____ │ ____ │
├──────┼──────┼──────┼──────┼──────┼──────┤ ├──────┼──────┼──────┼──────┼──────┼──────┼──────┴──────┤
│ ____ │ HOME │ PGDN │ PGUP │ END  │ ____ │ │  ←   │  ↓   │  ↑   │  →   │ ____ │ ____ │     ____    │
├──────┼──────┼──────┼──────┼──────┼──────┤ ├──────┼──────┼──────┼──────┼──────┼──────┼──────┬──────┤
│ ____ │ ____ │ ____ │ ____ │ ____ │ IME  │ │ VOLD │ VOLU │ MUTE │ MPRV │ MNXT │ MPLY │ ____ │ ____ │
├──────┼──────┼──────┼──────┴──────┼──────│ ├──────┴──────┴──────┼──────┼──────┴──────┴───┬──┴───┬──┘
│ ____ │      │ ____ │    ____     │ ____ │ │        ____        │ ____ │                 │ ____ │
└──────┘      └──────┴─────────────┴──────┘ └────────────────────┴──────┘                 └──────┘
┌──────┐
│ ____ │
├──────┤
│ ____ │
├──────┤
│ LOCK │
└──────┘
```

#### KL_RAISE

```
┌──────┬──────┬──────┬──────┬──────┬──────┬──────┐ ┌──────┬──────┬──────┬──────┬──────┬──────┬──────┐
│ ____ │ ____ │ ____ │ ____ │ ____ │ ____ │ ____ │ │ ____ │ ____ │ ____ │ ____ │ ____ │ ____ │ ____ │
├──────┼──────┼──────┼──────┼──────┼──────┼─┬────┴─┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
│ ____ │ ____ │ ____ │ ____ │ ____ │  -   │ │  =   │ ____ │ ____ │  [   │  ]   │ ____ │ ____ │ ____ │
├──────┼──────┼──────┼──────┼──────┼──────┤ ├──────┼──────┼──────┼──────┼──────┼──────┼──────┴──────┤
│ ____ │ ____ │ ____ │ ____ │ ____ │ ____ │ │ ____ │ ____ │ ____ │ ____ │ ____ │ ____ │     ____    │
├──────┼──────┼──────┼──────┼──────┼──────┤ ├──────┼──────┼──────┼──────┼──────┼──────┼──────┬──────┤
│ ____ │ ____ │ ____ │ ____ │ ____ │ ____ │ │ ____ │ ____ │ ____ │ ____ │ ____ │ ____ │ ____ │ ____ │
├──────┼──────┼──────┼──────┴──────┼──────│ ├──────┴──────┴──────┼──────┼──────┴──────┴───┬──┴───┬──┘
│ ____ │      │ ____ │    ____     │ ____ │ │        ____        │ ____ │                 │ ____ │
└──────┘      └──────┴─────────────┴──────┘ └────────────────────┴──────┘                 └──────┘
┌──────┐
│ ____ │
├──────┤
│ ____ │
├──────┤
│ ____ │
└──────┘
```

#### KL_ADJUST

```
┌──────┬──────┬──────┬──────┬──────┬──────┬──────┐ ┌──────┬──────┬──────┬──────┬──────┬──────┬──────┐
│ ____ │ ____ │ ____ │ ____ │ ____ │ ____ │ ____ │ │ ____ │ ____ │ ____ │ ____ │ ____ │ ____ │ ____ │
├──────┼──────┼──────┼──────┼──────┼──────┼─┬────┴─┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
│ ____ │ ____ │ ____ │ ____ │ ____ │ ____ │ │ ____ │ ____ │ ____ │ ____ │ ____ │ ____ │ ____ │ ____ │
├──────┼──────┼──────┼──────┼──────┼──────┤ ├──────┼──────┼──────┼──────┼──────┼──────┼──────┴──────┤
│ ____ │ ____ │ ____ │ ____ │ ____ │ ____ │ │ ____ │ ____ │ ____ │ ____ │ ____ │ ____ │     ____    │
├──────┼──────┼──────┼──────┼──────┼──────┤ ├──────┼──────┼──────┼──────┼──────┼──────┼──────┬──────┤
│ ____ │ ____ │ ____ │ ____ │ ____ │ ____ │ │ ____ │ ____ │ ____ │ ____ │ ____ │ ____ │ ____ │ ____ │
├──────┼──────┼──────┼──────┴──────┼──────│ ├──────┴──────┴──────┼──────┼──────┴──────┴───┬──┴───┬──┘
│ ____ │      │ ____ │    ____     │ ____ │ │        ____        │ ____ │                 │ ____ │
└──────┘      └──────┴─────────────┴──────┘ └────────────────────┴──────┘                 └──────┘
┌──────┐
│ ____ │
├──────┤
│ ____ │
├──────┤
│ ____ │
└──────┘
```

## Author
* **Jun Kato**
    * GitHub : [a7p11t](https://github.com/a7p11t)

## License
This project is released under the Unlicense,
see the [UNLICENSE.md](UNLICENSE.md) file for details.
