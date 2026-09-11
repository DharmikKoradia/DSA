#include <iostream>
 
using namespace std;
 
void solve(){
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    int x_diff=abs(a-x),y_diff=abs(y-b);
    if((x_diff>y_diff && x>a) || b>y) cout<<"-1
";
    else cout<<y_diff+abs((a+y_diff)-x)<<"
";
}
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}