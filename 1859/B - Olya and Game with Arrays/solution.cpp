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
    ll n,answer=0,least=INT_MAX,ans_min=INT_MAX;
    cin>>n;
    vector<int> ans;
    while(n--){
        int k;
        cin>>k; 
        vector<int> temp(k);
        for(int i=0;i<k;i++) cin>>temp[i];
        sort(temp.begin(),temp.end());
        ans.push_back(temp[1]);
        least=min(least,(ll)temp[0]);
    }
    for(int i=0;i<ans.size();i++){
        ans_min=min(ans_min,(ll)ans[i]);
        answer+=ans[i];
    }
    answer-=ans_min;
    answer+=least;
    cout<<answer<<"
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
 