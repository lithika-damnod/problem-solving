#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int xorOfArray(vector<int> arr){
    int n = arr.size();
    int xor_arr = 0;

    for (int i = 0; i < n; i++) {
        xor_arr = xor_arr ^ arr[i];
    }

    return xor_arr;
}

vector<int> generateConsecativeNumbers(int n){
    vector<int> res;
    for(int i=1; i<=n; i++){
        res.push_back(i);
    }
    return res;
}

int maxSum(int n, int limit){
    int maxN = 0;
    vector<int> cons = generateConsecativeNumbers(n);
    int n_candidates = 2;
    while(n_candidates <= limit){
        for(int i=0; i<n_candidates; i++){
            vector<int> nums;
            nums.push_back(cons[i]);
            for(int j=i+1; j<n_candidates; j++){
                nums.push_back(cons[j]);
            }
            int xorSUM = xorOfArray(nums);
            if(xorSUM > maxN){
                maxN = xorSUM;
            }
        }
        n_candidates++;
    }
    return maxN;
}

int main(){
    int nN, nM; cin >> nN >> nM;
    // find the maximum and print
    int nSum = maxSum(nN, nM);
    cout << nSum << endl;
    return 0;
}
