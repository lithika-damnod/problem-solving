#include <iostream>
#include <vector> 
using namespace std; 
void fastIO(); 

int main(){
    fastIO(); 
    #ifndef ONLINE_JUDGE
        freopen("input.in", "r", stdin); 
    #endif

    int t; cin >> t; 
    while(t--){
        int a, b, c, d, k; 
        cin >> a >> b >> c >> d >> k; 

        int distance = abs(c-a) + abs(d - a); 
        if(distance >= k && k%2 == distance%2)
            cout << "YES" << endl;
        else    
            cout << "NO" << endl; 
    }

    return 0; 
}

void fastIO(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
}