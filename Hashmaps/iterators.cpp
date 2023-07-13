#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>
using namespace std;

int main(){
  unordered_map<string , int> ourMap;
    ourMap["def"] = 1;
    ourMap["ef1"] = 2;
    ourMap["de3"] = 3;
    ourMap["de4"] = 4;
    ourMap["de2"] = 5;
    ourMap["de8"] = 9;
    unordered_map<string , int> :: iterator it = ourMap.begin();
    while(it != ourMap.end()){
        cout<< "Key:"<<it -> first << ","<<"Value:" <<it -> second << endl;
        it++;
    }

    //find
    unordered_map<string , int> ::iterator it2 = ourMap.find("def");
    //ourMap.erase(it2 , it2 + 3);
     
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    
    vector<int> ::iterator it1 = v.begin();
    while(it1 != v.end()){
        cout<< *it1 <<endl;
        it1++;

    }

}