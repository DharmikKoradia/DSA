#include <bits/stdc++.h>
 
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector < int > vi;
#define PB push_back
#define POP pop_back()
#define FOR(i, a, b) for (int i = a; i < b; i++)
    #define DEBUG(x) cerr << #x << " = " << x;
 
 
ll LCM(ll x, ll y) {
    return (x * y) / __gcd(x, y);
}
ll sumOfn(ll n) {
    return (n * (n + 1)) / 2;
}
void solve()
{
    ll n, x, y;
 
    cin >> n >> x >> y;
 
    ll sub = 0;
    ll x_mul = n / x;
    ll y_mul = n / y;
 
    ll temp = LCM(x, y);
    sub = n / temp;
    x_mul -= sub;
    y_mul -= sub;
 
    ll t1 = sumOfn(y_mul);
    ll t2 = sumOfn(n) - sumOfn(n - x_mul);
 
    cout << t2 - t1 << "
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}