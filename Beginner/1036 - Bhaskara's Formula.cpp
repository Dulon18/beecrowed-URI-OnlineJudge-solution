#include<iomanip>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  float A , B , C , x , R1 , R2;
    cin>>A>>B>>C;
    x =(B * B - 4 * A * C);
    if(A == 0)
    cout<<"Impossivel calcular"<<endl;
    else if( x < 0)
    {
    cout<<"Impossivel calcular"<<endl;
    }
    else
    {
        R1 =(- B + sqrt(x)) /(2 * A);
        R2 =(- B - sqrt(x)) /( 2 * A);
        cout<<fixed<<setprecision(5)<<"R1 = "<<R1<<endl<<"R2 = "<<R2<<endl;
    }

}
