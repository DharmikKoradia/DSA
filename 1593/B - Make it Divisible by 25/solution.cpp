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
    ll n,count=0,zero=0;
    cin>>n;
    bool five=false;
    while(n>0){
        int temp=n%10;
        if(temp==5) five=true;
        if(temp==0) zero++;
        if(zero==2 || (zero==1 && temp==5)) break;
        if(five && (temp==2 || temp==7)) break;
        count++;
        n/=10;
    }
    cout<<count-1<<"
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
 