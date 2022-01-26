#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main(){
    int nT; cin >> nT;
    vector<int> answers;
    for(int i=0; i<nT; i++){
        int n, k;
        cin >> n >> k;
        vector<int> mem_use(n, 0);
        map<int, int> rewards;
        for(int j=0; j<n; j++){
            cin >> mem_use[j];
        }
        for(int j=0; j<n; j++){
            int reward; cin >> reward;
            rewards[mem_use[j]]+=reward;
        }
        for(auto i : rewards){
            if(i.first <= k){
                k+=i.second;
            }
        }
        answers.push_back(k);
    }
    // print the vector of answers
    for(int i=0; i<answers.size(); i++){
        cout << answers[i] << endl;
    }
    return 0;
}
