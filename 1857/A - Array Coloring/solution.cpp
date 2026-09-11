#include <iostream>
 
using namespace std;
void solve(){
    int n,eve=0,odd=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x%2) odd++;
        else eve++;
    }
    if(odd%2==1) cout<<"No
";
    else cout<<"Yes
";
}
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}