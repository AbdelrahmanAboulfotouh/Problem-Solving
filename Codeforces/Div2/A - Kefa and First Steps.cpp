#include<iostream>
#include<algorithm>
#include<queue>
#include<string>
#include<map>

using namespace std;

int main()
    {

        int sz;
        cin>>sz;
      
        int arr[sz];
        for(int i{0};i<sz;++i)
            cin>>arr[i];

        int ans{-1};
        int length_counter{0};
      
        for(int i{0};i<sz;++i)
            {
                if(arr[i+1]>=arr[i])
                    ++length_counter;
                  else
                    {
                        ans=max(ans,length_counter+1);
                       
                            length_counter=0;
                    }
            }
            ans=max(ans,length_counter);
      
            cout<<ans;
        return 0;
    }
