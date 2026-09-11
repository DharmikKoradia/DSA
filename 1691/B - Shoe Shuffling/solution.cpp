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
    int n;
    cin>>n;
    vector<int> nums(n),ans(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
        ans[i]=i+1;
    }
    for(int i=0;i<n;){
        int start=i;
        while(nums[start]==nums[i] && i<n) i++;
        if(i==start+1){
            cout<<"-1
";
            return;
        }
        rotate(ans.begin()+start,ans.begin()+start+1,ans.begin()+i);
    }
    for(auto val: ans) cout<<val<<" ";
    cout<<"
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
 