#include <iostream>
#include<set>
 
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    set<int> ans;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ans.insert(x);
    }
    cout<<ans.size()<<"
";
}
 
int main() {
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}