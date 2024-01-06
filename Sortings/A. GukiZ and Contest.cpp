#include<iostream>
#include<algorithm>
#include<queue>
#include<string>
#include<map>

using namespace std;

int main()
    {
     int n;
     cin>>n;
     int students[n];
     int auxiliary[n];
     for(int i{0};i<n;++i)
        {
             cin>>students[i];
             auxiliary[i]=students[i];
        }

        sort(auxiliary,auxiliary+n);
        reverse(auxiliary,auxiliary+n);

        map<int,int>pos;

        pos[auxiliary[0]]=1;
        for(int i{1};i<n;++i)
            {
                if(auxiliary[i]==auxiliary[i-1])
                    continue;

                  pos[auxiliary[i]]=i+1;
            }

             for(int i{0};i<n;++i)
                cout<<pos[students[i]]<<" ";
        return 0;
    }
