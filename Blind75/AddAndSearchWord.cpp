class TrieNode {
    public:
    TrieNode* children[26];
    bool isEnd;
    TrieNode() {
        for(int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
        isEnd = false;
    }
    
};

class WordDictionary {
TrieNode* root;
public:
    WordDictionary() {
        root = new TrieNode();
    }
    
    void addWord(string word) {
        TrieNode* ptr = root;
        for(int i = 0; i < word.length(); i++) {
            if (ptr->children[word[i] - 'a'] == NULL) {
                ptr->children[word[i] - 'a'] = new TrieNode();
            }
            ptr = ptr->children[word[i] - 'a'];
        }
        ptr->isEnd = true;
        
    }
    
    bool check(TrieNode* ptr, string& word, int i) {
        if (i == word.length()) {
            return ptr->isEnd;
        }
        
        if (word[i] == '.') {
            bool f = false;
            for(int j = 0; j < 26; j++) {
                if(ptr -> children[j] != NULL) {
                    f = check(ptr->children[j], word, i+1);
                    if (f) {
                        return true;
                    }
                }
            }
        } else {
            if (ptr->children[word[i] - 'a'] != NULL) {
                return check(ptr->children[word[i] - 'a'], word, i+1);
            }
        }
        return false;
    }
    
    
    bool search(string word) {
        TrieNode* ptr = root;
        return check(ptr, word, 0);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
