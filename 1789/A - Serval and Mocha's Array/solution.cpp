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
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                if(__gcd(nums[i],nums[j])<=2){
                    cout<<"Yes
";
                    return;
                }
            }
        }
    }
    cout<<"No
";
}
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}