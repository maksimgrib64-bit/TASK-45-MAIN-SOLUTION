#include "logic.h"
void count_elements(const int* array, int size, int& positive, int& negative, int& zero) {
	positive = 0;
	negative = 0;
	zero = 0;
	for (int i = 0; i < size; ++i) {
		if (array[i] > 0) {
			positive++;
		}
		else if (array[i] < 0) {
			negative++;
		}
		else {
			zero++;
		}
	}
}