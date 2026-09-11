#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(int i=a;i<b;i++)
 
void solve()
{
    int n,count=0;
    cin>>n;
    vi nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
        if(nums[i]==2) count++;
    }
    if(count%2) cout<<"-1
";
    else{
        if(count==0) cout<<1<<"
";
        else{
            int count2=0;
            for(int i=0;i<n;i++){
                if(nums[i]==2) count2++;
                if(count2==(count/2)){
                    cout<<i+1<<"
";
                    return;
                }
            }
        }
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
	    solve();
    }
}
 