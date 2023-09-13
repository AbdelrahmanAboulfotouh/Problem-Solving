#include <iostream>
#include <algorithm>
using namespace std;
const int AKA=100+1;
int fr[AKA]={0};
int main()
{
    int h,w;
    cin>>h>>w;
    int sz=h*w;
    int arr[sz];
    int total{0};

    for(int i=0;i<sz;++i)
    {
        cin>>arr[i];
        total+=arr[i];
        ++fr[arr[i]];
    }

    sort(arr,arr+sz);
    total-=(fr[arr[0]]*arr[0]);
    int ans=total-(arr[0]*(sz-fr[arr[0]]));
    cout<<abs(ans);

    return 0;
}
