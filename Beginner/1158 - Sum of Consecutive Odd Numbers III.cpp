#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,n,i,r;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
          r = 0;

            if(x%2 != 0){
                   r+=x;
            }
            else{
                   x+=1;
                   r += x;
            }

            for(int i=0; i < y-1; i++){
                    x += 2;
                   r += x;
            }
            cout<<r<<endl;
    }
}
