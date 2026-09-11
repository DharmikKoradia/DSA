#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define DEBUG(x) cerr<<#x<<" = "<<x;
 
void solve()
{
    ll n;
    cin>>n;
    ll size = (n*(n-1))/2;
    
    vector<int> temp(size);
    vector<int> ans(n);
    for(int i=0;i<size;i++) cin>>temp[i];
    sort(temp.begin(),temp.end());
    
    ll copy=n-1,k=-1;
    for(int i=0;i<n-1;i++){
        k+=copy;
        copy--;
        cout<<temp[k]<<" ";
    }
    cout<<temp[k]<<"
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