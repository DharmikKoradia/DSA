#include <iostream>
 
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        int change=0;
        if(s[0]=='1') change=1;
        else change=0;
        for(int i=1;i<n;i++)
        {
            if(s[i-1]!=s[i]) change++;
        }
        cout<<change<<endl;
    }
 return 0;
}