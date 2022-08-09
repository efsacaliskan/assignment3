#include "AlgorithmSortHeap.h"

int AlgorithmSortHeap::select() {
	int N;
	cin >> N;
	BinaryHeap* heaped = new BinaryHeap(k);
	int input;

	for (int i = 0; i < k; i++) {
		cin >> input;
		heaped->insert(input);
	}

	for (int j = k; j < N; j++) {
		int min = heaped->getMin();
		cin >> input;

		if (min < input) {
			heaped->deleteMin();
			heaped->insert(input);
		}
	}
	cout << "Result: " << heaped->getMin() << endl;
	return heaped->getMin();;
}

AlgorithmSortHeap::AlgorithmSortHeap(int k) : SelectionAlgorithm(k) {
	this->k = k;
}