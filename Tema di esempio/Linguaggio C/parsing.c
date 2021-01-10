#include "parsing.h"
#include <string.h>
#include <stdlib.h>
#pragma warning (disable : 4996)

void strstrp(char input[], char output[], char to_strip, int length) {
	int j = 0;
	for (int i = 0; i < length; i++) {
		if (input[i] != to_strip) {
			output[j] = input[i];
			j++;
		}
	}
}

int string_to_int_array(char string[], int buffer[]) {
	char* number = strtok(string, ",");
	int numbers = 0;
	while (number != NULL) {
		buffer[numbers] = atoi(number);
		numbers++;
		number = strtok(NULL, ",");
	}
	return numbers;
}
