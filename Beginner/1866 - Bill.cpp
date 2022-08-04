#include <iostream>
 
using namespace std;
 
int main() {
 
   int C,a;
  cin>>C;
  for(int i=0;i<C;i++)
  {
      cin>>a;
      if(a%2==0)
      {
          cout<<"0"<<endl;
      }
      else
      cout<<"1"<<endl;
      
  }
 
    return 0;
}
