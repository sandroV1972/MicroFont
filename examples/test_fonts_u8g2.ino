#include <U8g2lib.h>
#include "../include/font_u8g2_adapter.h"

U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0);
FontRegistryU8g2 fontRegistry;

void setup() {
  u8g2.begin();
  u8g2.setFont(fontRegistry.getFont("Arial", 10));
  u8g2.clearBuffer();
  u8g2.drawStr(0, 20, "Hello from FontLib!");
  u8g2.sendBuffer();
}

void loop() {}
