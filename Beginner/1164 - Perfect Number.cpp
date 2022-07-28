#include <iostream>
 
using namespace std;
 
int main() {
 
  int i,N,X,sum=0,j;
  cin>>N;
  for(i=0;i<N;i++)
  {
      cin>>X;
      for(j=1; j<X;j++)
      {
          if( X%j == 0)
          {
              sum+=j;
          }
      }
      
      if( sum == X)
      {
          cout<<X<<" eh perfeito"<<endl;
      }
      else{
          cout<<X<<" nao eh perfeito"<<endl;
      }
      sum=0;
  }
    
}
