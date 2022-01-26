#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

// find the min from a vector
int min(vector<int> b){
    int minim = b[0];
    for(int i=0; i<b.size(); i++){
        if(b[i] < minim){
            minim = b[i];
        }
    }
    return minim;
}

int getTotalX(vector<int> a, vector<int> b){
    int nX = 0;
    // find the minimum value from vector b
    int minim = min(b);
    // generate factors for minim
    for(int i=2; i<=minim; i++){
        // start i from 2 because 1 isn't returned
        // for vector b
        bool bPassed = false;
        bool aPassed = false;
        for(int j=0; j<b.size(); j++){
            if(b[j] % i != 0){
                break;
            }
            else if(j == b.size()-1){
                if(b[j] % i == 0){
                    bPassed = true;
                }
            }
        }
        // for vector a
        if(bPassed == true){
            for(int j=0; j<a.size(); j++){
                for(int k=a[j]; k<=minim; k+=a[j]){
                    if(k % )
                }
            }
        }
    }
}

int main(){
    // get the input
    int m, n; cin >> n >> m;
    vector<int> a;
    vector<int> b;
    for(int i=0; i<n; i++){
        int tmp = 0;
        cin >> tmp;
        a.push_back(tmp);
    }
    for(int i=0; i<m; i++){
        int tmp = 0;
        cin >> tmp;
        b.push_back(tmp);
    }
    return 0;
}
