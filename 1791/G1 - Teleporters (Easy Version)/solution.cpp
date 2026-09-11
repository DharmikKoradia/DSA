#include <bits/stdc++.h>
 
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector < int > vi;
#define PB push_back
#define POP pop_back()
#define FOR(i, a, b) for (int i = a; i < b; i++)
    #define DEBUG(x) cerr << #x << " = " << x << "
";
 
void solve()
{
    ll n, c;
    cin>>n>>c;
    
    vector<ll> nums(n),cost(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    
    for(int i=0;i<n;i++) cost[i]=nums[i]+i+1;
    
    sort(cost.begin(),cost.end());
    
    ll temp=0,i;
    for(i=0;i<n;i++){
        temp+=cost[i];
        if(temp>c) break;
    }
    cout<<i<<"
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