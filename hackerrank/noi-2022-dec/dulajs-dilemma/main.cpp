#include <iostream>
#include <vector>
using namespace std;

int sum(vector<int> a){

}

int main(){
    int nT; cin >> nT;
    vector<vector<int>> data;
    for(int i=0; i<nT; i++){
        int sT; cin >> sT;
        vector<int> push;
        for(int j=0; j<sT; j++){
            int val = 0; cin >> val;
            push.push_back(val);
        }
        data.push_back(push);
    }

    for(int i=0; i<data.size(); i++){
        cout << sum(data[i]) << endl;
    }
    return 0;
}
