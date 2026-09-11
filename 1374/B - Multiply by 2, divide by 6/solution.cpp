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
    ll n,step3=0,step2=0,copy;
    cin>>n;
    copy=n;
    while(copy>1 && copy%3==0){
        step3++;
        copy/=3;
    }
    while(copy>1 && copy%2==0){
        step2++;
        copy/=2;
    }
    if(copy!=1 || step2>step3){
        cout<<-1<<"
";
        return;
    }
    cout<<step3+step3-step2<<"
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
 