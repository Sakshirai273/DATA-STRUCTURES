#include<iostream>
using namespace std;


//phle bada wala part through recursion krke uska ans le lenge or fir chota wala part solbve krenge manually 
//first n-1 part pe recursion kaam krega or fir last nth part ham manually krenge 
bool is_sorted2(int a[] , int size){
    if(size == 0 || size == 1){
        return true;
    }

    bool isSmallerOut = is_sorted2(a+1 , size-1);
    if(!isSmallerOut){
        return false;
    }
    if(a[0] > a[1])
    return false;
    else{
        return true;
    }
}
//phle chota wala part solve krke aage bada wala part solve krte chle jayenge through recursion 
//first index pe jo call krni hogi vo hm krenge and rest of the array  part pe recursion kaam krega 
bool is_sorted(int a[],int size)
      if(size == 0 || size == 1){
        return true;
    }
    if(a[0]> a[1]){
    return false;
}
bool isSmallerSorted = is_sorted(a+1, size-1);
return isSmallerSorted;

