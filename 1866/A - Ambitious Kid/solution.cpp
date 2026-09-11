#include <iostream>
#include <climits>
using namespace std;
 
int main()
{
    int n,ans=INT_MAX;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ans=min(abs(x),ans);
    }
    cout<<ans<<"
";
    return 0;
}