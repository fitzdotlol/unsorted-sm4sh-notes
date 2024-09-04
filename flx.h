#pragma once

#include <stdint.h>

// NOTE: this work is proceeded by months of lm discoveries so
// types and terminology may be incorrect/inconsistent.
// I'll get back to this format someday...

typedef enum {
    XFORM_FLAG_X     = 0x01,
    XFORM_FLAG_Y     = 0x02,
    XFORM_FLAG_SCALE = 0x04,
    XFORM_FLAG_UNK1  = 0x08,
    XFORM_FLAG_UNK2  = 0x10,
    XFORM_FLAG_UNK3  = 0x20,
} transform_flag_t;

typedef struct {
    uint32_t magic; // "flx2"
    int16_t unk1;
    int16_t unk2;
    int16_t framerate;
    int16_t width;
    int16_t height;
    int16_t numMovieclips;
    int16_t numPositions;
    int16_t numColors;
    int16_t numElements;
    int16_t numTexts;
    int16_t numChunk6Entries;
    int16_t numFrameInfo;
    int16_t numPlacements;
    int16_t numFrames;
    int16_t numLabels;
    int16_t numChunk12Entries;
    int16_t numTextures;
    int16_t numSymbols;
    int16_t unk15;
    int16_t unk16;
    int16_t unk17;
    int16_t unk18;
    int16_t unk19;
    int16_t unk20;
} flx_header_t;


typedef struct {
    uint32_t unk1;
    uint16_t numFrames;
    uint16_t numChunk9Entries;
    uint16_t numLabels;
    uint16_t numElements;
    uint32_t startFrameIds;
    uint32_t startChunk9Ids;
    uint32_t startLabelIds;
} flx_movieclip_t;

// NOTE: size is not constant, as existence of fields is denoted by `flags`.
typedef struct {
    uint8_t flags; // transform_flag_t

    float x;
    float y;
    float scale;
    float unk1;
    int16_t unk2;
    int16_t unk3;
} flx_transform_t;


typedef struct {
    int32_t nameId;
    float centerX;
    float centerY;
    float width;
    float height;
} flx_element_t;

typedef struct {
    int32_t nameId;
    uint16_t x;
    uint16_t y;
    int32_t unk1;
    int32_t unk2;
} flx_text_t;

typedef struct {
    int32_t nameId;
    int32_t unk1;
    int16_t unk2;
    int16_t unk3;
} flx_chunk6_entry_t;

typedef struct {
    int16_t unk1;
    int16_t numPlacements;
    int16_t unk2;
    int16_t id;
} flx_frameinfo_t;

typedef struct {
    int16_t unk1;
    int16_t depth;
    int16_t textureNameId;
    int16_t unk4;
    int16_t unk5;
    int16_t positionOffset;
    int16_t colorId;
    int16_t elementId;
} flx_placement_t;

typedef struct {
    int32_t frameId;
    int32_t nameId;
} flx_label_t;
