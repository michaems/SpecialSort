/*
 * main.cpp
 *
 * Created on: Jun 22, 2020
 * Author: michael
 */
#include <stdio.h>
#include "SpecialSortFunctions.h"

int main(int argc, char **argv) {

	char *finalText;
	const char *rawText = "eke-elektroniikka";

	finalText = SpecialSort(rawText);
	printf("The result is: %s\n", finalText);

	return 0;
}






