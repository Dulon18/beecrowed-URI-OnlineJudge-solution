#include<bits/stdc++.h>
using namespace std;
int main()
{
  int I,J,a=7,d;
    for(I=1;I<=9;I=I+2)
    {
        for(d=1,J=a;d<=3;J--,d++)
        cout<<"I="<<I<<" "<<"J="<<J<<endl;
        a=a+2;
    }
}
