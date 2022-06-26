#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long

ll maximumSum(vector<ll> arr, ll n)
{
    ll dp[n];
    dp[0] = arr[0];
    dp[1] = max(arr[0], arr[1]);
    ll ans = max(dp[0], dp[1]);
    for (ll i = 2; i < n; i++)
    {
        dp[i] = max((ll)dp[i - 2] + arr[i], max((ll)dp[i - 1], (ll)arr[i]));
        ans = max(ans, dp[i]);
    }
    return ans;
}

int main()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);

    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    cout << maximumSum(arr, n);
}
