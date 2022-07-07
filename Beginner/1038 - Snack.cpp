#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    int X , Y;
    float a[5] = {4.00,4.50,5.00,2.00,1.50},s;
    cin>>X>>Y;
    s = a[X - 1] * Y;
    cout<<fixed<<setprecision(2)<<"Total: R$ "<<s<<endl;
}
