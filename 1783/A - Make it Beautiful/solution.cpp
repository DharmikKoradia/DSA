/******************************************************************************
 
Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.
 
*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    sort(nums.begin(),nums.end(),greater<int>());
    
    if(nums[0]==nums[n-1]) cout<<"No
";
    else{
        cout<<"Yes
";
        swap(nums[1],nums[n-1]);
        for(int val: nums) cout<<val<<" ";
        cout<<"
";
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}