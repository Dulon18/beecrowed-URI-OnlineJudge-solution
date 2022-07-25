#include <iostream>
 
using namespace std;
 
int main() {
  int a,b=0,c=0,x,y;
   cin>>x;
   do{
       cin>>y;
   }
   while(x>=y);
   for(a=x;b<y; a++)
   {
    b+=a;
    c++;
  }
   cout<<c<<endl;

    return 0;
}
