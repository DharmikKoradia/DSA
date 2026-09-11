#include <iostream>
#include <vector>
 
using namespace std;
typedef long long ll;
 
int points(int row,int col){
    if(row>4) row=9-row;
    if(col>4) col=9-col;
    return min(col+1,row+1);
}
void solve(){
    vector<string> target(10);
    ll ans=0;
    for(int i=0;i<10;i++){
        cin>>target[i];
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(target[i][j]=='X') ans+=points(i,j);
        }
    }
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