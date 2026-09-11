#include <iostream>
#include <vector>
 
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
    }
    if(n%2){
        cout<<"4
";
        cout<<"1 "<<n<<"
";
        cout<<"1 2
";
        cout<<"2 "<<n<<"
";
        cout<<"2 "<<n<<"
";
    }
    else{
        cout<<2<<"
";
        for(int i=0;i<2;i++) cout<<1<<" "<<n<<"
";
    }
}
 
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
}