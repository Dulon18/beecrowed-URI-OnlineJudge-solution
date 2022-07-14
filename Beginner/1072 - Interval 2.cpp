#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,X,i,c=0,p=0;
    cin>>N;
    for(i=0; i<N; i++)
    {
        cin>>X;
        if(X >= 10 && X <= 20)
            c++;
        else
            p++;
    }
    cout<<c<<" in"<<endl;
    cout<<p<<" out"<<endl;
}
