#include "AlgorithmSortAll.h"

AlgorithmSortAll::AlgorithmSortAll(int k) : SelectionAlgorithm(k) {
    this->k = k;
}

int AlgorithmSortAll::select() {
    int N = 0;
    int x = 0;
    int* pNums = 0;

    cin >> N;
    pNums = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> x;
        pNums[i] = x;
    }

    int  i, a, j;
    for (i = 1; i < N; i++) {
        a = pNums[i];
        j = i - 1;
        while (j >= 0 && pNums[j] < a) {
            pNums[j + 1] = pNums[j];
            j = j - 1;
        }
        pNums[j + 1] = a;
    }
    cout << "Result: " << pNums[k - 1] << endl;
    int result = pNums[k - 1];
    delete[] pNums;
    pNums = 0;

    return result;
}