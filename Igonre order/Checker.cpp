#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
    registerTestlibCmd(argc, argv);

    vector<int> expected, actual;
    
    while (!ans.seekEof()) expected.push_back(ans.readInt());
    while (!ouf.seekEof()) actual.push_back(ouf.readInt());

    sort(expected.begin(), expected.end());
    sort(actual.begin(), actual.end());

    if (expected == actual) 
        quitf(_ok, "The output is correct (order ignored).");
    else 
        quitf(_wa, "The output is incorrect.");
}
