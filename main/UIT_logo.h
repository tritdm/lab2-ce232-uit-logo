#ifndef _UIT_H_
#define _UIT_H_
#include <stdio.h>
#include <string.h>

uint8_t UIT_page[8][128];

char UIT_string[64][129] = {
"00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000",
"00000000000000000000000000000000000000000000000000000000001111000000000000000000000000000000000000000001111111110000000000000000",
"00000000000000000000000000000000000000000000000111111111111100000111000000000000000000000000000000000011111111111100000000000000",
"00000000000000000000000000000000000000000011111111111111000000110000001111000000000000000000000000000111111111111110000000000000",
"00000000000000000000000000000000000000011111111111111000001110000011110000000000000000001111111111111111111111111110000000000000",
"00000000000000000000000000000000000011111111111111000001100000111000000000000000011111111111111111111111111111111111000000000000",
"00000000000000000000000000000000001111111111111000011100000111000000000000011111111111111110000000000111111111111111111000000000",
"00000000000000000000000000000001111111111111000011100001110000000000000111111111111101100000000000000111111111111101111110000000",
"00000000000000000000000000000011111111111000001100001110000000000001111111111110000000011000000000000001111111111000001111000000",
"00000000000000000000000000001111111111100001100001110000000000011111111111100000000000000110000000000000001110000000000011110000",
"00000000000000000000000000111111111100001100001110000000000111111111111000000000000000000011000000000000000000000000000001111000",
"00000000000000000000000001111111110000110000110000000000111111111110000000000000000000000000100000000000000000000000000000111100",
"00000000000000000000000011111111000110000110000000000111111111100000000000000000000000000000011000000000000000000000000000011100",
"00000000000000000000000111111100011000011000000000111111111100000000000000000000000000000000001100000000000000000000000000001100",
"00000000000000000000011111100001100011100000000011111111100000000000000000000000000000000000000110000000000000000000000000001110",
"00000000000000000000011110000110001100000000011111111100000000000000000000000000000000000000000011000000000000000000000000000110",
"00000000000000000000111000011000110000000001111111100000000000000000000000000000000000000000000001100000000000000000000000000110",
"00000000000000000001110001100011000000001111111110000000000000000000000000000000000000000000000000100000000000000000000000000110",
"00000000000000000011000110001100000000111111111000000000000000000000000000000000000000000000000000010000000000000000000000000110",
"00000000000000000000011000110000000011111111000000000000000000000000000000000000000000000000000000011000000000000000000000000100",
"00000000000000000001100011000000001111111100000000000000000000000000000000000000000000000000000000001000000000000000000000000100",
"00000000000000000110001100000000111111110000000000000000000000000000000000000000000000000000000000001100000000000000000000001100",
"00000000000000001100110000000011111111000000000011111000000000000111110000000000000000000000000000000100000000000000000000001000",
"00000000000000000001100000001111111100000000000111111111000000111111111100000000000000000000000000000100000000000000000000011000",
"00000000000000000110000000111111111000000000011111111110000000001111111110000000000000000000000000000110000000000000000000010000",
"00000000000000001000000011111111100000000000111111111000011110000011111111000000000000000000000000000010000000000000000000100000",
"00000000000000010000000111111110000000000001111111100001111111100001111111100000000000000000000000000010000000000000000001000000",
"00000000000000000000011111111100000000000001111110000111111111111000011111110000000000000000000000000010000000000000000001000000",
"00000000000000000001111111110000000000000011111100001111111111111110001111110000000000000000000000000010000000000000000010000000",
"00000000000000000011111111100000000000000111111000111111111111111111000011111000000000000000000000000010000000000000000100000000",
"00000000000000001111111111000000000000000111100001111111111111111111100001111100000000000000000000000010000000000000001000000000",
"00000000000000011111111100000000000000000011000011111111111111111111111000110000000000000000000000000010000000000000000000000000",
"00000000000000111111111000000000000000000000000000111111111111111111100000000000000000000000000000000110000000000000000000000000",
"00000000000001111111110000000111111110001100000000000011111111110000000000001100011111111000000000000100000000000000000000000000",
"00000000000111111111100000000111111110001100011111000000001100000000111111000110011111111000000000000100000000000000000000000000",
"00000000001111111111000000000111111110001000111111111110000000011111111111100010011111111000000000001100000000000000000000000000",
"00000000011111111110000000000111111110000001111111111100000000001111111111100010011111111000000000001000000000000000000000000000",
"00000000111111111100000000000111111110000011111111100000000000000001111111110000011111111000000000011000000000000000000000000000",
"00000001111111111000000000000011111110000011111110000000000000000000011111111000011111110000000000010000000000000000000000000000",
"00000011111111110000000000000000000000000000000000000000000000000000000000000000000000000000000000100000000000000000000000000000",
"00000011111111110000000000000000000000000000000000000000000000000000000000000000000000000000000001100000000000000000000000000000",
"00000111111111100000000000000000000111111111111000000000000000000000000111111111111000000000000011000000000000000000000000000000",
"00001111111111100000000000000000000000111111111110000000000000000000001111111111100000000000000110000000000000000000000000000000",
"00001111111111000000000000000000000000001111111111000000000000000000111111111110000000000000001100000000000000000000000000000000",
"00011111111111000000000011111111110000000011111111100000000000000001111111110000000001111111111000000000000000000000000000000000",
"00011111111111000000000001111111111100000000111111110000000000000011111111000000000111111111100000000000000000000000000000000000",
"00111111111111000000000000111111111111000000001111111100000000000111111100000000011111111111000000000000000000000000000000000000",
"00111111111111000000000000001111111111110000000001111110000000011111110000000011111111111100000000000000000000000000000000000000",
"00111111111111000000000000000011111111111110000000011111000000111110000000011111111111111000000000000000000000000000000000000000",
"01111111111111000000000000000000111111111111111000000111100001111000000011111111111111100000000000000000000000000000000000000000",
"01111111111111100000000000000000001111111111111111110011111011110011111111111111111110000000000000000000000000000000000000000000",
"00111111111111110000000000000000000011111111111111111111111111111111111111111111110000000000000000000000000000000000000000000000",
"00111111111111110000000000000000000000011111111111111111111111111111111111111110000000000000000000000000000000000000000000000000",
"00111111111111111100000000000000000000000001111111111111111111111111111111110000000000000000000000000000000000000000000000000000",
"00111111111111111110000000000000000000000000000011111111111111111111111110000000000000000000000000000000000000000000000000000000",
"00011111111111111111100000000000000000000000000000000000000000000000110000000000000000000000000000000000000000000000000000000000",
"00001111111111111111111100000000000000000000000000000000000000011110000000000000000000000000000000000000000000000000000000000000",
"00000111111111111111111111100000000000000000000000000000111111110000000000000000000000000000000000000000000000000000000000000000",
"00000001111111111111111111111111111000000000011111111111111100000000000000000000000000000000000000000000000000000000000000000000",
"00000000111111111111111111111111111111111111111111111111000000000000000000000000000000000000000000000000000000000000000000000000",
"00000000000111111111111111111111111111111111111111100000000000000000000000000000000000000000000000000000000000000000000000000000",
"00000000000000011111111111111111111111111111100000000000000000000000000000000000000000000000000000000000000000000000000000000000",
"00000000000000000000011111111111111000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000",
"00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000",
};

void convert();

#endif