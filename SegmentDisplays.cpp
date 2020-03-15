#include "SegmentDisplays.h"

MAX7219 display (N_CHIPS, CS);


void SegDispBegin()
{
	display.begin();
}


void SegDispPrintInt(uint32_t Number)
{
	char numstr[MAX_CHARS];
	snprintf(numstr, MAX_CHARS, "%8ld", Number);
	display.sendString(numstr);		
}

void SegDispPrintInt(int32_t Number)
{
	char numstr[MAX_CHARS];
	snprintf(numstr, MAX_CHARS, "%8ld", Number);
	display.sendString(numstr);		
}

void SegDispPrintFl(float Number, int Decimal)
{
	char numstr[MAX_CHARS];
	dtostrf(Number, MAX_CHARS, Decimal, numstr);
	display.sendString(numstr);	
}

void SegDispReset()
{
	display.end();
	display.begin();
	display.setIntensity(MIN_INTENSITY);
}

void SegDispPrintString(char *string)
{
	
	if(strlen(string) <= 8)
		display.sendString(string);
	else
		display.sendString("--------");
}

void SegDispSetIntensity(uint8_t Intensity)
{
	if(Intensity >= 0 && Intensity <= 15)
		display.setIntensity(Intensity);
}