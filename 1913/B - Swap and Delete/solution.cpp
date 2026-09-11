#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
void solve(){
    string s;
    cin>>s;
    ll one=0,zero=0,n=s.size();
    
    for(int i=0;i<n;i++){
        if(s[i]=='1') one++;
    }
    zero=n-one;
    int i=0;
    while(i<n){
        if(s[i]=='1') zero--;
        else one--;
        if(zero==-1 || one==-1) break;
        i++;
    }
    cout<<n-i<<"
";
}
 
int main() {
	ll t;
	cin>>t;
	while(t--) solve();
}