class TrieNode{
        public:
    static const int size = 26;
    TrieNode* array[26];
    bool is_leaf{};
    TrieNode()
    {
            memset(array,0,sizeof(array));
            is_leaf = false;
    }
};
class Trie {
   TrieNode* Node;
public:
    Trie() {
     Node = new TrieNode();
    }
    
   void insert(string word) 
    {
        auto cur = Node;
        for(auto &c:word)
        {
            int idx = c - 'a';
            if(cur->array[idx] == nullptr)
                cur->array[idx] = new TrieNode();
            cur = cur->array[idx];
        }
        cur->is_leaf = true;
	
	}
    
    bool search(string word)
    {
        auto cur = Node;
      for(auto &c :word)
        {
            int idx = c - 'a';
            if(cur->array[idx] == nullptr)
                return false;
            cur = cur->array[idx];
        }    
        return cur->is_leaf;
    }
    
    bool startsWith(string prefix) {
              auto cur = Node;
        for(auto &c :prefix)
        {
            int idx = c - 'a';
            if(cur->array[idx] == nullptr)
                return false;
            cur = cur->array[idx];
        }    
        return true;
    }

};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */