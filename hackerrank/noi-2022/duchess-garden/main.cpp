#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void arrangeTrees(int n){
    string treeOrder = "";
    for(int i=0; i<n; i++){
        if(i == 0)
            treeOrder+="s";
        else if(i == 1)
            treeOrder+="t";
        else{
            treeOrder+=(treeOrder[i-2] == 's')?'t':'s';
        }
    }
    cout << treeOrder << endl;
}

int main() {
    int n; cin >> n;
    arrangeTrees(n);
    return 0;
}
