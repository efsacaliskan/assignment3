#ifndef ALGORITHMSORTK
#define ALGORITHMSORTK

#include "SelectionAlgorithm.h"
#include <iostream>

using namespace std;

class AlgorithmSortK :public SelectionAlgorithm {
public:
    AlgorithmSortK(int k);
    virtual int select();
};
#endif

