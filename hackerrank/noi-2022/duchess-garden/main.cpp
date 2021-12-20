#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void arrangement(int n){
    vector<char> trees = {'s', 't', 'r'};
    int nGroups = n / 3;
    int nRemained = n%3;
    vector<string> order;
    // making the string
    for(int i=0; i<nGroups; i++){
        string pushString = "";
        int j=0;
        while(pushString.size() != 3){
            if(j==0){
                pushString+=trees[0];
                j++;
            }
            else{
                if(j == 1){
                    pushString+=trees[0];
                    j++;
                }
                else if(j == 2){
                    if(pushString[0] != trees[j-1])
                        pushString+=trees[j-1];
                    else if(pushString[0] == trees[j-1])
                        pushString+=trees[j+1];
                }
            }
        }
        order.push_back(pushString);
    }
    // full fill the space
    string remainderString = "";
    for(int i=0; i<nRemained; i++){
        if(order[0][0] == 's')
            remainderString+='t';
        else
            remainderString+='s';
    }
    order.push_back(remainderString);

    // print the string vector
    for(int i=0; i<order.size(); i++){
        cout << order[i];
    }
    cout << endl;
}

int main() {
    int n; cin >> n;
    arrangement(n);
    return 0;
}
