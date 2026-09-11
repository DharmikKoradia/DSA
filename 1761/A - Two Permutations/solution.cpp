#include <iostream>
#include <vector>
 
using namespace std;
 
void solve(){
    int n,a,b;
    cin>>n>>a>>b;
    int sum=a+b;
    if(sum+2<=n || sum==(2*n)) cout<<"Yes
";
    else cout<<"No
";
}
 
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}