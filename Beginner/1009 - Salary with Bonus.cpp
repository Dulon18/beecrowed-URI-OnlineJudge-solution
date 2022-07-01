#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char ch[20];
    double x, y, m, total;
    cin>>ch;
    cin>>x>>y;
    m = ((y * 15 ) / 100);
    total = x + m ;
    cout<<fixed<<setprecision(2)<<"TOTAL = R$ "<<total<<endl;
}
