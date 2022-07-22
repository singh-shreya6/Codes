class TrieNode {
public:
    TrieNode* children[26];
    bool isEnd;
    TrieNode() {
        for(int i = 0; i< 26; i++) {
            children[i] = NULL;
        }
        isEnd = false;
    }   
};

class Trie {
public:
    TrieNode* root;
    Trie() {
         root = new TrieNode();  
    }
    
    void insert(string word) {
        TrieNode* ptr = root;
        for(int i = 0; i< word.length(); i++){
            if(ptr->children[word[i] - 'a'] == NULL) {
                ptr->children[word[i]-'a'] = new TrieNode();
            }
            ptr = ptr->children[word[i] - 'a'];
        } 
        ptr->isEnd = true;
    }
    
    bool search(string word) {
        TrieNode* ptr = root;
        for(int i = 0; i < word.length(); i++) {
            if (ptr->children[word[i] - 'a'] == NULL) {
                return false;
            }
            ptr = ptr->children[word[i] - 'a'];
        }
          if(ptr->isEnd == false) {
            return false;
        }
      
        return true;  
    }
    
    bool startsWith(string prefix) {
        TrieNode* ptr = root;
        for(int i = 0; i < prefix.length(); i++) {
            if(ptr->children[prefix[i] - 'a'] == NULL) {
                return false;
            }
              ptr = ptr->children[prefix[i] - 'a'];
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
