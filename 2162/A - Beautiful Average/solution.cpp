#include <iostream>
#include <vector>
 
using namespace std;
 
void solve(){
    int n,ans=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ans=max(ans,x);
    }
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