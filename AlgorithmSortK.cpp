#include "AlgorithmSortK.h"

AlgorithmSortK::AlgorithmSortK(int k) : SelectionAlgorithm(k) {
    this->k = k;
}
int AlgorithmSortK::select() {
    int N = 0;
    int x = 0;
    int* pNums = 0;
    cin >> N;
    int temp;
    pNums = new int[k];
    int a;
    int j;
    int i;
    int b;

    for (i = 0; i < k; i++) {
        cin >> x;
        pNums[i] = x;
    }
    for (i = 1; i < k; i++) {
        a = pNums[i];
        j = i - 1;
        while (j >= 0 && pNums[j] < a) {
            pNums[j + 1] = pNums[j];
            j = j - 1;
        }
        pNums[j + 1] = a;
    }
    for (i = k; i < N; i++) {
        cin >> x;
        if (x > pNums[k - 1]) {

            pNums[k - 1] = x;
            b = k - 1;
            while (b > 0 && pNums[b] > pNums[b - 1]) {
                temp = pNums[b];
                pNums[b] = pNums[b - 1];
                pNums[b - 1] = temp;
                b--;
            }
        }
    }
    cout << "Result: " << pNums[k - 1] << endl;
    int result = pNums[k - 1];
    delete[] pNums;
    pNums = 0;

    return result;
}
