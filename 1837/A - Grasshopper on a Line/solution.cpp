#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
 
void solve(){
    ll x,k;
    cin>>x>>k;
    if(x%k==0){
        cout<<2<<"
";
        cout<<x-1<<" "<<1;
    }
    else{
        cout<<"1
"<<x;
    }
    cout<<"
";
}
int main() {
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}