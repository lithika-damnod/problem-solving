#include <iostream> 
#include <vector> 
#include <string> 
#include <cmath>
#define ll long long
using namespace std;

ll func(ll x)
{
    ll ans = 0;
    while(x > 0)
    {
        ans += x % 10;
        x = x / 10;
    }
    
    return ans;
}

int main() {
    ll n;
    cin >> n;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin >> x;
        
        if(x % 1939 != 0) cout << -1 << '\n';
        else
        {
            x = x / 1939;
            ll div = func(x);
            cout << div << "\n";
        }
        
    }
    return 0;
}
