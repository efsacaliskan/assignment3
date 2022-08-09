#ifndef ALGORITHMSORTHEAP
#define ALGORITHMSORTHEAP

#include "BinaryHeap.h"
#include "SelectionAlgorithm.h"
#include <iostream>
#include <string>

using namespace std;

class AlgorithmSortHeap : public SelectionAlgorithm {
public:
	virtual int select();
	AlgorithmSortHeap(int k);
};
#endif

