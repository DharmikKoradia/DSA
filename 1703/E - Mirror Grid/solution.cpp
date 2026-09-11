#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
pair<ll,ll> nextEle(pair<ll,ll> a, ll n){
    return {a.second, n - a.first - 1};
}
 
void solve()
{
    ll n, ans = 0;
    cin >> n;
 
    vector<vector<char>> grid(n, vector<char>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> grid[i][j];
        }
    }
 
    for(int i = 0; i < n/2; i++){
        for(int j = 0; j < n/2; j++){
            ll count = 0;
            ll x = i, y = j;
 
            for(int k = 0; k < 4; k++){
                if(grid[x][y] == '1') count++;
                auto t = nextEle({x, y}, n);
                x = t.first;
                y = t.second;
            }
 
            ans += min(count, 4 - count);
        }
    }
    
    if(n%2){
        ll mid = n/2;
        for(int i=0;i<n/2;i++){
            ll count=0;
            if(grid[i][mid]=='1') count++;
            if(grid[mid][i]=='1') count++;
            if(grid[mid][n-1-i]=='1') count++;
            if(grid[n-1-i][mid]=='1') count++;
            ans+=min(count,4-count);
        }
    }
    cout << ans << "
";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--) solve();
}