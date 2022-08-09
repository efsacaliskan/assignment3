#ifndef SELECTIONALGORITHM
#define SELECTIONALGORITHM


class SelectionAlgorithm {
protected:
    int k;
public:
    virtual int select();
    SelectionAlgorithm(int k);
    void insertionSort(int* arr, int left, int right);
};
#endif 

