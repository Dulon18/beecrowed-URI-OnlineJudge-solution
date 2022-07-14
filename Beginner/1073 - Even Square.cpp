#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   int N ,i;
   cin>>N;
   for(i = 2;i <= N;i+=2)
   {
       cout<<i<<"^"<<"2 = "<<i * i<<endl;
   }

    return 0;
}
