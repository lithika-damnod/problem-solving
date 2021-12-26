#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void rearrangeBuilding(int n){
    vector<int> odd;
    vector<int> even;
    if(n <= 3)
        cout << "-1" << endl;
    else{
        for(int i=n; i>0; i--){
            if(i%2 == 0)
                even.push_back(i);
            else
                odd.push_back(i);
        }
        // swap two values in the even arr
        reverse(even.begin(), even.end());
        int tmp = even[0];
        even[0] = even[1];
        even[1] = tmp;
        // print the array
        for(int i=0; i<odd.size(); i++)
            cout << odd[i] << " ";
        for(int i=0; i<even.size(); i++)
            cout << even[i] << " ";
        cout << endl;
    }
}

int main() {
    int n; cin >> n;
    vector<int> nT;
    for(int i=0; i<n; i++){
        int tmp; cin >> tmp;
        nT.push_back(tmp);
    }
    for(int i=0; i<nT.size(); i++){
        rearrangeBuilding(nT[i]);
    }
    return 0;
}
