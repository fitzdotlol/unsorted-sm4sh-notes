#pragma once

#include <stdint.h>

// I don't remember what this format is, but it came from a tool for flx,
// so I imagine it is probably related to that.

typedef struct {
    uint32_t magic;
    int16_t unk0;
    int16_t unk1;
    int16_t unk2;
    int16_t unk3;
    uint32_t unkOffset0;
    uint32_t unkOffset1;
    uint32_t stringsOffset;
} tinf_header_t;
