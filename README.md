# FontLib

**FontLib** è una libreria modulare per Arduino/ESP32 che permette la gestione unificata dei font bitmap per display grafici, come `U8g2`.

## Struttura

- `font_library_core.h` – gestione base dei font (nome, dimensione, puntatore)
- `font_u8g2_adapter.h` – adattatore per U8g2
- `examples/test_fonts_u8g2.ino` – esempio di utilizzo

## Utilizzo

```cpp
FontRegistryU8g2 fonts;
u8g2.setFont(fonts.getFont("Arial", 10));
```

## Autore

Alessandro Valenti – 2025
