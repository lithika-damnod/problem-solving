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
        int x; cin >> x; 
        if(x >= 1 && x < 100)
            cout << "Easy" << endl;
        else if(x >= 100 && x < 200)       
            cout << "Medium" << endl;
        else
            cout << "Hard" << endl;

    }

    return 0; 
}

void fastIO(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
}