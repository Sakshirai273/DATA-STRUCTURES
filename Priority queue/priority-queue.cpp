#include <vector>
#include<iostream>
using namespace std;
class PriorQ{
    vector<int> pq;

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
            return 0;
        }
            return pq[0]; 
        }

        void insert(int element){
            pq.push_back(element);
            int childIndex = pq.size()-1;
             
             while(childIndex>0){
            int parentIndex = (childIndex-1) /2;

            if(pq[childIndex] < pq[parentIndex]){
                int temp = pq[childIndex];
                pq[childIndex] = pq[parentIndex];
                pq[parentIndex] = temp;
            }
            else{
                break;
            }
            childIndex = parentIndex;      
        }
    }
  int removeMin(){
     if(isEmpty()){
            return 0;
        }
    int ans = pq[0];
    pq[0] = pq[pq.size()-1];
    pq.pop_back();

    //down-heapify
    int parentIndex = 0;
    int leftChildIndex = 2*parentIndex+1;
    int rightChildIndex = 2*parentIndex+2;

    while(leftChildIndex <pq.size()){   //agar left child index out of limit chala gya hoga toh pakka hamara right child index bhi out of limit chla gya hoga
        int minIndex = parentIndex;
        if(pq[minIndex] > pq[leftChildIndex]){
          minIndex = leftChildIndex;  
        }
        if(rightChildIndex < pq.size() &&  pq[rightChildIndex]< pq[minIndex] ){
          minIndex = rightChildIndex;  
        }
        if(minIndex == parentIndex){
        break;
        }
        int temp = pq[minIndex];
        pq[minIndex] = pq[parentIndex];
        pq[parentIndex] = temp;

        parentIndex = minIndex;
        leftChildIndex = 2* parentIndex +1;
        rightChildIndex = 2* parentIndex+2;
    }
    return ans;
  }  
};
int main(){
    PriorQ p;
    p.insert(100);
    p.insert(12);
    p.insert(13);
    p.insert(30);
    p.insert(67);
    p.insert(104);

    cout<< p.getSize()<< endl;
    cout<< p.getMin()<< endl;

    while(!p.isEmpty()){
        cout<<p.removeMin()<<" ";
    }
    cout<<endl;
}