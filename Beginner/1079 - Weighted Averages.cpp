#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,i;
    float a,b,c,s;
    cin>>N;
    for(i=0;i<N;i++)
    {
        cin>>a>>b>>c;
        s=(2*a+3*b+5*c)/10;
        cout<<fixed<<setprecision(1)<<s<<endl;

    }
}
