#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>
using namespace std;

   vector<int> removeDuplicates(int *arr, int size){
        vector<int>output;
       unordered_map<int, bool> seen;
       for (int i = 0; i < size; i++){
        if (seen.count(arr[i]) > 0){ //dekha hua no. hai toh continue kr diya aise hi
            continue;
        }
        seen[arr[i]] = true;
        output.push_back(arr[i]);
       }
       return output;   
    }
int main(){
    int a[] = { 1, 2, 3, 3, 4, 5, 7, 8, 4, 9, 8};
    vector<int> output = removeDuplicates(a,11);
    for(int i = 0 ; i< output.size(); i++){
        cout<<output[i]<<endl;
    }
}
 