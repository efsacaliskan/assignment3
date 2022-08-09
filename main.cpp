#include "TestBed.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char* argv[]) {
    string testfile;
    if (argc < 2) {
        cout << "Enter a test file name:" << endl;
        cin >> testfile;
    }
    else {
        testfile = argv[1];
    }
    ifstream file(testfile.c_str());
    if (file.is_open()) {
        cin.rdbuf(file.rdbuf());
    }
    else {
        cout << "Error: cannot read the test file!" << endl;
        return -1;
    }
    int algorithmType = 0;
    int k = 0;
    cin >> algorithmType;
    cin >> k;

    cout << "data from a file : " << algorithmType << "," << k << endl;
    TestBed* tb = new TestBed();
    tb->setAlgorithm(algorithmType, k);
    tb->execute();
    delete tb;

    return 0;
}