#include <stdio.h>
#include "ColorPairDefines.h"

void PrintColorCodeManual()
{
	int MajorColorIndex = 0, MinorColorIndex = 0, PairNumber = 0;
	printf("\n---------------------------------------------\n");
	printf("\tCOLOR CODING MANAUAL");
	printf("\n---------------------------------------------\n");
	printf("PAIR NO.\t MAJOR COLOR\t MINOR COLOR\n");
	printf("\n---------------------------------------------\n");
	for (MajorColorIndex = 0; MajorColorIndex < numberOfMajorColors; MajorColorIndex++)
	{
		for (MinorColorIndex = 0; MinorColorIndex < numberOfMinorColors; MinorColorIndex++)
		{
			printf("%d\t\t%s\t\t%s\n", ++PairNumber, MajorColorNames[MajorColorIndex], MinorColorNames[MinorColorIndex]);
		}
	}
	printf("---------------------------------------------\n");
}
