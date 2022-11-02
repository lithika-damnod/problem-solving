#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void fastIO();

int main(){

    fastIO();
    #ifndef ONLINE_JUDGE
        freopen("input.in", "r", stdin);
    #endif

    int nT=0;
    cin >> nT;
    while (nT--){
        int n;
        cin >> n;
        vector<int> a(n, 0); 
        for(int i=0; i<n; i++)
            cin >> a[i]; 

        // calculate 
        int checked=0; 
        int nSolved=0; 
        int j=0; 
        while(checked != 7 && j<a.size()){
            if(a[j] >= 1 && a[j] <= 7)
                checked++; 
            nSolved++; 
            j++; 
        }

        cout << nSolved << endl;
    }

    return 0;
}

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}