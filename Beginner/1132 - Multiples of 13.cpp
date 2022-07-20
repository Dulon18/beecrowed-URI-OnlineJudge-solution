#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,i,d=0,t;
    cin>>x>>y;
    if(x>y)
    {
        t=x;
        x=y;
        y=t;
    }
    for(i=x;i<=y;i++)
    {
        if(i%13!=0 )
        {
        d+=i;
        }

    }
 cout<<d<<endl;
}
