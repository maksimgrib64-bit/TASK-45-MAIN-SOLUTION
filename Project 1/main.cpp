#include "logic.h"
int main() {
	int size;
	cout << "Input vector size:";
	cin >> size;

	int* array = new int[size];
	cout << "Input elements:";
	for (int i = 0; i < size; ++i) cin >> array[i];


	int pos = 0, neg = 0, zer = 0;
	count_elements(array,size, pos, neg,zer);

	cout << "positive elements:" << pos << endl;
	cout << "negative elements:" << neg << endl;
	cout << "zero elements:" << zer << endl;
	return 0;
}