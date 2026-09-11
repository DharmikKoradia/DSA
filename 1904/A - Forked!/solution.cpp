#include <iostream>
#include <vector>
#include <set>
using namespace std;
 
vector<vector<int>> moves(int a,int b,int x,int y){
    return {{x-a,y+b},{x+a,y+b},{x-a,y-b},{x+a,y-b},{x+b,y-a},{x+b,y+a},{x-b,y-a},{x-b,y+a}};
}
void solve(){
    set<vector<int>> temp;
    int a,b,kx,ky,qx,qy,ans=0;
    cin>>a>>b>>kx>>ky>>qx>>qy;
    vector<vector<int>> k,q;
    k=moves(a,b,kx,ky);
    q=moves(a,b,qx,qy);
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(k[i][0]==q[j][0] && k[i][1]==q[j][1]){
                temp.insert(k[i]);
            }
        }
    }
    cout<<temp.size()<<"
";
}
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}