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
    int ans=0,count=0;
    for(int i=1;i<n;i++){
        if(nums[i]%2==nums[i-1]%2) count++;
        else{
            ans+=count;
            count=0;
        }
    }
    cout<<ans+count<<"
";
}
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}