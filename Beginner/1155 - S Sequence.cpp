#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    float s=0;
    for(i=1;i<=100;i++)
    {
        s+=(float)1/i;
    }
    cout<<fixed<<setprecision(2)<<s<<endl;
}
