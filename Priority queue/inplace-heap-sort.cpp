#include<iostream>
using namespace std;

void inplaceHeapSort(int pq[], int n){
    //build the heap in input array

    for (int i = 1; i < n ; i++)
    {
          int childIndex = i;
             
             while(childIndex > 0){
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
    //Remove elements
    int size = n;

    while(size>1){
    int temp =pq[0];
    pq[0] = pq[size-1];
    pq[size-1] = temp;
      size--;
     
     ///down-heapify 
    int parentIndex = 0;
    int leftChildIndex = 2*parentIndex+1;
    int rightChildIndex = 2*parentIndex+2;

    while(leftChildIndex <size){   //agar left child index out of limit chala gya hoga toh pakka hamara right child index bhi out of limit chla gya hoga
        int minIndex = parentIndex;
        if(pq[minIndex] > pq[leftChildIndex]){
          minIndex = leftChildIndex;  
        }
        if(rightChildIndex < size &&  pq[rightChildIndex]< pq[minIndex] ){
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
    }
}

int main(){
    int input[] = {5,1,4,8,3};
    inplaceHeapSort(input,5);
    for (int i = 0; i < 5; i++)
    {
        cout<<input[i]<<" ";

    }
    cout<<endl;
}