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
    ll x,n,count;
    cin>>x>>n;
    if(n==0){
        cout<<x<<"
";
        return;
    }
    count=n;
    if(x%2){
        x++;
        count--;
        x+=4*(count/4);
        if(count%4==1) x-=n;
        else if(count%4==2) x-=(n)+(n-1);
        else if(count%4==3) x+=(3-n);
    }
    else{
        x--;
        count--;
        x-=4*(count/4);
        if(count%4==1) x+=n;
        else if(count%4==2) x+=(n)+(n-1);
        else if(count%4==3) x-=(3-n);
    }
    cout<<x<<"
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
 