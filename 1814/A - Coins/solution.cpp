#include <iostream>
 
using namespace std;
void solve(){
    long long n,k;
    cin>>n>>k;
    if(n%2==0) cout<<"Yes
";
    else{
        if(k%2==1 && k<=n) cout<<"Yes
";
        else cout<<"No
";
    }
}
 
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
 
    return 0;
}