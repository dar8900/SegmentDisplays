#ifndef SEGMENT_DISPLAYS_H
#define SEGMENT_DISPLAYS_H

#include <Arduino.h>
#include <SPI.h>
#include <bitBangedSPI.h>
#include <MAX7219.h>
#include <stdint.h>


#define N_CHIPS				1
#define CS				   10
#define MIN_INTENSITY	   14
#define MAX_CHARS			9

void SegDispBegin();
void SegDispPrintInt(uint32_t Number);
void SegDispPrintInt(int32_t Number);
void SegDispPrintFl(float Number, int Decimal);
void SegDispPrintString(char *string);
void SegDispReset();
void SegDispSetIntensity(uint8_t Intensity);

#endif