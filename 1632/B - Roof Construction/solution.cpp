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
    int n;
    cin>>n;
    int i=1;
    while(n>i) i*=2;
    i/=2;
    for(int j=i-1;j>=0;j--) cout<<j<<" ";
    for(i;i<n;i++) cout<<i<<" ";
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
 