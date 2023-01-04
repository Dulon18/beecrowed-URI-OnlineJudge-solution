#include <iostream>
using namespace std;
int main(){
{
    int n,i,j,t=0,th=0,f=0,fv=0;
 
    cin>>n;
    for(i = 0;i < n;i++){
        cin>>j;
        if(j%2==0)t++;
        if(j%3==0)th++;
        if(j%4==0)f++;
        if(j%5==0)fv++;
    }
   
    cout<<t<<" Multiplo(s) de 2"<<endl;
    cout<<th<<" Multiplo(s) de 3"<<endl;
    cout<<f<<" Multiplo(s) de 4"<<endl;
    cout<<fv<<" Multiplo(s) de 5"<<endl;
   
   
    return 0;
}
}
