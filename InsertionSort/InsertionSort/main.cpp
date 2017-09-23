#include<iostream>

void InsertionSort(int *a, int len) {
	for (int j = 1; j<len; j++) {
		int key = a[j];
		int i = j - 1;
		while (i >= 0 && a[i]>key) {
			a[i + 1] = a[i];
			i--;
		}
		a[i + 1] = key;
	}
}


int main() {
	int a[10] = { 9, 2, 8, 2, 3, 2, 4, 10, 34, 5 };
	InsertionSort(a, 10);

	for (int i = 0; i < 10; ++i) {
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;
	system("pause");
	return 0;
}