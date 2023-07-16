class TrieNode{
    public:
    char data;
    TrieNode **children; //array to store pointers
    bool isTerminal; // to check if it is leaf node or not

    TrieNode(char data){
       this -> data = data;
       children = new TrieNode*[26];
       isTerminal = false; 
    }
};