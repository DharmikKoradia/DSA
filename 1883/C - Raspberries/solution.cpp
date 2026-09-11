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
    ll n,k,ans=INT_MAX,count3=0,count2=0;
    cin>>n>>k;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    for(int i=0;i<n;i++){
        if(nums[i]%k==0){
            cout<<"0
";
            return;
        }
        ll temp;
        temp=k-(nums[i]%k);
        if(temp==3) count3++;
        else if(temp==2) count2++;
        ans=min(ans,temp);
    }
    if(k==4){
        if(count2>=2) cout<<"0
";
        else if(count2>=1 && count3>=1) cout<<"1
";
        else cout<<min(ans,(ll)2)<<"
";
        return;
    }
    cout<<ans<<"
";
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