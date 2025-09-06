class Trie {
    public:
        vector<Trie*>childs;
        bool is_leaf;
     Trie() :childs(26,nullptr),is_leaf(false){}
    
     void insert(string  word, int idx = 0) 
     {
        if(idx == word.size())
            is_leaf = true;
        else
        {
            int cur = word[idx] - 'a';
            if(!childs[cur])
                childs[cur] = new Trie();
            childs[cur]->insert(word,  idx+1);

        }
        
    }
    
     bool search(string  word, int idx = 0) {
        if(idx == word.size())
            return is_leaf;
        int cur  = word[idx] - 'a';
        if(!childs[cur])
            return false;
       return  childs[cur]->search(word, idx +1 );
         
    }
    
     bool startsWith(string  prefix , int idx = 0) {

         if(idx == prefix.size())
            return true;
        int cur  = prefix[idx] - 'a';
        if(!childs[cur])
            return false;
        return childs[cur]->startsWith(prefix, idx +1 );
        
    }
};
