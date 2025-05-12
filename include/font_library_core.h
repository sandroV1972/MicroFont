#ifndef FONT_LIBRARY_CORE_H
#define FONT_LIBRARY_CORE_H

struct FontMeta {
  const char* name;
  int size;
  const void* fontPtr;
};

class FontRegistry {
protected:
  static const int MAX_FONTS = 64;
  FontMeta fonts[MAX_FONTS];
  int count = 0;

public:
  void add(const char* name, int size, const void* ptr) {
    if (count < MAX_FONTS) {
      fonts[count++] = {name, size, ptr};
    }
  }

  const FontMeta* find(const char* name, int size) const {
    for (int i = 0; i < count; ++i) {
      if (strcmp(name, fonts[i].name) == 0 && fonts[i].size == size) {
        return &fonts[i];
      }
    }
    return nullptr;
  }
};

#endif
