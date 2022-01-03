#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;

uint64_t maxXORSum(uint64_t n, uint64_t maxN){
    if (maxN == 1)
        return n;
    uint64_t res = 1;
    while (res <= n)
        res <<= 1;

    return res - 1;
}

int main(){
    uint64_t nN, nM; cin >> nN >> nM;
    // find the maximum and print
    cout << maxXORSum(nN, nM) << endl;
    return 0;
}
