#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

uint64_t findMax(vector<uint64_t> arr){
    uint64_t maximum = 0;
    for(int i=0; i<arr.size(); i++){
        if(maximum < arr[i])
            maximum = arr[i];
    }
    return maximum;
}

int findMaxPeople(int n, vector<uint64_t> data){
    int nP = 0;
    // sort the array
    sort(data.begin(), data.end());
    // find the max value
    uint64_t target = findMax(data);
    for(int i=0; i<data.size(); i++){
        if(data[i] % target != 0){
            uint64_t remainder = data[i] % target;
            for(int j=0; data[j]<=remainder; j++){
                if(i==j)
                    break;
                nP += ((data[j] + data[i]) == target)?1:0;
                if(data[j] + data[i] == target)
                    cout << data[j]  << " + " << data[i] << " = " << target << endl;

            }
        }
    }
    return nP;
}


int main() {
    int n; cin >> n;
    vector<uint64_t> data;
    for(int i=0; i<n; i++){
        uint64_t tmp;
        cin >> tmp;
        data.push_back(tmp);
    }
    cout << findMaxPeople(n, data) << endl;
    return 0;
}
