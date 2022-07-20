#include <iostream>

using namespace std;

int main()
{
    int n,i,a=0, b=0, c=0;
    while(1)
    {
        cin>>n;
        
        if(n==4)
        {
            break;
        }
        else
        {
            if(n==1) a++;
            else if(n==2) b++;
            else if(n==3) c++;
            else continue;
        }
        
    }
          cout<<"MUITO OBRIGADO"<<endl;
          cout<<"Alcool: "<<a<<endl;
          cout<<"Gasolina: "<<b<<endl;
          cout<<"Diesel: "<<c<<endl;

    return 0;
}
