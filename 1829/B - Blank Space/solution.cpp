#include <iostream>
 
using namespace std;
 
void solve(){
    int n,count=0,temp=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==1) temp=0;
        else temp++;
        count=max(count,temp);
    }
    cout<<count<<"
";
}
 
int main()
{
 
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}