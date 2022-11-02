#include <iostream>
#include <vector> 
using namespace std; 
void fastIO(); 

int main(){
    fastIO(); 
    #ifndef ONLINE_JUDGE
        freopen("input.in", "r", stdin); 
    #endif

    int n, m, k; 
    cin >> n >> m >> k;
    int n_elig_studs=0; 
    for(int t=0; t<n; t++){
        vector<int> duration(k+1, n); 
        int tot=0; 
        for(int i=0; i<=k; i++){
            // last index: Qi
            cin >> duration[i]; 
            tot+=(i!=k)?duration[i]:0; 
        }
        if(duration[duration.size()-1]<=10 && tot >= m)
            n_elig_studs++; 
    }  
    cout << n_elig_studs << endl;
    return 0; 
}

void fastIO(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
}