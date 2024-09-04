#pragma once

typedef struct {
    uint32_t magic;
    uint16_t lineHeight;
    uint16_t spaceWidth;
    uint16_t numGlyphs;
    uint16_t nominalSize;
    uint32_t unk;
} fgb_header_t;

typedef struct {
    uint32_t unk0;
    float x;
    float y;
    int16_t advance;
    int16_t unk1;

    int16_t unk2; // 21
    int16_t xBearing; // -6
    int16_t yBearing; // 5
    int16_t unk4; // usually 65 (A)
    int16_t width;
    int16_t height;

    uint16_t codePoint; // "BIG ENDIAN?"

    // padding maybe. who knows
    uint16_t unk5
    uint32_t unk6;
} fgb_glyph_t;
