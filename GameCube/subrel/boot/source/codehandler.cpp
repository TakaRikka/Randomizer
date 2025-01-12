#include "codehandler.h"

#include <cstdint>

namespace mod::codehandler
{
    // Compiled from GCcodehandlerDebug.s
    const uint8_t codehandler[] = {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x27, 0x74, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x94, 0x21, 0xFF, 0x58, 0x90, 0x01, 0x00, 0x08, 0x7C, 0x08, 0x02, 0xA6,
        0x90, 0x01, 0x00, 0xAC, 0x7C, 0x00, 0x00, 0x26, 0x90, 0x01, 0x00, 0x0C, 0x7C, 0x09, 0x02, 0xA6, 0x90, 0x01, 0x00, 0x10,
        0x7C, 0x01, 0x02, 0xA6, 0x90, 0x01, 0x00, 0x14, 0xBC, 0x61, 0x00, 0x18, 0x7F, 0x20, 0x00, 0xA6, 0x63, 0x3A, 0x20, 0x00,
        0x73, 0x5A, 0xF9, 0xFF, 0x7F, 0x40, 0x01, 0x24, 0xD8, 0x41, 0x00, 0x98, 0xD8, 0x61, 0x00, 0xA0, 0x3F, 0xE0, 0x80, 0x00,
        0x3E, 0x80, 0xCC, 0x00, 0xA3, 0x94, 0x40, 0x10, 0x63, 0x95, 0x00, 0xFF, 0xB2, 0xB4, 0x40, 0x10, 0x48, 0x00, 0x06, 0x55,
        0x3A, 0xA0, 0x00, 0x00, 0x3A, 0xC0, 0x00, 0x19, 0x3A, 0xE0, 0x00, 0xD0, 0x3F, 0x00, HRSA, 0x00, 0x63, 0xF2, 0x27, 0x74,
        0x80, 0x01, 0x00, 0xAC, 0x90, 0x12, 0x00, 0x04, 0x92, 0xB8, 0x64, 0x3C, 0x48, 0x00, 0x04, 0x2D, 0x41, 0x82, 0x05, 0xA4,
        0x2C, 0x1D, 0x00, 0x04, 0x40, 0x80, 0x00, 0x10, 0x2C, 0x1D, 0x00, 0x01, 0x41, 0x80, 0x05, 0x94, 0x48, 0x00, 0x03, 0x4C,
        0x41, 0x82, 0x04, 0xF0, 0x2C, 0x1D, 0x00, 0x06, 0x41, 0x82, 0x00, 0x8C, 0x2C, 0x1D, 0x00, 0x07, 0x41, 0x82, 0x03, 0x30,
        0x2C, 0x1D, 0x00, 0x08, 0x41, 0x82, 0x05, 0x80, 0x2C, 0x1D, 0x00, 0x09, 0x41, 0x82, 0x00, 0xA0, 0x2C, 0x1D, 0x00, 0x10,
        0x41, 0x82, 0x00, 0x98, 0x2C, 0x1D, 0x00, 0x2F, 0x41, 0x82, 0x00, 0x70, 0x2C, 0x1D, 0x00, 0x30, 0x41, 0x82, 0x00, 0x78,
        0x2C, 0x1D, 0x00, 0x38, 0x41, 0x82, 0x05, 0x28, 0x2C, 0x1D, 0x00, 0x40, 0x41, 0x82, 0x03, 0x40, 0x2C, 0x1D, 0x00, 0x41,
        0x41, 0x82, 0x03, 0x58, 0x2C, 0x1D, 0x00, 0x44, 0x41, 0x82, 0x00, 0x68, 0x2C, 0x1D, 0x00, 0x50, 0x41, 0x82, 0x00, 0x20,
        0x2C, 0x1D, 0x00, 0x60, 0x41, 0x82, 0x00, 0x24, 0x2C, 0x1D, 0x00, 0x89, 0x41, 0x82, 0x00, 0x50, 0x2C, 0x1D, 0x00, 0x99,
        0x41, 0x82, 0x05, 0x0C, 0x48, 0x00, 0x05, 0x10, 0x80, 0x72, 0x00, 0x00, 0x48, 0x00, 0x04, 0x29, 0x48, 0x00, 0x05, 0x04,
        0x48, 0x00, 0x05, 0x89, 0x48, 0x00, 0x04, 0xFC, 0x38, 0x80, 0x00, 0x01, 0x90, 0x92, 0x00, 0x00, 0x48, 0x00, 0x04, 0xF0,
        0x48, 0x00, 0x04, 0x09, 0x3A, 0x00, 0x00, 0xA0, 0x63, 0xEC, 0x27, 0x98, 0x48, 0x00, 0x03, 0x14, 0x38, 0x60, 0x01, 0x20,
        0x63, 0xEC, 0x27, 0x98, 0x48, 0x00, 0x03, 0xC9, 0x48, 0x00, 0x04, 0xD0, 0x2F, 0x1D, 0x00, 0x10, 0x2E, 0x9D, 0x00, 0x44,
        0x63, 0xE4, 0x1A, 0xB4, 0x3C, 0x60, 0x80, 0x00, 0x60, 0x63, 0x03, 0x00, 0x48, 0x00, 0x05, 0x09, 0x38, 0x63, 0x0A, 0x00,
        0x48, 0x00, 0x05, 0x01, 0x38, 0x63, 0x06, 0x00, 0x48, 0x00, 0x04, 0xF9, 0x63, 0xEC, 0x27, 0x88, 0x92, 0xAC, 0x00, 0x00,
        0x92, 0xAC, 0x00, 0x04, 0x92, 0xAC, 0x00, 0x08, 0x63, 0xE4, 0x27, 0x98, 0x81, 0x24, 0x00, 0x18, 0x80, 0x72, 0x00, 0x00,
        0x2C, 0x03, 0x00, 0x02, 0x40, 0x82, 0x00, 0x0C, 0x41, 0x96, 0x00, 0x0C, 0x48, 0x00, 0x00, 0x20, 0x38, 0x60, 0x00, 0x00,
        0x90, 0x6C, 0x00, 0x0C, 0x40, 0x82, 0x00, 0x14, 0x40, 0x96, 0x00, 0x10, 0x61, 0x29, 0x04, 0x00, 0x91, 0x24, 0x00, 0x18,
        0x48, 0x00, 0x02, 0x14, 0x55, 0x29, 0x05, 0xA8, 0x91, 0x24, 0x00, 0x18, 0x41, 0x96, 0x04, 0x54, 0x41, 0x9A, 0x00, 0x08,
        0x39, 0x8C, 0x00, 0x04, 0x38, 0x60, 0x00, 0x04, 0x48, 0x00, 0x03, 0x09, 0x40, 0x99, 0x00, 0x10, 0x39, 0x8C, 0x00, 0x04,
        0x38, 0x60, 0x00, 0x04, 0x48, 0x00, 0x02, 0xF9, 0x63, 0xE4, 0x27, 0x88, 0x80, 0x64, 0x00, 0x00, 0x80, 0x84, 0x00, 0x04,
        0x7C, 0x72, 0xFB, 0xA6, 0x7C, 0x95, 0xFB, 0xA6, 0x48, 0x00, 0x04, 0x1C, 0x7C, 0x32, 0x43, 0xA6, 0x7C, 0x3A, 0x02, 0xA6,
        0x7C, 0x73, 0x43, 0xA6, 0x7C, 0x7B, 0x02, 0xA6, 0x54, 0x63, 0x05, 0xA8, 0x90, 0x60, 0x27, 0xB0, 0x54, 0x63, 0x06, 0x1E,
        0x60, 0x63, 0x20, 0x00, 0x7C, 0x7B, 0x03, 0xA6, 0x3C, 0x60, 0x80, 0x00, 0x60, 0x63, 0x1A, 0xE8, 0x7C, 0x7A, 0x03, 0xA6,
        0x4C, 0x00, 0x00, 0x64, 0x3C, 0x60, 0x80, 0x00, 0x60, 0x63, 0x27, 0x98, 0x90, 0x23, 0x00, 0x14, 0x7C, 0x61, 0x1B, 0x78,
        0x7C, 0x73, 0x42, 0xA6, 0xBC, 0x41, 0x00, 0x24, 0x7C, 0x24, 0x0B, 0x78, 0x7C, 0x32, 0x42, 0xA6, 0x90, 0x04, 0x00, 0x1C,
        0x90, 0x24, 0x00, 0x20, 0x7C, 0x68, 0x02, 0xA6, 0x90, 0x64, 0x00, 0x9C, 0x7C, 0x60, 0x00, 0x26, 0x90, 0x64, 0x00, 0x00,
        0x7C, 0x61, 0x02, 0xA6, 0x90, 0x64, 0x00, 0x04, 0x7C, 0x69, 0x02, 0xA6, 0x90, 0x64, 0x00, 0x08, 0x7C, 0x72, 0x02, 0xA6,
        0x90, 0x64, 0x00, 0x0C, 0x7C, 0x73, 0x02, 0xA6, 0x90, 0x64, 0x00, 0x10, 0x39, 0x20, 0x00, 0x00, 0x7D, 0x32, 0xFB, 0xA6,
        0x7D, 0x35, 0xFB, 0xA6, 0x3C, 0xA0, 0x80, 0x00, 0x60, 0xA5, 0x1B, 0x70, 0x3F, 0xE0, 0xD0, 0x04, 0x63, 0xFF, 0x00, 0xA0,
        0x93, 0xE5, 0x00, 0x00, 0x7C, 0x00, 0x28, 0x6C, 0x7C, 0x00, 0x04, 0xAC, 0x7C, 0x00, 0x2F, 0xAC, 0x4C, 0x00, 0x01, 0x2C,
        0xD0, 0x04, 0x00, 0xA0, 0x3B, 0xFF, 0x00, 0x04, 0x3F, 0xFF, 0x00, 0x20, 0x57, 0xF0, 0x01, 0x4B, 0x41, 0x82, 0xFF, 0xDC,
        0x3F, 0xE0, 0x80, 0x00, 0x63, 0xE5, 0x27, 0x88, 0x82, 0x05, 0x00, 0x00, 0x82, 0x25, 0x00, 0x04, 0x82, 0x65, 0x00, 0x0C,
        0x2C, 0x13, 0x00, 0x00, 0x41, 0x82, 0x00, 0x74, 0x2C, 0x13, 0x00, 0x02, 0x40, 0x82, 0x00, 0x18, 0x81, 0x24, 0x00, 0x14,
        0x39, 0x33, 0x00, 0x03, 0x91, 0x25, 0x00, 0x00, 0x91, 0x25, 0x00, 0x0C, 0x48, 0x00, 0x00, 0x6C, 0x7C, 0x10, 0x98, 0x00,
        0x41, 0x82, 0x00, 0x38, 0x7C, 0x11, 0x98, 0x00, 0x41, 0x82, 0x00, 0x30, 0x7D, 0x30, 0x8A, 0x14, 0x91, 0x25, 0x00, 0x0C,
        0x82, 0x05, 0x00, 0x08, 0x2C, 0x10, 0x00, 0x00, 0x41, 0x82, 0x00, 0x48, 0x80, 0x64, 0x00, 0x10, 0x7C, 0x10, 0x18, 0x00,
        0x40, 0x82, 0x00, 0x10, 0x3A, 0x00, 0x00, 0x00, 0x92, 0x05, 0x00, 0x08, 0x48, 0x00, 0x00, 0x30, 0x3A, 0x20, 0x00, 0x00,
        0x92, 0x25, 0x00, 0x0C, 0x81, 0x24, 0x00, 0x18, 0x61, 0x29, 0x04, 0x00, 0x91, 0x24, 0x00, 0x18, 0x48, 0x00, 0x00, 0x30,
        0x7E, 0x12, 0xFB, 0xA6, 0x7E, 0x35, 0xFB, 0xA6, 0x39, 0x20, 0x00, 0x01, 0x91, 0x25, 0x00, 0x0C, 0x48, 0x00, 0x00, 0x1C,
        0x38, 0xA0, 0x00, 0x02, 0x63, 0xE4, 0x27, 0x74, 0x90, 0xA4, 0x00, 0x00, 0x38, 0x60, 0x00, 0x11, 0x48, 0x00, 0x01, 0xB9,
        0x4B, 0xFF, 0xFC, 0x71, 0x7C, 0x20, 0x00, 0xA6, 0x54, 0x21, 0x07, 0xFA, 0x54, 0x21, 0x04, 0x5E, 0x7C, 0x20, 0x01, 0x24,
        0x63, 0xE1, 0x27, 0x98, 0x80, 0x61, 0x00, 0x00, 0x7C, 0x6F, 0xF1, 0x20, 0x80, 0x61, 0x00, 0x14, 0x7C, 0x7A, 0x03, 0xA6,
        0x80, 0x61, 0x00, 0x18, 0x7C, 0x7B, 0x03, 0xA6, 0x80, 0x61, 0x00, 0x9C, 0x7C, 0x68, 0x03, 0xA6, 0xB8, 0x41, 0x00, 0x24,
        0x80, 0x01, 0x00, 0x1C, 0x80, 0x21, 0x00, 0x20, 0x4C, 0x00, 0x00, 0x64, 0x92, 0xB2, 0x00, 0x00, 0x48, 0x00, 0x02, 0x54,
        0x2E, 0x9D, 0x00, 0x02, 0x38, 0x60, 0x00, 0x08, 0x63, 0xEC, 0x27, 0x7C, 0x48, 0x00, 0x00, 0xFD, 0x80, 0xAC, 0x00, 0x00,
        0x80, 0x6C, 0x00, 0x04, 0x98, 0x65, 0x00, 0x00, 0x41, 0x94, 0x00, 0x10, 0xB0, 0x65, 0x00, 0x00, 0x41, 0x96, 0x00, 0x08,
        0x90, 0x65, 0x00, 0x00, 0x7C, 0x00, 0x28, 0xAC, 0x7C, 0x00, 0x04, 0xAC, 0x7C, 0x00, 0x2F, 0xAC, 0x4C, 0x00, 0x01, 0x2C,
        0x48, 0x00, 0x02, 0x08, 0x48, 0x00, 0x01, 0x21, 0x38, 0x60, 0x00, 0x04, 0x63, 0xEC, 0x27, 0x7C, 0x48, 0x00, 0x00, 0xBD,
        0x82, 0x0C, 0x00, 0x00, 0x3D, 0x80, 0x80, 0x00, 0x61, 0x8C, 0x28, 0xB8, 0x48, 0x00, 0x00, 0x1C, 0x48, 0x00, 0x01, 0x01,
        0x38, 0x60, 0x00, 0x08, 0x63, 0xEC, 0x27, 0x7C, 0x48, 0x00, 0x00, 0x9D, 0x82, 0x0C, 0x00, 0x04, 0x81, 0x8C, 0x00, 0x00,
        0x63, 0xFB, 0x27, 0x84, 0x3A, 0x20, 0x0F, 0x80, 0x48, 0x00, 0x02, 0x39, 0x41, 0x82, 0x00, 0x20, 0x7E, 0x23, 0x8B, 0x78,
        0x48, 0x00, 0x00, 0x7D, 0x48, 0x00, 0x00, 0xD1, 0x41, 0x82, 0xFF, 0xFC, 0x7D, 0x8C, 0x72, 0x14, 0x35, 0x6B, 0xFF, 0xFF,
        0x41, 0x81, 0xFF, 0xE8, 0x80, 0x7B, 0x00, 0x00, 0x2C, 0x03, 0x00, 0x00, 0x41, 0x82, 0x00, 0x08, 0x48, 0x00, 0x00, 0x59,
        0x7C, 0x00, 0x60, 0xAC, 0x7C, 0x00, 0x04, 0xAC, 0x7C, 0x00, 0x67, 0xAC, 0x4C, 0x00, 0x01, 0x2C, 0x48, 0x00, 0x01, 0x80,
        0x7F, 0xC8, 0x02, 0xA6, 0x3C, 0x60, 0xA0, 0x00, 0x48, 0x00, 0x00, 0x15, 0x76, 0x03, 0x08, 0x00, 0x56, 0x1D, 0x86, 0x3E,
        0x7F, 0xC8, 0x03, 0xA6, 0x4E, 0x80, 0x00, 0x20, 0x92, 0xF8, 0x68, 0x14, 0x90, 0x78, 0x68, 0x24, 0x92, 0xD8, 0x68, 0x20,
        0x80, 0xB8, 0x68, 0x20, 0x70, 0xA5, 0x00, 0x01, 0x40, 0x82, 0xFF, 0xF8, 0x82, 0x18, 0x68, 0x24, 0x90, 0xB8, 0x68, 0x14,
        0x4E, 0x80, 0x00, 0x20, 0x7D, 0x48, 0x02, 0xA6, 0x7C, 0x69, 0x03, 0xA6, 0x39, 0xC0, 0x00, 0x00, 0x48, 0x00, 0x00, 0x79,
        0x48, 0x00, 0x00, 0x75, 0x4B, 0xFF, 0xFF, 0xAD, 0x41, 0x82, 0xFF, 0xF4, 0x7F, 0xAE, 0x61, 0xAE, 0x39, 0xCE, 0x00, 0x01,
        0x42, 0x00, 0xFF, 0xE8, 0x7D, 0x48, 0x03, 0xA6, 0x4E, 0x80, 0x00, 0x20, 0x7D, 0x48, 0x02, 0xA6, 0x7C, 0x69, 0x03, 0xA6,
        0x39, 0xC0, 0x00, 0x00, 0x7C, 0x6C, 0x70, 0xAE, 0x48, 0x00, 0x00, 0x1D, 0x41, 0x82, 0xFF, 0xF8, 0x39, 0xCE, 0x00, 0x01,
        0x42, 0x00, 0xFF, 0xF0, 0x7D, 0x48, 0x03, 0xA6, 0x4E, 0x80, 0x00, 0x20, 0x38, 0x60, 0x00, 0xAA, 0x7F, 0xC8, 0x02, 0xA6,
        0x54, 0x63, 0xA0, 0x16, 0x64, 0x63, 0xB0, 0x00, 0x3A, 0xC0, 0x00, 0x19, 0x3A, 0xE0, 0x00, 0xD0, 0x3F, 0x00, HRSA, 0x00,
        0x4B, 0xFF, 0xFF, 0x69, 0x56, 0x03, 0x37, 0xFF, 0x7F, 0xC8, 0x03, 0xA6, 0x4E, 0x80, 0x00, 0x20, 0x7F, 0xC8, 0x02, 0xA6,
        0x3C, 0x60, 0xD0, 0x00, 0x4B, 0xFF, 0xFF, 0x51, 0x56, 0x03, 0x37, 0xFF, 0x41, 0x82, 0xFF, 0xF4, 0x7F, 0xC8, 0x03, 0xA6,
        0x4E, 0x80, 0x00, 0x20, 0x4B, 0xFF, 0xFF, 0xB9, 0x38, 0x60, 0x00, 0x08, 0x63, 0xEC, 0x27, 0x7C, 0x4B, 0xFF, 0xFF, 0x55,
        0x80, 0xAC, 0x00, 0x04, 0x81, 0x8C, 0x00, 0x00, 0x63, 0xFB, 0x27, 0x84, 0x62, 0xB1, 0xF8, 0x00, 0x7E, 0x0C, 0x28, 0x50,
        0x48, 0x00, 0x00, 0xED, 0x41, 0x81, 0x00, 0x10, 0x82, 0x3B, 0x00, 0x00, 0x2C, 0x11, 0x00, 0x00, 0x41, 0x82, 0x00, 0x68,
        0x7E, 0x23, 0x8B, 0x78, 0x4B, 0xFF, 0xFF, 0x55, 0x4B, 0xFF, 0xFF, 0xA5, 0x4B, 0xFF, 0xFF, 0xA1, 0x4B, 0xFF, 0xFE, 0xD9,
        0x41, 0x82, 0xFF, 0xF4, 0x2C, 0x1D, 0x00, 0xCC, 0x41, 0x82, 0x00, 0x48, 0x2C, 0x1D, 0x00, 0xBB, 0x41, 0x82, 0xFF, 0xDC,
        0x2C, 0x1D, 0x00, 0xAA, 0x40, 0x82, 0xFF, 0xDC, 0x7D, 0x8C, 0x72, 0x14, 0x35, 0x6B, 0xFF, 0xFF, 0x41, 0x80, 0x00, 0x2C,
        0x4B, 0xFF, 0xFF, 0xB4, 0x7E, 0xB5, 0xFB, 0xA6, 0x7E, 0xB2, 0xFB, 0xA6, 0x63, 0xE4, 0x27, 0x98, 0x81, 0x24, 0x00, 0x18,
        0x55, 0x29, 0x05, 0xA8, 0x91, 0x24, 0x00, 0x18, 0x48, 0x00, 0x00, 0x0C, 0x38, 0x60, 0x00, 0x80, 0x4B, 0xFF, 0xFF, 0x25,
        0x80, 0x92, 0x00, 0x00, 0x2C, 0x04, 0x00, 0x00, 0x40, 0x82, 0xFA, 0x50, 0xB3, 0x94, 0x40, 0x10, 0xC8, 0x41, 0x00, 0x98,
        0xC8, 0x61, 0x00, 0xA0, 0x7F, 0x20, 0x00, 0xA6, 0x80, 0x01, 0x00, 0xAC, 0x7C, 0x08, 0x03, 0xA6, 0x80, 0x01, 0x00, 0x0C,
        0x7C, 0x0F, 0xF1, 0x20, 0x80, 0x01, 0x00, 0x10, 0x7C, 0x09, 0x03, 0xA6, 0x80, 0x01, 0x00, 0x14, 0x7C, 0x01, 0x03, 0xA6,
        0xB8, 0x61, 0x00, 0x18, 0x80, 0x01, 0x00, 0x08, 0x38, 0x21, 0x00, 0xA8, 0x4C, 0x00, 0x01, 0x2C, 0x4E, 0x80, 0x00, 0x20,
        0x7E, 0x23, 0x20, 0x50, 0x3C, 0xA0, 0x48, 0x00, 0x52, 0x25, 0x01, 0xBA, 0x90, 0xA3, 0x00, 0x00, 0x7C, 0x00, 0x18, 0xAC,
        0x7C, 0x00, 0x04, 0xAC, 0x7C, 0x00, 0x1F, 0xAC, 0x4C, 0x00, 0x01, 0x2C, 0x4E, 0x80, 0x00, 0x20, 0x7D, 0x70, 0x8B, 0xD7,
        0x7D, 0x4B, 0x89, 0xD6, 0x7D, 0x4A, 0x80, 0x50, 0x91, 0x5B, 0x00, 0x00, 0x4E, 0x80, 0x00, 0x20, 0x7F, 0xA8, 0x02, 0xA6,
        0x3D, 0xE0, 0x80, 0x00, 0x61, 0xEF, 0x28, 0xB8, 0x63, 0xE7, 0x18, 0x08, 0x3C, 0xC0, 0x80, 0x00, 0x7C, 0xD0, 0x33, 0x78,
        0x39, 0x00, 0x00, 0x00, 0x3C, 0x60, 0x00, 0xD0, 0x60, 0x63, 0xC0, 0xDE, 0x80, 0x8F, 0x00, 0x00, 0x7C, 0x03, 0x20, 0x00,
        0x40, 0x82, 0x00, 0x18, 0x80, 0x8F, 0x00, 0x04, 0x7C, 0x03, 0x20, 0x00, 0x40, 0x82, 0x00, 0x0C, 0x39, 0xEF, 0x00, 0x08,
        0x48, 0x00, 0x00, 0x0C, 0x7F, 0xA8, 0x03, 0xA6, 0x4E, 0x80, 0x00, 0x20, 0x80, 0x6F, 0x00, 0x00, 0x80, 0x8F, 0x00, 0x04,
        0x39, 0xEF, 0x00, 0x08, 0x71, 0x09, 0x00, 0x01, 0x2F, 0x89, 0x00, 0x00, 0x39, 0x20, 0x00, 0x00, 0x54, 0x6A, 0x1F, 0x7E,
        0x54, 0x65, 0x3F, 0x7E, 0x74, 0x6B, 0x10, 0x00, 0x54, 0x63, 0x01, 0xFE, 0x40, 0x82, 0x00, 0x0C, 0x54, 0xCC, 0x00, 0x0C,
        0x48, 0x00, 0x00, 0x08, 0x7E, 0x0C, 0x83, 0x78, 0x2E, 0x05, 0x00, 0x00, 0x2C, 0x0A, 0x00, 0x01, 0x41, 0xA0, 0x00, 0x2C,
        0x41, 0xA2, 0x00, 0xE4, 0x2C, 0x0A, 0x00, 0x03, 0x41, 0xA0, 0x01, 0xAC, 0x41, 0x82, 0x02, 0x50, 0x2C, 0x0A, 0x00, 0x05,
        0x41, 0x80, 0x02, 0xD4, 0x41, 0xA2, 0x04, 0xE0, 0x2C, 0x0A, 0x00, 0x07, 0x41, 0xA0, 0x05, 0x0C, 0x48, 0x00, 0x05, 0xF0,
        0x7D, 0x8C, 0x1A, 0x14, 0x2C, 0x05, 0x00, 0x03, 0x41, 0x82, 0x00, 0x48, 0x41, 0x81, 0x00, 0x60, 0x40, 0xBE, 0xFF, 0x84,
        0x2E, 0x05, 0x00, 0x01, 0x41, 0x91, 0x00, 0x2C, 0x54, 0x8A, 0x84, 0x3E, 0x41, 0x92, 0x00, 0x10, 0x7C, 0x89, 0x61, 0xAE,
        0x39, 0x29, 0x00, 0x01, 0x48, 0x00, 0x00, 0x0C, 0x7C, 0x89, 0x63, 0x2E, 0x39, 0x29, 0x00, 0x02, 0x35, 0x4A, 0xFF, 0xFF,
        0x40, 0xA0, 0xFF, 0xE4, 0x4B, 0xFF, 0xFF, 0x54, 0x55, 0x8C, 0x00, 0x3A, 0x90, 0x8C, 0x00, 0x00, 0x4B, 0xFF, 0xFF, 0x48,
        0x7C, 0x89, 0x23, 0x78, 0x40, 0x9E, 0x04, 0xC8, 0x35, 0x29, 0xFF, 0xFF, 0x41, 0x80, 0x04, 0xC0, 0x7C, 0xA9, 0x78, 0xAE,
        0x7C, 0xA9, 0x61, 0xAE, 0x4B, 0xFF, 0xFF, 0xF0, 0x39, 0xEF, 0x00, 0x08, 0x40, 0xBE, 0xFF, 0x24, 0x80, 0xAF, 0xFF, 0xF8,
        0x81, 0x6F, 0xFF, 0xFC, 0x54, 0xB1, 0x04, 0x3E, 0x54, 0xAA, 0x85, 0x3E, 0x54, 0xA5, 0x27, 0x3E, 0x2E, 0x85, 0x00, 0x01,
        0x41, 0x96, 0x00, 0x10, 0x41, 0xB5, 0x00, 0x14, 0x7C, 0x89, 0x61, 0xAE, 0x48, 0x00, 0x00, 0x10, 0x7C, 0x89, 0x63, 0x2E,
        0x48, 0x00, 0x00, 0x08, 0x7C, 0x89, 0x61, 0x2E, 0x7C, 0x84, 0x5A, 0x14, 0x7D, 0x29, 0x8A, 0x14, 0x35, 0x4A, 0xFF, 0xFF,
        0x40, 0x80, 0xFF, 0xD4, 0x4B, 0xFF, 0xFE, 0xDC, 0x54, 0x69, 0x07, 0xFF, 0x41, 0x82, 0x00, 0x10, 0x55, 0x08, 0xF8, 0x7E,
        0x71, 0x09, 0x00, 0x01, 0x2F, 0x89, 0x00, 0x00, 0x2E, 0x85, 0x00, 0x04, 0x2D, 0x8A, 0x00, 0x05, 0x51, 0x08, 0x08, 0x3C,
        0x40, 0x9E, 0x00, 0x78, 0x41, 0x8D, 0x04, 0xB8, 0x7D, 0x8C, 0x1A, 0x14, 0x41, 0x8C, 0x00, 0x0C, 0x41, 0x94, 0x00, 0x30,
        0x48, 0x00, 0x00, 0x1C, 0x40, 0x94, 0x00, 0x10, 0x55, 0x8C, 0x00, 0x3A, 0x81, 0x6C, 0x00, 0x00, 0x48, 0x00, 0x00, 0x1C,
        0x55, 0x8C, 0x00, 0x3C, 0xA1, 0x6C, 0x00, 0x00, 0x7C, 0x89, 0x20, 0xF8, 0x55, 0x29, 0x84, 0x3E, 0x7D, 0x6B, 0x48, 0x38,
        0x54, 0x84, 0x04, 0x3E, 0x7F, 0x0B, 0x20, 0x40, 0x70, 0xA9, 0x00, 0x03, 0x41, 0x82, 0x00, 0x18, 0x2C, 0x09, 0x00, 0x02,
        0x41, 0x82, 0x00, 0x18, 0x41, 0x81, 0x00, 0x1C, 0x40, 0x9A, 0x00, 0x20, 0x48, 0x00, 0x00, 0x18, 0x41, 0x9A, 0x00, 0x18,
        0x48, 0x00, 0x00, 0x10, 0x41, 0x99, 0x00, 0x10, 0x48, 0x00, 0x00, 0x08, 0x41, 0x98, 0x00, 0x08, 0x61, 0x08, 0x00, 0x01,
        0x40, 0x8E, 0xFE, 0x40, 0x41, 0x94, 0xFE, 0x3C, 0x81, 0x6F, 0xFF, 0xF8, 0x40, 0x9E, 0x00, 0x20, 0x70, 0x6C, 0x00, 0x08,
        0x41, 0x82, 0x00, 0x0C, 0x71, 0x0C, 0x00, 0x01, 0x41, 0x82, 0x00, 0x10, 0x39, 0x8B, 0x00, 0x10, 0x51, 0x8B, 0x03, 0x36,
        0x48, 0x00, 0x00, 0x08, 0x55, 0x6B, 0x07, 0x16, 0x91, 0x6F, 0xFF, 0xF8, 0x4B, 0xFF, 0xFE, 0x0C, 0x40, 0xBE, 0xFE, 0x08,
        0x54, 0x69, 0x16, 0xBA, 0x54, 0x6E, 0x87, 0xFE, 0x2D, 0x8E, 0x00, 0x00, 0x2E, 0x05, 0x00, 0x04, 0x70, 0xAE, 0x00, 0x03,
        0x2E, 0x8E, 0x00, 0x02, 0x41, 0x94, 0x00, 0x14, 0x41, 0x96, 0x00, 0x50, 0x7C, 0x64, 0x07, 0x34, 0x7C, 0x84, 0x7A, 0x14,
        0x48, 0x00, 0x00, 0x68, 0x54, 0x65, 0xA7, 0xFF, 0x41, 0x82, 0x00, 0x0C, 0x7D, 0x27, 0x48, 0x2E, 0x7C, 0x84, 0x4A, 0x14,
        0x41, 0x8E, 0x00, 0x08, 0x7C, 0x8C, 0x22, 0x14, 0x2E, 0x8E, 0x00, 0x01, 0x41, 0x96, 0x00, 0x08, 0x80, 0x84, 0x00, 0x00,
        0x54, 0x63, 0x67, 0xFF, 0x41, 0x82, 0x00, 0x3C, 0x40, 0x90, 0x00, 0x0C, 0x7C, 0x84, 0x32, 0x14, 0x48, 0x00, 0x00, 0x30,
        0x7C, 0x84, 0x82, 0x14, 0x48, 0x00, 0x00, 0x28, 0x54, 0x65, 0xA7, 0xFF, 0x41, 0x82, 0x00, 0x0C, 0x7D, 0x27, 0x48, 0x2E,
        0x7C, 0x84, 0x4A, 0x14, 0x40, 0x90, 0x00, 0x0C, 0x7C, 0xCC, 0x21, 0x2E, 0x4B, 0xFF, 0xFD, 0x80, 0x7E, 0x0C, 0x21, 0x2E,
        0x4B, 0xFF, 0xFD, 0x78, 0x40, 0x90, 0x00, 0x0C, 0x7C, 0x86, 0x23, 0x78, 0x4B, 0xFF, 0xFD, 0x6C, 0x7C, 0x90, 0x23, 0x78,
        0x4B, 0xFF, 0xFD, 0x64, 0x54, 0x89, 0x1E, 0x78, 0x39, 0x29, 0x00, 0x40, 0x2C, 0x05, 0x00, 0x02, 0x41, 0x80, 0x00, 0x48,
        0x54, 0x6B, 0x50, 0x03, 0x41, 0x82, 0x00, 0x14, 0x41, 0x81, 0x00, 0x08, 0x48, 0x00, 0x00, 0x10, 0x41, 0xBE, 0xFD, 0x40,
        0x48, 0x00, 0x00, 0x08, 0x40, 0xBE, 0xFD, 0x38, 0x2C, 0x05, 0x00, 0x03, 0x41, 0x81, 0x00, 0x10, 0x41, 0xA2, 0x00, 0x10,
        0x7D, 0xE7, 0x48, 0x2E, 0x4B, 0xFF, 0xFD, 0x24, 0x7D, 0xE7, 0x49, 0x2E, 0x7C, 0x64, 0x07, 0x34, 0x54, 0x84, 0x1A, 0x78,
        0x7D, 0xEF, 0x22, 0x14, 0x4B, 0xFF, 0xFD, 0x10, 0x40, 0xBE, 0xFD, 0x0C, 0x7C, 0xA7, 0x4A, 0x14, 0x40, 0x92, 0x00, 0x14,
        0x54, 0x64, 0x04, 0x3E, 0x91, 0xE5, 0x00, 0x00, 0x90, 0x85, 0x00, 0x04, 0x4B, 0xFF, 0xFC, 0xF4, 0x81, 0x25, 0x00, 0x04,
        0x2C, 0x09, 0x00, 0x00, 0x41, 0xA2, 0xFC, 0xE8, 0x39, 0x29, 0xFF, 0xFF, 0x91, 0x25, 0x00, 0x04, 0x81, 0xE5, 0x00, 0x00,
        0x4B, 0xFF, 0xFC, 0xD8, 0x40, 0xBE, 0xFC, 0xD4, 0x54, 0x6B, 0x16, 0xBA, 0x7F, 0x47, 0x5A, 0x14, 0x81, 0x3A, 0x00, 0x00,
        0x54, 0x6E, 0x67, 0xBE, 0x41, 0x92, 0x00, 0x84, 0x2E, 0x05, 0x00, 0x05, 0x40, 0x90, 0x01, 0x74, 0x2E, 0x05, 0x00, 0x03,
        0x40, 0x90, 0x00, 0x90, 0x2E, 0x05, 0x00, 0x01, 0x54, 0x65, 0x87, 0xFF, 0x41, 0x82, 0x00, 0x08, 0x7C, 0x8C, 0x22, 0x14,
        0x2F, 0x0E, 0x00, 0x01, 0x40, 0x92, 0x00, 0x24, 0x41, 0xB9, 0x00, 0x18, 0x41, 0x9A, 0x00, 0x0C, 0x88, 0x84, 0x00, 0x00,
        0x48, 0x00, 0x00, 0xF8, 0xA0, 0x84, 0x00, 0x00, 0x48, 0x00, 0x00, 0xF0, 0x80, 0x84, 0x00, 0x00, 0x48, 0x00, 0x00, 0xE8,
        0x54, 0x73, 0xE5, 0x3E, 0x41, 0xB9, 0x00, 0x20, 0x41, 0x9A, 0x00, 0x10, 0x99, 0x24, 0x00, 0x00, 0x38, 0x84, 0x00, 0x01,
        0x48, 0x00, 0x00, 0x18, 0xB1, 0x24, 0x00, 0x00, 0x38, 0x84, 0x00, 0x02, 0x48, 0x00, 0x00, 0x0C, 0x91, 0x24, 0x00, 0x00,
        0x38, 0x84, 0x00, 0x04, 0x36, 0x73, 0xFF, 0xFF, 0x40, 0x80, 0xFF, 0xD4, 0x4B, 0xFF, 0xFC, 0x40, 0x54, 0x65, 0x87, 0xFF,
        0x41, 0x82, 0x00, 0x08, 0x7C, 0x84, 0x62, 0x14, 0x71, 0xC5, 0x00, 0x01, 0x41, 0x82, 0x00, 0x9C, 0x7C, 0x84, 0x4A, 0x14,
        0x48, 0x00, 0x00, 0x94, 0x54, 0x6A, 0x87, 0xBE, 0x54, 0x8E, 0x16, 0xBA, 0x7E, 0x67, 0x72, 0x14, 0x40, 0x92, 0x00, 0x08,
        0x3A, 0x6F, 0xFF, 0xFC, 0x80, 0x9A, 0x00, 0x00, 0x81, 0x33, 0x00, 0x00, 0x71, 0x4B, 0x00, 0x01, 0x41, 0x82, 0x00, 0x08,
        0x7C, 0x9A, 0x23, 0x78, 0x71, 0x4B, 0x00, 0x02, 0x41, 0x82, 0x00, 0x10, 0x7D, 0x33, 0x4B, 0x78, 0x40, 0xB2, 0x00, 0x08,
        0x7E, 0x6C, 0x9A, 0x14, 0x54, 0x65, 0x67, 0x3F, 0x2C, 0x05, 0x00, 0x09, 0x40, 0x80, 0x00, 0x54, 0x48, 0x00, 0x00, 0x79,
        0x7C, 0x89, 0x22, 0x14, 0x48, 0x00, 0x00, 0x40, 0x7C, 0x89, 0x21, 0xD6, 0x48, 0x00, 0x00, 0x38, 0x7D, 0x24, 0x23, 0x78,
        0x48, 0x00, 0x00, 0x30, 0x7D, 0x24, 0x20, 0x38, 0x48, 0x00, 0x00, 0x28, 0x7D, 0x24, 0x22, 0x78, 0x48, 0x00, 0x00, 0x20,
        0x7D, 0x24, 0x20, 0x30, 0x48, 0x00, 0x00, 0x18, 0x7D, 0x24, 0x24, 0x30, 0x48, 0x00, 0x00, 0x10, 0x5D, 0x24, 0x20, 0x3E,
        0x48, 0x00, 0x00, 0x08, 0x7D, 0x24, 0x26, 0x30, 0x90, 0x9A, 0x00, 0x00, 0x4B, 0xFF, 0xFB, 0x8C, 0x2C, 0x05, 0x00, 0x0A,
        0x41, 0x81, 0xFB, 0x84, 0xC0, 0x5A, 0x00, 0x00, 0xC0, 0x73, 0x00, 0x00, 0x41, 0x82, 0x00, 0x0C, 0xEC, 0x43, 0x10, 0x2A,
        0x48, 0x00, 0x00, 0x08, 0xEC, 0x43, 0x00, 0xB2, 0xD0, 0x5A, 0x00, 0x00, 0x4B, 0xFF, 0xFB, 0x64, 0x7D, 0x48, 0x02, 0xA6,
        0x54, 0xA5, 0x1E, 0x78, 0x7D, 0x4A, 0x2A, 0x14, 0x80, 0x9A, 0x00, 0x00, 0x81, 0x33, 0x00, 0x00, 0x7D, 0x48, 0x03, 0xA6,
        0x4E, 0x80, 0x00, 0x20, 0x40, 0xBE, 0xFB, 0x44, 0x54, 0x69, 0xC0, 0x3E, 0x7D, 0x8E, 0x63, 0x78, 0x48, 0x00, 0x00, 0x35,
        0x41, 0x92, 0x00, 0x0C, 0x7E, 0x31, 0x22, 0x14, 0x48, 0x00, 0x00, 0x08, 0x7D, 0x29, 0x22, 0x14, 0x54, 0x64, 0xC4, 0x3F,
        0x38, 0xA0, 0x00, 0x00, 0x41, 0x82, 0xFB, 0x1C, 0x7D, 0x45, 0x88, 0xAE, 0x7D, 0x45, 0x49, 0xAE, 0x38, 0xA5, 0x00, 0x01,
        0x7C, 0x05, 0x20, 0x00, 0x4B, 0xFF, 0xFF, 0xEC, 0x2E, 0x8A, 0x00, 0x04, 0x55, 0x31, 0x36, 0xBA, 0x2C, 0x11, 0x00, 0x3C,
        0x7E, 0x27, 0x88, 0x2E, 0x40, 0x82, 0x00, 0x08, 0x7D, 0xD1, 0x73, 0x78, 0x41, 0x96, 0x00, 0x08, 0xA2, 0x31, 0x00, 0x00,
        0x55, 0x29, 0x56, 0xBA, 0x2C, 0x09, 0x00, 0x3C, 0x7D, 0x27, 0x48, 0x2E, 0x40, 0x82, 0x00, 0x08, 0x7D, 0xC9, 0x73, 0x78,
        0x41, 0x96, 0x00, 0x08, 0xA1, 0x29, 0x00, 0x00, 0x4E, 0x80, 0x00, 0x20, 0x2C, 0x05, 0x00, 0x04, 0x40, 0x80, 0x00, 0x28,
        0x7C, 0x89, 0x23, 0x78, 0x7D, 0xC3, 0x62, 0x14, 0x55, 0xCE, 0x00, 0x3C, 0x4B, 0xFF, 0xFF, 0xAD, 0x7C, 0x84, 0x20, 0xF8,
        0x54, 0x84, 0x04, 0x3E, 0x7D, 0x2B, 0x20, 0x38, 0x7E, 0x24, 0x20, 0x38, 0x4B, 0xFF, 0xFB, 0xC4, 0x54, 0x6B, 0xE4, 0x3E,
        0x4B, 0xFF, 0xFB, 0xBC, 0x7C, 0x9A, 0x23, 0x78, 0x54, 0x84, 0x18, 0x38, 0x40, 0x92, 0x00, 0x20, 0x40, 0x9E, 0x00, 0x0C,
        0x7D, 0xE8, 0x03, 0xA6, 0x4E, 0x80, 0x00, 0x21, 0x7D, 0xE4, 0x7A, 0x14, 0x39, 0xEF, 0x00, 0x07, 0x55, 0xEF, 0x00, 0x38,
        0x4B, 0xFF, 0xFA, 0x6C, 0x2E, 0x05, 0x00, 0x03, 0x41, 0x91, 0x00, 0x5C, 0x3C, 0xA0, 0x48, 0x00, 0x7D, 0x83, 0x62, 0x14,
        0x55, 0x8C, 0x00, 0x3A, 0x40, 0x92, 0x00, 0x20, 0x40, 0xBE, 0xFA, 0x50, 0x57, 0x44, 0x00, 0x3A, 0x7C, 0x8C, 0x20, 0x50,
        0x50, 0x85, 0x01, 0xBA, 0x50, 0x65, 0x07, 0xFE, 0x90, 0xAC, 0x00, 0x00, 0x4B, 0xFF, 0xFA, 0x38, 0x40, 0xBE, 0xFF, 0xBC,
        0x7D, 0x2C, 0x78, 0x50, 0x51, 0x25, 0x01, 0xBA, 0x90, 0xAC, 0x00, 0x00, 0x39, 0x8C, 0x00, 0x04, 0x7D, 0x6F, 0x22, 0x14,
        0x39, 0x6B, 0xFF, 0xFC, 0x7D, 0x2B, 0x60, 0x50, 0x51, 0x25, 0x01, 0xBA, 0x90, 0xAB, 0x00, 0x00, 0x4B, 0xFF, 0xFF, 0x94,
        0x2E, 0x05, 0x00, 0x06, 0x41, 0x92, 0x00, 0x28, 0x4B, 0xFF, 0xFB, 0x28, 0x55, 0x8C, 0x84, 0x3E, 0x57, 0x44, 0x84, 0x3E,
        0x57, 0x5A, 0x04, 0x3E, 0x7C, 0x0C, 0x20, 0x00, 0x41, 0x80, 0xFB, 0xA8, 0x7C, 0x0C, 0xD0, 0x00, 0x40, 0x80, 0xFB, 0xA0,
        0x4B, 0xFF, 0xF9, 0xE0, 0x57, 0x45, 0xFF, 0xFE, 0x68, 0xA5, 0x00, 0x01, 0x71, 0x03, 0x00, 0x01, 0x7C, 0x05, 0x18, 0x00,
        0x41, 0x82, 0x00, 0x1C, 0x51, 0x1A, 0x0F, 0xBC, 0x6B, 0x5A, 0x00, 0x02, 0x57, 0x45, 0xFF, 0xFF, 0x41, 0x82, 0x00, 0x08,
        0x6B, 0x5A, 0x00, 0x01, 0x93, 0x4F, 0xFF, 0xFC, 0x53, 0x48, 0x07, 0xFE, 0x4B, 0xFF, 0xF9, 0xAC, 0x2C, 0x0B, 0x00, 0x00,
        0x41, 0x82, 0x01, 0x38, 0x2C, 0x05, 0x00, 0x01, 0x41, 0x82, 0x00, 0x18, 0x2C, 0x05, 0x00, 0x02, 0x41, 0x82, 0x00, 0x14,
        0x2C, 0x05, 0x00, 0x03, 0x41, 0x82, 0x00, 0x70, 0x4B, 0xFF, 0xF9, 0x80, 0x54, 0xCC, 0x00, 0x0C, 0x54, 0x97, 0x46, 0x3E,
        0x54, 0x98, 0xC4, 0x3E, 0x54, 0x84, 0x06, 0x3E, 0x40, 0x9E, 0x00, 0xFC, 0x56, 0xF9, 0x06, 0x31, 0x7D, 0x9A, 0x63, 0x78,
        0x7F, 0x43, 0xD2, 0x14, 0x57, 0x5A, 0x00, 0x3A, 0x41, 0x82, 0x00, 0x18, 0x7E, 0xF7, 0x07, 0x74, 0x7E, 0xF7, 0x00, 0xD0,
        0x1F, 0x37, 0x00, 0x02, 0x3B, 0x39, 0x00, 0x04, 0x7F, 0x59, 0xD0, 0x50, 0x2C, 0x17, 0x00, 0x00, 0x41, 0x82, 0x00, 0x1C,
        0x3B, 0x20, 0x00, 0x00, 0x7E, 0xE9, 0x03, 0xA6, 0xA3, 0x7A, 0x00, 0x04, 0x7F, 0x79, 0xCA, 0x78, 0x3B, 0x5A, 0x00, 0x02,
        0x42, 0x00, 0xFF, 0xF4, 0x7C, 0x18, 0xC8, 0x00, 0x40, 0x82, 0x00, 0xAC, 0x4B, 0xFF, 0xFE, 0x90, 0x51, 0x08, 0x08, 0x3C,
        0x40, 0x9E, 0x00, 0x9C, 0x54, 0x77, 0xB0, 0x03, 0x41, 0x81, 0x00, 0x88, 0x41, 0x80, 0x00, 0x8C, 0x54, 0x7E, 0x06, 0x3E,
        0x1F, 0xDE, 0x00, 0x02, 0x54, 0x97, 0x00, 0x1E, 0x6E, 0xF8, 0x80, 0x00, 0x2C, 0x18, 0x00, 0x00, 0x40, 0x82, 0x00, 0x08,
        0x62, 0xF7, 0x30, 0x00, 0x54, 0x98, 0x80, 0x1E, 0x1F, 0x3E, 0x00, 0x04, 0x7F, 0x19, 0xC0, 0x50, 0x3B, 0x20, 0x00, 0x00,
        0x1F, 0x59, 0x00, 0x04, 0x7F, 0x6F, 0xD0, 0x2E, 0x7F, 0x57, 0xD0, 0x2E, 0x3B, 0x39, 0x00, 0x01, 0x7C, 0x17, 0xC0, 0x40,
        0x41, 0x81, 0x00, 0x34, 0x7C, 0x19, 0xF0, 0x00, 0x41, 0x81, 0x00, 0x14, 0x7C, 0x1A, 0xD8, 0x00, 0x41, 0x82, 0xFF, 0xDC,
        0x3A, 0xF7, 0x00, 0x04, 0x4B, 0xFF, 0xFF, 0xD0, 0x80, 0x6F, 0xFF, 0xF8, 0x60, 0x63, 0x03, 0x00, 0x90, 0x6F, 0xFF, 0xF8,
        0x92, 0xEF, 0xFF, 0xFC, 0x7E, 0xF0, 0xBB, 0x78, 0x48, 0x00, 0x00, 0x1C, 0x80, 0x6F, 0xFF, 0xF8, 0x60, 0x63, 0x01, 0x00,
        0x90, 0x6F, 0xFF, 0xF8, 0x61, 0x08, 0x00, 0x01, 0x48, 0x00, 0x00, 0x08, 0x7C, 0x90, 0x23, 0x78, 0x54, 0x64, 0x06, 0x3E,
        0x1C, 0x84, 0x00, 0x08, 0x7D, 0xE4, 0x7A, 0x14, 0x4B, 0xFF, 0xF8, 0x70, 0x40, 0x92, 0x00, 0x0C, 0x39, 0x00, 0x00, 0x00,
        0x48, 0x00, 0x00, 0x14, 0x54, 0x69, 0x06, 0xFF, 0x54, 0x65, 0x67, 0xFE, 0x7D, 0x08, 0x4C, 0x30, 0x55, 0x17, 0xFF, 0xFF,
        0x40, 0x82, 0x00, 0x08, 0x7D, 0x08, 0x2A, 0x78, 0x54, 0x85, 0x00, 0x1F, 0x41, 0x82, 0x00, 0x08, 0x7C, 0xA6, 0x2B, 0x78,
        0x54, 0x85, 0x80, 0x1F, 0x41, 0x82, 0x00, 0x08, 0x7C, 0xB0, 0x2B, 0x78, 0x4B, 0xFF, 0xF8, 0x30, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    };

    const uint16_t codehandlerSize = sizeof( codehandler );
}     // namespace mod::codehandler