#ifndef ALGORITHMSORTALL
#define ALGORITHMSORTALL

#include "SelectionAlgorithm.h"
#include <iostream>

using namespace std;

class AlgorithmSortAll :public SelectionAlgorithm {
public:
    AlgorithmSortAll(int k);
    virtual int select();
};
#endif 
