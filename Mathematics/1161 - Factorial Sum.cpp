#include <bits/stdc++.h>
using namespace std;
int main() {
  long long int n , fact, i,m,j,fact1;
  while(cin>>n>>m){
      fact =1;
      fact1=1;
   for(i=n; i > 0; --i){
       
      fact *= n;
       n--;}
     for (int i = m; i > 0; --i)
          {
           fact1 *= m;
           m--;
          }

   cout<<fact+fact1<<endl;
   }
   return 0;
}
