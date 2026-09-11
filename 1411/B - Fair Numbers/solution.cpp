#include <bits/stdc++.h>
using namespace std;
 
 
//Macro definition
typedef long long ll;
typedef vector<int> vi;
#define PB push_back
#define POP pop_back()
#define FOR(i,a,b) for(int i=a;i<b;i++)
 
bool check(vector<int> &digits,ll num){
    for(int val: digits){
        if(val==0) continue;
        if(num%val!=0) return false;
    }
    return true;
}
 
vector<int> vector_former(ll num){
    vector<int> temp;
    while(num>0){
        temp.push_back(num%10);
        num/=10;
    }
    return temp;
}
 
void inc(vector<int> &nums){
    int carry=1,i=0;
    while(carry!=0 && i<nums.size()){
        nums[i]+=carry;
        carry=nums[i]/10;
        nums[i]%=10;
        i++;
    }
    if(carry) nums.push_back(carry);
}
void solve()
{
    ll n;
    cin>>n;
    vector<int> digits=vector_former(n);
    // reverse(digits.begin(),digits.end());
    while(true){
        if(check(digits,n)){
            cout<<n<<"
";
            return;
        }
        inc(digits);
        n++;
    }
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
 