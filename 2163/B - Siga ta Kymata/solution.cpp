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
    int n,small=INT_MAX,large=0;
    string s;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
        if(nums[i]==1) small=i;
        else if(nums[i]==n) large=i;
    }
    cin>>s;
    if(s[0]=='1' || s[n-1]=='1') {
        cout<<"-1
";
        return;
    }
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            if(nums[i]==1 || nums[i]==n){
                cout<<"-1
";
                return;
            }
        }
    }
    cout<<5<<"
";
    cout<<1<<" "<<small+1<<"
";
    cout<<1<<" "<<large+1<<"
";
    cout<<small+1<<" "<<n<<"
";
    cout<<large+1<<' '<<n<<"
";
    small<large?cout<<small+1<<" "<<large+1:cout<<large+1<<" "<<small+1;
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
 