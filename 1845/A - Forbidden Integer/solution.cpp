#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
 
void solve(){
    int n,k,x;
    cin>>n>>k>>x;
    if(k>=n && k!=x){
        cout<<"Yes
1
";
        cout<<n<<"
";
        return;
    }
    else if(x!=1){
        cout<<"Yes
";
        cout<<n<<"
";
        for(int i=0;i<n;i++) cout<<1<<" ";
    }
    else{
        if(n%2==0 && k>=2){
            cout<<"Yes
";
            cout<<n/2<<"
";
            for(int i=0;i<n/2;i++) cout<<2<<" ";
        }
        else{
            if(k>=3){
                cout<<"Yes
";
                cout<<1+((n-3)/2)<<"
";
                n-=3;
                cout<<3<<" ";
                for(int i=0;i<n/2;i++) cout<<2<<" ";
            }
            else cout<<"No";
        }
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