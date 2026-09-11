#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(int i=a;i<b;i++)
 
void solve()
{
    ll n;
    cin>>n;
    vector<ll> odd,even;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        if(x%2) odd.push_back(x);
        else even.push_back(x);
    }
    
    sort(odd.rbegin(),odd.rend());
    sort(even.rbegin(),even.rend());
    if(odd.empty()){
        for(int i=0;i<n;i++) cout<<"0 ";
        cout<<"
";
        return;
    }
    else if(even.empty()){
        for(int i=0;i<n;i++){
            cout<<odd[0]<<" ";
            i++;
            if(i<n) cout<<"0 ";
        }
        cout<<"
";
        return;
    }
    
    vector<ll> ans;
    ll sum=0;
    sum=odd[0];
    ans.push_back(sum);
    
    for(int i=1;i<=even.size();i++){
        sum+=even[i-1];
        ans.push_back(sum);
    }
    ll temp=ans.size();
    while(temp<n){
        ans.push_back(ans[temp-2]);
        temp++;
    }
    if((odd.size()%2)==0) ans[n-1]=0;
    for(auto val: ans) cout<<val<<" ";
    cout<<"
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
 