#include<iostream>
using namespace std;

int fib(int n){
    if (n==0) //because I'm making two jumps toh kam se kam 2 base case toh chaiye hi chaiye ,isliye 2 base cases given
    return 0;
    if(n==1)
    return 1;
int smallOutput1 = fib(n-1);
int smallOutput2 = fib(n-2);
return smallOutput1 + smallOutput2;
}
int main(){
    cout<<fib(6)<<endl;
}