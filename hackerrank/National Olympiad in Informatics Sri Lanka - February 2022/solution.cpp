#pragma GCC optimize("O3")
#pragma GCC target("sse4")
#include <cmath>
#include <iostream> 
#include <vector> 
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ld, ld> pd;
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
#define FOR(i, a, b) for (ll i = a; i < (b); i++)
#define F0R(i, a) for (ll i = 0; i < (a); i++)
#define FORd(i, a, b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i, a) for (int i = (a)-1; i >= 0; i--)
#define trav(a, x) for (auto &a : x)
#define uid(a, b) uniform_int_distribution<int>(a, b)(rng)
#define len(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define fst first
#define nl endl
#define sec second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define ins insert
const int MOD = 1000000007;
const int MX = INT_MAX;
const int MN = INT_MIN;
void init()
{
#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
#endif
}
void fastIO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
}

void solve()
{
    ll d, h, s;
    cin >> d >> h >> s;

    ll ys, lcm = 0;
    F0R(i, s)
    {
        cin >> ys;
        if (lcm == 0)
            lcm = ys;
        else
            lcm = lcm * ys / __gcd(lcm, ys);
    }

    ll m1, m2, d1, d2, h1, h2;
    cin >> m1 >> d1 >> h1;
    cin >> m2 >> d2 >> h2;

    ll numH1 = m1 * d * h + d1 * h + h1;
    ll numH2 = m2 * d * h + d2 * h + h2;

    if (numH1 == numH2)
        cout << "NO ELECTRICITY HOUR";
    else
    {
        if (numH2 > numH1)
            swap(numH1, numH2);
        ll numH = numH1 - numH2;
        if (numH % lcm == 0)
            cout << "NO ELECTRICITY HOUR";
        else
        {
            numH2 += (numH / lcm) * lcm;
            cout << min(numH1 - numH2, numH2 + lcm - numH1);
        }
    }
}
int main()
{
    fastIO();
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}