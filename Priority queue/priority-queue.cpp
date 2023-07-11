#include<vector>

class PriorQ{
    vector<int>pq;
    public:
    PriorQ(){

    }

    bool isEmpty(){
        return pq.size() == 0;
    }
    int getSize(){
        return pq.size() ;
    }

    int getMin(){
        if(isEmpty()){
            return 0; //
        }
    }
}