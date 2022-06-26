#include <iostream>
#include <string>
#include <vector> 
using namespace std; 


int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin); 
    #endif

    long long Q=0; 
    cin >> Q; 
    vector<long long> A(Q, 0); 
    for(long long t=0; t<Q; t++){
        cin >> A[t]; 
        long long nCoins=0; 
        if(A[t]%1939 != 0)  cout << "-1" << endl;
        else{
            long long diff = A[t]; 
            while(diff != 0){
                nCoins++; 
                long long div = 1939; 
                while((A[t]/div) >= 1)
                    div*=10; 
                div/=10;  
                diff=A[t]-div; 
                A[t]-=div; 
            }
            cout << nCoins << endl;
        }
    }
    
    return 0;  
}
