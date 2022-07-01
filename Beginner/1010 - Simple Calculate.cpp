
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    int x1, y1 , x2, y2;
    float m1, m2, total;
    cin>>x1>>y1>>m1;
    cin>>x2>>y2>>m2;;
    total = (y1 * m1) + (y2 * m2) ;
    cout<<fixed<<setprecision(2)<<"VALOR A PAGAR: R$ "<<total<<endl;
}

