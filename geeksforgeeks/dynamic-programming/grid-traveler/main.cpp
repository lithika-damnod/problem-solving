#include <iostream>
#include <vector>
using namespace std;

// store m, n, and the returned value
struct Key{
    int m = 0;
    int n = 0;
    int returned = 0;
};

// search for a key in a vector<Key>
int findKeyPos(vector<Key> keys, Key keyword){
    for(int i=0; i<keys.size(); i++){
        if(keyword.n == keys[i].n && keyword.m == keys[i].m){
            // if key found return the position
            return i;
        }
    }
    return -1; // no result found
}

int gridTraveler(int m, int n, vector<Key> memo){
    // check the data in memo
    Key k;
    k.m = n;
    k.m = m;
    int searchPos = findKeyPos(memo, k);
    if(searchPos != -1){
        return memo[searchPos].returned;
    }
    //base cases
    if(m==1 && n==1) return 1;
    if(m==0 || n==0) return 0;
    k.returned = gridTraveler(m-1, n, memo) + gridTraveler(m, n-1, memo);
    cout << "pushing: " << k.returned << endl;
    memo.push_back(k); // TODO: memo push_back not working properly: always the memo size = 1
    return k.returned;
}

int main(){
    vector<Key> emptyMemo;
    cout << "gridTraveler(1, 1): " << gridTraveler(1, 1, emptyMemo) << endl;
    cout << "gridTraveler(2, 3): " << gridTraveler(2, 3, emptyMemo) << endl;
    cout << "gridTraveler(3, 2): " << gridTraveler(3, 2, emptyMemo) << endl;
    cout << "gridTraveler(3, 3): " << gridTraveler(3, 3, emptyMemo) << endl;
    cout << "gridTraveler(18, 18): " << gridTraveler(18, 18, emptyMemo) << endl;
    return 0;
}
