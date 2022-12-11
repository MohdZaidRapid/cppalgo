#include <iostream>
using namespace std;

class TrieNode {
public: 
    TrieNode* children[26];
    bool isEndOfWord;

    TrieNode () {
        for(int i = 0; i < 26; i++)
            children[i] = NULL;
        isEndOfWord = false;
    }
};
class Trie {
public:
    TrieNode *root;
    
    Trie(){
        root = new TrieNode();
    }

    void insert(string word) {
        TrieNode* curr = root;
        for(int i = 0; i < word.size(); i++)
        {
            int idx = word[i]-'a';
            if(curr->children[idx] == NULL) 
                curr->children[idx] = new TrieNode();
            curr = curr->children[idx];                
        }
        curr->isEndOfWord = true;//marking at end of the word, as insert!
    }
    
    bool search(string word, bool isPrefix = false) {
        TrieNode* curr = root;
        for(int i = 0; i < word.size() ;i++){
            int idx = word[i]-'a';
            if (curr->children[idx] == NULL)
                return false;
            curr = curr->children[idx];
        }
        return isPrefix ? true : (curr->isEndOfWord);
    }
    
    bool startsWith(string prefix) {
        return search(prefix,true);
    }
};

int main()
{
    Trie t; // Create a Trie object
    t.insert("abcd"); // Insert a word into the Trie
    return 0;
}
