#ifndef ALGORITHMSORTQUICK
#define ALGORITHMSORTQUICK

#include "SelectionAlgorithm.h"
#include <iostream>

using namespace std;

class AlgorithmSortQuick :public SelectionAlgorithm {
public:
    AlgorithmSortQuick(int k);
    virtual int select();
    virtual int quickselect(int* numbers, int left, int right, int k);
    virtual void swap(int* arr, int a, int b);
};
#endif

