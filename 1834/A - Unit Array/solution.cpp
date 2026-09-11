#include <iostream>
#include <vector>
 
using namespace std;
 
void solve(){
    int n,neg=0,pos,ans=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==-1) neg++;
    }
    pos=n-neg;
    
    ans+=max(0,neg-(n/2));
    if(neg-(n/2)>0) neg-=(neg-(n/2));
    if(neg%2==1 && neg>0) ans++;
    
    cout<<ans<<"
";
}
 
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}