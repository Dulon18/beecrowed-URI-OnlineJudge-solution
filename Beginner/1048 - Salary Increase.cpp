#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,p,x;
    cin>>a;
    if(a>=0 && a<=400.00)
    {    p=a*0.15;
         x= a + p;
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<x<<endl;
        cout<<"Reajuste ganho: "<<p<<endl;
        cout<<"Em percentual: "<<"15 %"<<endl;
    }
   else if(a>=400.01 && a<=800.00)
    {    p=a*0.12;
         x= a+p;
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<x<<endl;
        cout<<"Reajuste ganho: "<<p<<endl;
        cout<<"Em percentual: "<<"12 %"<<endl;
    }
   else if(a>=800.01 && a<=1200.00)
    {    p=a*0.1;
         x= a + p;
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<x<<endl;
        cout<<"Reajuste ganho: "<<p<<endl;
        cout<<"Em percentual: "<<"10 %"<<endl;
    }
   else if(a>1200.01 && a<=2000.00)
    {    p=a*0.07;
         x= a+p;
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<x<<endl;
        cout<<"Reajuste ganho: "<<p<<endl;
        cout<<"Em percentual: "<<"7 %"<<endl;
    }
   else if(a>2000.00)
    {    p=a*0.04;
         x= a+p;
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<x<<endl;
        cout<<"Reajuste ganho: "<<p<<endl;
        cout<<"Em percentual: "<<"4 %"<<endl;
    }
    else
        cout<<"wrong"<<endl;
}
