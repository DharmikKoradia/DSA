#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define SORT(x) sort(x.begin(),x.end())
#define RSORT(x) sort(x.rbegin(),x.rend())
#define DEBUG(x) cerr<<#x<<" = "<<x;
#define V(x,n) vector<ll> x(n);
 
vector<ll> primes;
 
void make_primes(ll max_needed) {
    ll limit = 2e6; 
    vector<bool> isPrime(limit, true);
 
    isPrime[0] = isPrime[1] = false;
 
    for (ll i=2; i<limit && primes.size()< max_needed; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
            for (ll j =  i * i; j < limit; j += i) {
                isPrime[j] = false;
            }
        }
    }
}
 
void solve()
{
    ll n;
    cin>>n;
 
    if(n==1){
        cout<<1<<"
";
        return;
    }
    
    V(a,n);
    
    a[0] = primes[0];
 
    FOR(i,1,n-1){
        a[i] = primes[i-1]*primes[i];
    }
    a[n-1] = primes[n-2];
 
    for (auto x : a) cout << x << " ";
    cout << "
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    make_primes(1e5);
    cin>>t;
    while(t--)
    {
	    solve();
    }
}