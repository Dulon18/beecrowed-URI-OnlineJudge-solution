#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A,B,C,D,a,b;
  
    cin>>A>>B>>C>>D;
  
    a = C + D;
  
    b = A + B;
  
    if( B > C && D > A && a > b && A > 0 && A % 2 == 0)
    {
        cout<<"Valores aceitos"<<endl;
    }
    else
        cout<<"Valores nao aceitos"<<endl;
}
