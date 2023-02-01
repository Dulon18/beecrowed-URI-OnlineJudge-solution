#include <iostream>
using namespace std;
int main()
{
   int a[2010] = {0};
   int i, n, m;
   cin>>n;
   for(i = 0; i < n; i++) {
      cin>>m;
      a[m]++;
   }
   for (i = 1; i <= 2000; i++)
   {
      if(a[i] > 0)
         
         cout<<i<<" apparece "<<a[i]<<" vez (es)"<<endl;
   }
   return 0;
}
