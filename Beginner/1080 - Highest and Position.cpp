#include <bits/stdc++.h>
using namespace std;
int main()
{

 int n, max = -1, p, i;
 for (i = 1; i < 101; ++i)
 {
    cin>>n;
    if(max < n)
     max = n, p = i;
 }
cout<<max<<endl<<p<<endl;

}
