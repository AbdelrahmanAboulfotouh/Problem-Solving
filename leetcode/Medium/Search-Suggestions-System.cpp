class Trie {
    vector<Trie*>childs;
    bool is_leaf;
public:
    Trie():childs(26, nullptr),is_leaf(false) {}
    void insert(const string &word,int idx = 0)
    {
        if(idx == word.size())
            is_leaf = true;
        else
        {
            int cur = word[idx] - 'a';
            if (!childs[cur])
                childs[cur] = new Trie();
            childs[cur]->insert(word, idx + 1);
        }
    }
    void get_all_words(Trie* cur , string &word,vector<string> &result )
    {
        if(result.size() == 3)
            return;
        if(cur->is_leaf)
            result.push_back(word);
        for(int i{0};i<26;++i)
        {
            if(cur->childs[i])
            {
                word+=(char)('a' + i);
                get_all_words(cur->childs[i],word,result);
                word.pop_back();
            }
        }

    }
    vector<string> get_words_with_prefix(string prefix,vector<string> result)
    {
        Trie* curr = this;
        for(int i{0};i<prefix.size();++i)
        {
            int cur = prefix[i] - 'a';
            if(!curr->childs[cur])
                return result;
            curr = curr->childs[cur];
        }
        get_all_words(curr,prefix,result);
        return result;
    }

};
class Solution {
    
public:
 vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        sort(products.begin(),products.end());
       Trie trie;
       for(auto &word: products)
                trie.insert(word);
        
   vector<vector<string>>ans;
   string sub;
   for(auto &c: searchWord)
   {
    sub+=c;
    vector<string>sub_result;
    ans.push_back(trie.get_words_with_prefix(sub,sub_result));
   }
   return ans;
 }
};