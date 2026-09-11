#include <iostream>
#include <vector>
 
using namespace std;
typedef long long ll; 
 
void solve(){
    ll a,b,c;
    cin>>a>>b>>c;
    ll anna=a+((c+1)/2);
    ll katie=b+((c)/2);
    if(anna>katie) cout<<"First
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