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
    int n,k,count=0;
    cin>>n>>k;
    string s;
    int freq[26]={0};
    cin>>s;
    for(auto val: s) freq[val-'a']++;
    for(int i=0;i<26;i++){
        if(freq[i]%2) count++;
    }
    if(count>k+1) cout<<"No
";
    else cout<<"Yes
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
 