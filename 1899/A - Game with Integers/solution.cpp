#include <iostream>
#include <vector>
 
using namespace std;
void solve(){
    int n;
    cin>>n;
    if((n+1)%3==0 || (n-1)%3==0) cout<<"First
";
    else cout<<"Second
";
}
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}