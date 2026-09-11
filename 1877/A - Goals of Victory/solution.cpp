/******************************************************************************
 
Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.
 
*******************************************************************************/
#include <iostream>
 
using namespace std;
 
typedef long long ll;
void solve(){
    ll n,sum=0;
    cin>>n;
    for(int i=0;i<n-1;i++){
        int x;
        cin>>x;
        sum+=x;
    }
    cout<<-1*sum<<"
";
}
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}