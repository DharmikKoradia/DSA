#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(int i=a;i<b;i++)
 
 
ll next_prime(ll n){
    
    bool is_prime;
    for(ll i=n;;i++){
        is_prime=true;
        for(ll j=2;j*j<=i;j++){
            if(i%j==0){
                is_prime=false;
                break;
            }
        }
        if(is_prime) return i;
    }
}
void solve()
{
    ll d;
    cin>>d;
    ll p=next_prime(d+1);
    ll q=next_prime(p+d);
    
    cout<<(ll)(p*q)<<"
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
	    solve();
    }
}
 