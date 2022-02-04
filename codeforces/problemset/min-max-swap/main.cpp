/*
    contest: Codeforces Round #768 (Div. 2)
    problem: A. Min Max Swap
    link: https://codeforces.com/contest/1631/problem/A
*/

#include <iostream>
#include <vector>
using namespace std;

int maxPos(vector<int> arr){
    int maxValue = arr[0];
    int maxPos = 0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] > maxValue){
            maxValue = arr[i];
            maxPos = i;
        }
    }
    return maxPos;
}

void swapVectors(int pos, vector<int> &a, vector<int> &b){
    int tmp = a[pos];
    a[pos] = b[pos];
    b[pos] = tmp;
}
int min_max_swap(vector<int> a, vector<int> b){
    bool answerFound = false;
    while(true){
        int maxPosition = maxPos(a);
        if(a[maxPosition] <= b[maxPosition]){
            return a[maxPosition] * b[maxPos(b)];
        }
        else{
           swapVectors(maxPosition, a, b);
        }
    }
}

int main(){
    int nT; cin >> nT;
    for(int i=0; i<nT; i++){
        int arr_size = 0;
        cin >> arr_size;
        vector<int> a;
        vector<int> b;
        // get input for first arr: a
        for(int j=0; j<arr_size; j++){
            int tmp = 0; cin >> tmp;
            a.push_back(tmp);
        }
        // get input for second arr: b
        for(int j=0; j<arr_size; j++){
            int tmp = 0; cin >> tmp;
            b.push_back(tmp);
        }
        // calculate
        cout << min_max_swap(a, b) << endl;
    }
    return 0;
}
