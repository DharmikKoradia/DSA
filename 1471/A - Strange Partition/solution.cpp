#include <iostream>
 
using namespace std;
 
typedef long long ll;
void solve(){
    ll n,x;
    cin>>n>>x;
    ll sum=0,extra=0,ans=0;
    for(int i=0;i<n;i++){
        ll temp;
        cin>>temp;
        ans+=(temp+x-1)/x;
        sum+=temp;
        if(temp%x) extra++;
    }
    cout<<(sum+x-1)/x<<" "<<ans<<"
";
}
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}