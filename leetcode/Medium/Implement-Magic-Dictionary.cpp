class MagicDictionary {
    static const int mx = 26;
    MagicDictionary* array[mx];
    bool is_leaf{};
public:
    MagicDictionary() {
        memset(array,0,sizeof(array));
    }
    
    void buildDict(vector<string> dictionary) {
        for(auto &word : dictionary)
        {
            MagicDictionary* cur = this ;
            for(auto &c : word)
            {
                
                int cur_idx = c - 'a';
                if(cur->array[cur_idx] == nullptr)
                    cur->array[cur_idx] = new MagicDictionary();
                cur = cur->array[cur_idx];
            }
            cur->is_leaf = true;
        }
    }
    bool word_exsist(string word)
    {
        MagicDictionary* cur  = this;
        for(auto & c: word)
        {
            int cur_idx = c - 'a';
            if(cur->array[cur_idx] == nullptr)
                return false;
            cur = cur->array[cur_idx];
        }
        return cur->is_leaf;
    }
    bool search(string searchWord) 
    {
        for(int i{0};i<searchWord.size();++i)
        {
            int copy = searchWord[i];
            for(char c = 'a' ; c<= 'z' ;++c)
            {
                if(c == copy)
                    continue;
                searchWord[i] = c;
                if(word_exsist(searchWord))
                    return true;
            }
            searchWord[i] = copy;
        }
        return false;
        
        
    }
};

/**
 * Your MagicDictionary object will be instantiated and called as such:
 * MagicDictionary* obj = new MagicDictionary();
 * obj->buildDict(dictionary);
 * bool param_2 = obj->search(searchWord);
 */