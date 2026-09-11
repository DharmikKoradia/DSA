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
 
// const int MOD = 1e9+7;
void solve()
{
    ll n,k;
    string s,t;
    cin>>n;
    cin>>s>>t;
    
    ll zero,one;
    one=zero=0;
    vector<bool> temp(n,false);
    
    for(int i=0;i<n;i++){
        if(s[i]=='1') one++;
        else zero++;
        temp[i]= (one==zero);
    }
    
    bool flip=false;
    // for(int i=0;i<n;){
    //     if(s[i]!=t[i]) flip=true;
    //     else flip=false;
    //     while(temp[i-1]!=true){
    //         if(flip && s[i]==t[i]){
    //             cout<<"No
";
    //             return;
    //         }
    //         else if(!flip && s[i]!=t[i]){
    //             cout<<"No
";
    //             return;
    //         }
    //         i++;
    //     }
        
    // }
    
    for(int i=n-1;i>=0;i--){
        int val = s[i]-'0';
        int val2 = t[i]-'0';
        // cout<<val<<" "<<val2<<"
";
        if((val^flip)!=val2) if(temp[i]) flip =!flip;
        // else if(val==val2) continue;
        else {
            cout<<"No
";
            return;
        }
    }
    cout<<"Yes
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--)
    {
	    solve();
    }
}