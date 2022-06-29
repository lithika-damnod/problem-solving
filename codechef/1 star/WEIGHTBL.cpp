#include <iostream>
#include <vector> 
using namespace std; 
void fastIO(); 

int main(){
    fastIO(); 
    #ifndef ONLINE_JUDGE
        freopen("input.in", "r", stdin); 
    #endif

    int nT; cin >> nT; 
    for(int t=0; t<nT; t++){
        int w1, w2, x1, x2, M; 
        cin >> w1 >> w2 >> x1 >> x2 >> M; 

        // calculate
        int weightDiff = w2 - w1; 
        if(weightDiff >= (M*x1) && weightDiff <= (M*x2))
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }

    return 0; 
}

void fastIO(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
}