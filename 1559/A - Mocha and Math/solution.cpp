#include <iostream>
#include <climits>
 
using namespace std;
 
void solve(){
    int ans=INT_MAX,n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ans&=x;
    }
    cout<<ans<<"
";
}
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
}