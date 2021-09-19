class Trie {
public:
    /** Initialize your data structure here. */
    
    struct TrieNode{
        struct TrieNode* child[26];
        bool isleaf;
    };
    
    TrieNode* node;
    
    Trie() {
        node = new TrieNode();
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        TrieNode* curnode = node;
        for(char c : word){
            if(curnode->child[c-'a'] == NULL){
                curnode->child[c-'a'] = new TrieNode();
            }
            curnode = curnode->child[c-'a'];
        }
        curnode->isleaf = true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        TrieNode* curnode = node;
        for(char c : word){
            if(curnode->child[c-'a'] == NULL){
                return false;
            }
            curnode = curnode->child[c-'a'];
        }
        
        if(curnode->isleaf) {
            return true;
        }
        else{
            return false;
        }
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        TrieNode* curnode = node;
        for(char c : prefix){
            if(curnode->child[c-'a'] == NULL){
                return false;
            }
            curnode = curnode->child[c-'a'];
        }
        
        return true;
    }
};
