#include <iostream>
 
using namespace std;
 
void solve(){
    long long n;
    cin>>n;
    if(n%2 || (n&(n-1))!=0) cout<<"Yes
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