#include <iostream>

using namespace std;

int main()
{
     int n, a, i, j, k, l, m = 1;
     cin>>a>>n;
  
    k = n / a;
    l = a;
    for(i = 1;i <=k;i++){
        cout<<m;
        for(j = m + 1;j <= l;j++){
            cout<<" "<<j;
        }
        cout<<endl;
        m += a;
        l += a;
    }
    return 0;
}
