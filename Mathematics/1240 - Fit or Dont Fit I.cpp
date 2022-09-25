
#include <iostream>
#include <math.h>
using namespace std;

int fitOrNot(long long num)
{
    int digits = 0;
    
    while (num) {
        num /= 10;
        digits++;
    }
    
    return digits;
}
int main()
{
     int n;
    long long x, y,m, z ;
    string res;
    
    cin>>n;
    
    for(int i = 0; i < n; i++){
            
            cin>>x>>y;
            z = fitOrNot(y);
            z = ceil(pow(10,z));
            m = x%z;
            res=(m == y) ? "encaixa" : "nao encaixa";
            cout<<res<<endl;
    }

    return 0;
}
