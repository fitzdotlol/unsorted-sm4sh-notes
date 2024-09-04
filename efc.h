#pragma once

#include <stdint.h>

typedef struct {
    uint32_t unk0;
    int32_t particleId;
    int32_t modelNameId;
    int16_t unk1;
    int16_t unk2;
} efc_effect_t;

typedef struct {
    uint16_t unk0;
    uint16_t unk1;
} efc_meshinfo_t;

typedef struct {
    uint32_t magic;
    uint32_t unk0;
    uint16_t numEffects;
    uint16_t numModelNames;
    uint16_t numMeshes;
    uint16_t pad;
} efc_header_t;
