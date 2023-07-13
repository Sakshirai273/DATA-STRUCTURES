#include<iostream>
using namespace std;
#include<queue>


void kSorted (int input[], int n , int k){
    priority_queue<int>pq; //k elements insert krdiye pehle priority queue me - k(Log k)
    for(int i = 0 ; i < k ; i++){
        pq.push(input[i]);
    }

    int j = 0; //telling us ki abhi ham exactly kis element tak aa chuke hain
    for (int i = k; i < n; i++)
    {
    input[j] = pq.top();
    pq.pop();   //n-k times pop kr rhe hain - (n-k)log k
    pq.push(input[i]);
    j++;
    }
    while(!pq.empty()){ // k (Log k)
        input[j] = pq.top();
        pq.pop();
        j++;
    }
    
}
int main(){
    int input[] ={10,38,23,29,14};
    int  k = 3;
    kSorted(input,5,k);
    for(int i =0 ; i<5 ;i++){
        cout<<input[i] <<endl;
    }
}

// T.C:- (n+k)log k 
// generally, k<<<n
// so, n(logk) ~ O(n)
