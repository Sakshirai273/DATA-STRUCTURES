#include<iostream>
using namespace std;
#include<queue>

int main(){
    priority_queue<int>pq;

    pq.push(45);
    pq.push(32);
    pq.push(21);
    pq.push(26);
    pq.push(52);
    pq.push(75);


cout<<"size of pq:-"<<pq.size()<<endl;
cout<<"topmost element:-"<<pq.top()<<endl;

while(!pq.empty()){
    cout<<pq.top()<<endl;
    pq.pop();
}
}
