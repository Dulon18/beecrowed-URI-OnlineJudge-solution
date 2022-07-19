#include<bits/stdc++.h>
using namespace std;
int main()
{
  {
    double x,avg,a=0,b=0;
    while(1)
    {
        if(b==2)
            break;
        cin>>x;
        if(x>=0 && x<=10)
        {
            b++;
            a+=x;
        }
        else
           cout<<"nota invalida"<<endl;
    }
    avg=a/2.00;
    cout<<fixed<<setprecision(2)<<"media = "<<avg<<endl;
    return 0;
}
}
