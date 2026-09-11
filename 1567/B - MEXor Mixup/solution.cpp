#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(int i=a;i<b;i++)
 
ll xor_calc(int n){
    if(n%4==1) return 1;
    else if(n%4==2) return n+1;
    else if(n%4==3) return 0;
    else return n;
}
void solve()
{
    ll a,b;
    cin>>a>>b;
    ll temp=xor_calc(a-1);
    if(temp==b) cout<<a;
    else if((temp^b)==a) cout<<a+2<<" ";
        
    else cout<<a+1;
    cout<<"
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
 