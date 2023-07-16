#include<iostream>
using namespace std;

int factorial(int n){
    cout<< n <<endl;
    if(n==0){ //base case likh diya apne aap
        return 1;
    }
    int smallOutput = factorial(n-1); //according to PMI agar (n-1) -> choti problem ke liye bdhiya chl rha hai toh 'n' ke liye bhi chlega
    return n*smallOutput; //badi problem ke liye proper code 
}
int main(){
    int n;
    cin>>n;
    int output = factorial(n);
    cout<< output<< endl;
}