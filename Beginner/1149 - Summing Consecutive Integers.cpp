#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,c=0,i;
    cin>>a>>n;
    while(n<=0)
    { cin>>n;}
    for(i=0;i<n;i++)
    {
     c+=a+i;
    }
    cout<<c<<endl;
}
