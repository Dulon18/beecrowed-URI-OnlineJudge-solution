#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i,x;
    cin>>x;
    int arr[x];
    for(i=0; i<x; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+x);
    for(i=0; i<x; i++)
    {
        if(arr[i]%2 == 0)
            cout<<arr[i]<<endl;
    }
    for(i=x-1; i>=0; i--)
    {
        if(arr[i]%2 != 0)
            cout<<arr[i]<<endl;
    }
    return 0;
}
