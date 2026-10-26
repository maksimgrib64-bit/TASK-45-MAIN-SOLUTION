#include "logic.h"
bool is_mirror(const int* array, int size) {
	int left = 0;
	int right = size - 1;
	while (left < right) {
		if (array[left] != array[right]) {
			return false;
		}
		left++;
		right--;
	}
	return true;
}
