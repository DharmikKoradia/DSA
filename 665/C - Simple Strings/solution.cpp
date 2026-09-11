#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
 
#define PB push_back
#define F first
#define S second
#define ALL(x) (x).begin(), (x).end()
#define RALL(x) (x).rbegin(), (x).rend()
 
#define FOR(i,a,b) for(ll i=(a); i<(b); i++)
#define RFOR(i,a,b) for(ll i=(a); i>=(b); i--)
 
#define YES cout<<"Yes
"
#define NO cout<<"No
"
#define endl '
'
#define DEBUG(x) cerr<<#x<<":"<<x<<"
";
 
void solve()
{
    string s;
    cin>>s;
    
    int n = s.size();
    FOR(i,1,n){
        if(s[i]==s[i-1]){
            if(i!=n-1){
                for(char j = 'a';j<='z' ; j++){
                    if(j!=s[i-1] && j!=s[i+1]){
                        s[i] = j;
                        break;
                    }
                }
            }
            else{
                for(char j = 'a';j<='z' ; j++){
                    if(j!=s[i-1]){
                        s[i] = j;
                        break;
                    }
                }
            }
        }
    }
 
    cout<<s<<"
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--)
    {
	    solve();
    }
}