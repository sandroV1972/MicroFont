#ifndef FONT_U8G2_ADAPTER_H
#define FONT_U8G2_ADAPTER_H

#include <U8g2lib.h>
#include "font_library_core.h"

class FontRegistryU8g2 : public FontRegistry {
public:
  FontRegistryU8g2() {
    add("Arial", 8, u8g2_font_helvR08_tf);
    add("Arial", 10, u8g2_font_helvR10_tf);
    add("Arial", 12, u8g2_font_helvR12_tf);
    add("Courier", 10, u8g2_font_courR10_tf);
    add("Times", 10, u8g2_font_ncenR10_tf);
  }

  const uint8_t* getFont(const char* name, int size) {
    const FontMeta* f = find(name, size);
    return f ? static_cast<const uint8_t*>(f->fontPtr) : u8g2_font_6x10_tf;
  }
};

#endif
