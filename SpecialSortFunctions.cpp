#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#include "SpecialSortFunctions.h"

char* SpecialSort(const char* toBeSorted){

	if (((toBeSorted != NULL) && (toBeSorted[0] == '\0')) || toBeSorted == NULL)
		return NULL;

	int* charIndexes;
	int intArrayIndex = 0;

	char* sortedStr = NULL;

	const char *pattern = "QWERTYUIOPÅASDFGHJKLÖÄZXCVBNM";

	int textlen = strlen(toBeSorted);
	int patlen = strlen(pattern);

	charIndexes = (int*)malloc((textlen)*sizeof(int));
	memset(charIndexes, 0, (textlen)*sizeof(int));

	//find the sequence
	for (int i = 0; i< textlen; i++) {
		for (int j=0; j < patlen; j++) {
			if (toupper(toBeSorted[i]) == pattern[j]) {
				charIndexes[intArrayIndex] = j;
				intArrayIndex++;
				break;
			}
		}
	}

	//sort the sequnce
	qsort(charIndexes, intArrayIndex, sizeof(charIndexes[0]), CompareNums);

	sortedStr = (char*)malloc(intArrayIndex*sizeof(char));

	//make final sorted string
	for (int i=0; i<intArrayIndex; i++) {
		sortedStr[i] = tolower(pattern[charIndexes[i]]);
	}

	//free reserved memory
	free(charIndexes);
	charIndexes = NULL;

	return sortedStr;
}

int CompareNums(const void *first, const void *second) {
	int result;
	if (*(int*)first == *(int*)second) result = 0;
	if (*(int*)first > *(int*)second) result = 1;
	if (*(int*)first < *(int*)second) result = -1;
	return result;
}
