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
    int n,zero=0,one=0;
    string s;
    cin>>s;
    n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='1') one++;
        else zero++;
    }
    int poss=min(one,zero);
    (poss%2==1)? cout<<"DA
":cout<<"NET
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
 
 
 