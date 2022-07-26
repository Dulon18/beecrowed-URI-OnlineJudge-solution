#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int c=0;
    int sum = 0;
    while(1)
    {
        cin>>n;
        if(n<0)
            break;
        else
        {
            sum+=n;
            c++;
        }
    }

    float avg = (float)sum/c ;
    cout<<fixed<<setprecision(2) <<avg<<endl;

}
