#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    float A , B , C;
    cout << fixed;
    cout << setprecision(1);
    cin >> A >> B >> C;
    if( A+B> C && B+C > A && C+A > B)
        cout <<"Perimetro = "<< A + B + C <<endl;
    else
        cout <<"Area = "<< (0.5 * (A+B) * C )<<endl;

    return 0;
}
