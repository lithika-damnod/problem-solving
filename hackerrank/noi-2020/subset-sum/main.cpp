#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int nAdds = 0;
void countSums(vector<int> numSet, int target){
    // base case
    if(target < 0) {
        cout << "process terminated: no sums in this list" << endl;
        return; // return 0 if unable to form the sum
    }
    if(target == 0){
        cout << "successfull - sums found!" << endl;
        nAdds++;
        return;
    }

    for(int i=0; i<numSet.size(); i++){
        countSums(numSet, target-numSet[i]);
        cout << "target -> " << target-numSet[i] << endl;
    }
}

int main() {

    vector<int> numSet = {1, 2, 5, 10, 12};
    countSums(numSet, 12);
    cout << nAdds << endl;
    return 0;
}
