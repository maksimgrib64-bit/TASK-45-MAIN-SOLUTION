#include "logic.h"
bool is_ordered(const int* array, int size) {
	bool is_ascending = true;
	bool is_descending = true;

	for (int i = 1; i < size; ++i) {
		if (array[i] < array[i - 1]) {
			is_ascending = false;
		}
		if (array[i] > array[i - 1]) {
			is_descending = false;
		}
	}
	return is_ascending or is_descending;
}