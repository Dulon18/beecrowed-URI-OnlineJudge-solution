#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,n,m,s;
    cin>>x>>y;
    if(x>=y)
   {n=24-x;
    m = n + y;
    cout<<"O JOGO DUROU "<<m<<" HORA(S)"<<endl;}
    else
    {
        n=24-x;
        s=24-y;
        m=n-s;
         cout<<"O JOGO DUROU "<<m<<" HORA(S)"<<endl;
    }

}
