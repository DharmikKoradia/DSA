#include <bits/stdc++.h>
using namespace std;
 
void solve(int t){
    long long n, h, k;
    cin >> n >> h >> k;
    
    vector<long long> nums(n);
    vector<long long> suff_max(n);
    
    long long sum = 0;
    long long ans = 0;
    for(int i = 0; i < n; i++){
        cin >> nums[i];
        sum += nums[i];
    }
    
    long long h_left = h % sum;
    ans += (h / sum) * (n + k);
    
    if(h_left == 0){
        ans -= k; // Remove the trailing cooldown if health becomes exactly 0 at the end of a full cycle
        cout << ans << "
";
        return;
    }
    
    suff_max[n - 1] = nums[n - 1];
    for(int i = n - 2; i >= 0; i--) {
        suff_max[i] = max(suff_max[i + 1], nums[i]);
    }
    
    long long least = LLONG_MAX, curr = 0;
    bool found = false;
    
    for(int i = 0; i < n - 1; i++){
        curr += nums[i];
        least = min(least, nums[i]);
        long long dam = curr;
        if(suff_max[i + 1] > least) {
            dam = curr - least + suff_max[i + 1];
        }
        
        if(h_left <= dam){
            ans += (i + 1);
            found = true;
            break;
        }
    }
    
    // If no prefix < n satisfies h_left, taking all n elements will cover it
    if(!found){
        ans += n;
    }
    
    cout << ans << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++) {
        solve(i);
    }
    return 0;
}