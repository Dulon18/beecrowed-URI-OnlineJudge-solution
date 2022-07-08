#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3],i,j,temp,t[3];
    for(i=0;i<3;i++)
    {
    cin>>a[i];
    t[i]=a[i];
    }
    for(i=0;i<3;i++)
        {
        for(j=i+1;j<3;j++)
          {if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]= temp;}}
}for(i=0;i<3;i++)
{cout<<a[i]<<endl;}
cout<<endl;
 for(i=0;i<3;i++)
 {cout<<t[i]<<endl;}

}
