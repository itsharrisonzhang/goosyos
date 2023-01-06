#pragma once
#include "../../../libc/include/int.hh"

enum vga_color {
    VGA_COLOR_BLACK         = 0,
	VGA_COLOR_BLUE          = 1,
	VGA_COLOR_GREEN         = 2,
	VGA_COLOR_CYAN          = 3,
	VGA_COLOR_RED           = 4,
	VGA_COLOR_MAGENTA       = 5,
	VGA_COLOR_BROWN         = 6,
	VGA_COLOR_LIGHT_GREY    = 7,
	VGA_COLOR_DARK_GREY     = 8,
	VGA_COLOR_LIGHT_BLUE    = 9,
	VGA_COLOR_LIGHT_GREEN   = 10,
	VGA_COLOR_LIGHT_CYAN    = 11,
	VGA_COLOR_LIGHT_RED     = 12,
	VGA_COLOR_LIGHT_MAGENTA = 13,
	VGA_COLOR_LIGHT_BROWN   = 14,
	VGA_COLOR_WHITE         = 15,
};

#ifdef __cplusplus
extern "C" {
#endif

static inline auto vga_entry_color (enum vga_color fg, enum vga_color bg) -> u8 {
	return fg | bg << 4;
}

static inline auto vga_entry(unsigned char c, u8 color) -> u16 {
	return (u16)c | (u16)color << 8;
}

#ifdef __cplusplus
}
#endif
