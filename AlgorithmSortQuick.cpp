#include "AlgorithmSortQuick.h"


int AlgorithmSortQuick::select() {
	int N = 0;
	cin >> N;
	int* numbers = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> numbers[i];
	}
	cout << "Result:" << quickselect(numbers, 0, N - 1, k) << endl;
	return quickselect(numbers, 0, N - 1, k);	
}

int AlgorithmSortQuick::quickselect(int* numbers, int left, int right, int k) {
	int size = right - left ;
	if (size < 10) {
		insertionSort(numbers,left,right);
		return numbers[left + k - 1];	
	}
	else {
		int middle = (left + right) / 2;
		if (numbers[left] < numbers[middle]) {
			swap(numbers, left, middle);
		}
		if (numbers[left] < numbers[right]) {
			swap(numbers, left, right);
		}
		if (numbers[middle] < numbers[right]) {
			swap(numbers, middle, right);
		}
		swap(numbers, middle, left + 1);

		int v = numbers[left + 1];
		int i = right;
		int j = left + 1;
		for (;;) {
			while (numbers[--i] < v) {}
			while (v < numbers[++j]) {}
			if (i > j) {
				swap(numbers, i, j);
			}
			else {
				break;
			}
		}
		swap(numbers, i, left + 1);
	
		int size1 = i - left ;
		if (k <= size1) {
			return quickselect(numbers, left, i - 1, k);
		}
		else if (k == (size1 + 1)) {
			return v;
		}
		else {
			return quickselect(numbers, i + 1, right, k - size1 - 1);
		}
	}
}

void AlgorithmSortQuick::swap(int* arr, int a, int b){
		int t = arr[a];
		arr[a] = arr[b];
		arr[b] = t;
	}

AlgorithmSortQuick::AlgorithmSortQuick(int k) : SelectionAlgorithm(k) {
	this->k = k;
}



