#include "logic.h"
int main() {
	int size;
	cout << "Input vector size:";
	cin >> size;

	int* array = new int[size];
	cout << "Input elements:";
	for (int i = 0; i < size; ++i) cin >> array[i];

	if (is_ordered(array, size)) {
		cout << "The vector is ordered." << endl;
	}
	else {
		cout << "The vector is Not ordered." << endl;
	}
	return 0;
}