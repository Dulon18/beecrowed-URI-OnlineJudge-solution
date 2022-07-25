#include<bits/stdc++.h>
using namespace std;
int main()
{
     int x,i;
    while(1){
       cin>>x;
       if(x == 0)
        break;
       cout<<"1";
       for(i = 2;i <= x; i++)
       cout<<" "<<i;
        cout<<endl;
        }
        return 0;
}
