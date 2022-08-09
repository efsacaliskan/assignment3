#include "TestBed.h"
#include <iostream>
#include <ctime>

using namespace std;

void TestBed::execute() {
    clock_t start = clock();
    algorithm->select();
    clock_t end = clock();
    double cpu_time = static_cast<double>(end - start) / CLOCKS_PER_SEC;
    
    cout << "Duration(sec):" << cpu_time << endl;
}

void TestBed::setAlgorithm(int type, int k) {
    if (type == 1) {
        algorithm = new AlgorithmSortAll(k);
    }
    else if (type == 2) {
        algorithm = new AlgorithmSortK(k);
    }
    else if (type == 3) {
        algorithm = new AlgorithmSortHeap(k);
    }
    else if (type == 4) {
        algorithm = new AlgorithmSortQuick(k);
    }
}

TestBed::TestBed() {
    this->algorithm = NULL;
}

TestBed::~TestBed() {
    delete[] algorithm;
}
