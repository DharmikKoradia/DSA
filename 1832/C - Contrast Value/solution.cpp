#include <bits/stdc++.h>
 
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector < int > vi;
#define PB push_back
#define POP pop_back()
#define FOR(i, a, b) for (int i = a; i < b; i++)
    #define DEBUG(x) cerr << #x << " = " << x;
 
void solve()
{
    ll n, ans = 0;
    cin >> n;
    vector < int > nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];
 
    if (n == 1) {
        cout << "1
";
        return;
    }
    int curr = (nums[0]<nums[1])? 1: (nums[0]==nums[1])? 0 : -1;
    
    for(int i=1;i<n;i++){
        int n = (nums[i-1]<nums[i])? 1: (nums[i-1]==nums[i])? 0 : -1;
        if(n==0) continue;
        else if(curr!=n){
            if(curr!=0) ans++;
            curr=n;
        }
    }
    (curr==0)?cout<<1<<"
": cout<<ans+2<<"
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}