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
        int n, fruits, veg, fish; 
        cin >> n >> fruits >> veg >> fish; 

        // calculate
        // check whether the number of vegetable available is greater than or equal to n
        if(veg < n){
            cout << "NO" << endl;
        } 
        else{
            // check the total number of fishes and fruits 
            int tot = fish + fruits; 
            if(tot >= n){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }

    return 0; 
}

void fastIO(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
}