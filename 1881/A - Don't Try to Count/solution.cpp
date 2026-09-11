#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;
 
void solve(){
    int n,m,count=0;
    string x,s;
    cin>>n>>m>>x>>s;
    do{
        if(x.find(s)!=string::npos){
            cout<<0<<"
";
            return;
        }
        x+=x;
        count++;
        n*=2;
    } 
    while(n<(2*m) && x.find(s)==string::npos);
    if(x.find(s)!=string::npos) cout<<count<<"
";
    else cout<<-1<<"
";
}
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}