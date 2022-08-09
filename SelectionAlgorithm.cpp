#include "SelectionAlgorithm.h"
#include <iostream>


using namespace std;

SelectionAlgorithm::SelectionAlgorithm(int k) {
    this->k = k;
}

int SelectionAlgorithm::select() {
    return 0;
}

void SelectionAlgorithm::insertionSort(int* arr, int left, int right) {
	int j,key;
	for (int i = left + 1; i < right + 1; i++) {
		key = arr[i];
        for(j = i; ((j > left) && (arr[j - 1] < key)) ;j-- ) {
			arr[j] = arr[j - 1];
		}
		arr[j] = key;
	}
}