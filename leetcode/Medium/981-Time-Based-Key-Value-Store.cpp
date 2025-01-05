class TimeMap {
public:
    unordered_map<string,vector<pair<int,string>>>mp;
    TimeMap() {

    }

    void set(string key, string value, int timestamp)
    {

        mp[key].push_back({timestamp,value});
    }

    string get(string key, int timestamp)
    {
        string ans="";
        for(auto &i:mp)
        {
            
             int l{0},r=i.second.size()-1;
            while (l<=r)
            {
                int mid = l+(r-l)/2;
                 if(i.second[mid].first == timestamp and i.first == key)
                            return i.second[mid].second;
                    else if ( i.second[mid].first<timestamp)
                        {
                           
                        if(i.first == key )
                        ans=i.second[mid].second;
                        l=mid+1;

                        }
                       else
                        r=mid-1;
                

                
            }
           
        }
        return ans;
    }
};
/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */