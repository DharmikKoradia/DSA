#include <iostream>
#include <vector>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int start=0,end=n-1;
    while(s[start]!=s[end] && start<end){
        start++;
        end--;
    }
    cout<<end-start+1<<"
";
}
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}