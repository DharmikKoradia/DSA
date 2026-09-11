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
    ll n,goal,count=0,e=0,f=0;
    cin>>n>>goal;
    if(n>goal) swap(goal,n);
    while(n<goal){
        n*=2;
        count++;
    }
    if(n!=goal){
        cout<<"-1
";
    }
    else{
        e=count/3;
        count%=3;
        f=count/2;
        count%=2;
        cout<<e+f+count<<"
";
    }
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
 