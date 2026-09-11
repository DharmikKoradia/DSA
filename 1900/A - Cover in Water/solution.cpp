#include <iostream>
#include <vector>
 
using namespace std;
void solve(){
    int n,ans=0,count=0;
    string s;
    cin>>n>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='.') {
            count++;
            if(count==3){
                cout<<2<<"
";
                return;
            }
        }
        else{
            ans+=min(count,2);
            count=0;    
        } 
    }
    ans+=min(count,2);
    cout<<ans<<"
";
}
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}