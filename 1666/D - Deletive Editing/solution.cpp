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
    string s,t;
    cin>>s>>t;
    int n=s.size(),m=t.size();
    vector<int> freq(26,0);
    for(auto val: t){
        freq[val-'A']++;
    }
    for(int i=n-1;i>=0;i--){
        if(freq[s[i]-'A']==0) s[i]='.';
        else freq[s[i]-'A']--;
    }
    int i=0,j=0;
    while(i<n && j<m){
        if(s[i]=='.') i++;
        else if(s[i]==t[j]){
            i++;
            j++;
        }
        else{
            cout<<"No
";
            return;
        }
    }
    (j==m)? cout<<"Yes
":cout<<"No
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
 