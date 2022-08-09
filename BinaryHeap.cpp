#include "BinaryHeap.h"

BinaryHeap::BinaryHeap(int capacity) {
	this->capacity = capacity;
	// The element at index 0 is not used!
	// The root element will be placed at index 1
	heap = new int[capacity++];
	size = 0;
}

BinaryHeap::~BinaryHeap() {
	delete[] heap;
}

void BinaryHeap::insert(int element) {
	// TO BE COMPLETED
	// The capacity of the heap is assumed to be fixed.
	// Insert the element if size < capacity
	// Do nothing otherwise.
	// After the new element is inserted, perform a percolate up operation here.
	// You can add a percolateUp method to the class,
	// or just implement the operations within this insert method.

	if (size < capacity) {
		size++;
		heap[size] = element;

		int count = size;
		for (element == element; element < heap[count / 2]; count /= 2) {
			swap(count, count / 2);
		}
	}
}

void BinaryHeap::deleteMin() {
	// TO BE COMPLETED
	// If the size is less than 1, do nothing and stop
	// Otherwise, replace the root of the heap with the last element on the last level
	// ...
	// Then, call the percolateDown function by providing the index of the root node, i.e., 1

	if (size < 1) {
	}
	else {
		heap[1] = heap[size];
		heap[size] = 0;
		size--;
		percolateDown(1);
	}
}

int BinaryHeap::getMin() {
	// TO BE COMPLETED
	// If the size is less than 1, return -1
	// Otherwise, return the value of the root node

	if (size < 1) {
		return -1;
	}
	else {
		return heap[1];
	}
}

void BinaryHeap::percolateDown(int hole) {
	// TO BE COMPLETED
	// Compare the node with its children; if they are in the correct order, stop
	// Otherwise, swap the element with the smallest child
	// Repeat the operation for the swapped child node
	// Make sure that you take care of all the possible cases:
	// 1. The node might not have a child at all
	// 2. The node might have only a left child
	// 2.1. The left child might be smaller
	// 3. The node might have both left and right children
	// 3.1 Only the left child might be smaller
	// 3.2 Only the right child might be smaller
	// 3.3 Both left and right children might be smaller, in which case the element should be swapped with the smallest of the two

	int parent = hole;
	int leftchild = 2 * hole;
	int rightchild = leftchild + 1;

	if (leftchild > size) {
		return;
	}
	else if (rightchild > size) {
		if (heap[leftchild] < heap[parent]) {
			swap(leftchild, parent);
		}
	}
	else {
		if (heap[leftchild] < heap[parent] && heap[rightchild] >= heap[parent]) {
			swap(leftchild, parent);
			percolateDown(leftchild);
		}
		else if (heap[leftchild] >= heap[parent] && heap[rightchild] < heap[parent]) {
			swap(rightchild, parent);
			percolateDown(rightchild);
		}
		else if (heap[leftchild] < heap[parent] && heap[rightchild] < heap[parent]) {
			if (heap[leftchild] < heap[rightchild]) {
				swap(leftchild, parent);
				percolateDown(leftchild);
			}
			else {
				swap(rightchild, parent);
				percolateDown(rightchild);
			}
		}
	}
}

void BinaryHeap::swap(int i, int j) {
	int t = heap[i];
	heap[i] = heap[j];
	heap[j] = t;
}
