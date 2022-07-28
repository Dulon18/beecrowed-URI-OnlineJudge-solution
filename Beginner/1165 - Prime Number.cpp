#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,i,c,j;
    cin>>n;
    for(i = 1; i<=n; i++)
    {
        cin>>x;
        c=0;
        for(j = 2; j <= x/2; j++)
        {
            if(x%j == 0)
            {
                c=1;
                break;
            }
        }
        if(c == 0)
        {
            cout<<x<<" eh primo"<<endl;
        }
        else
            cout<<x<<" nao eh primo"<<endl;

    }
}
