#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main(){
    unordered_map<string , int> ourMap;
    //insert
    pair<string , int>p("abc",1);
    ourMap.insert(p);
    ourMap["def"] = 2; //these two ways can be used to insert elements in maps.

    //find or access
    cout<< ourMap["abc"]<<endl;
    cout<< ourMap.at("abc")<<endl;

   // cout<<ourMap.at("ghi")<<endl;
    cout<<"size:"<<ourMap.size()<<endl;
    cout<< ourMap["ghi"]<<endl;
    cout<<"size:"<<ourMap.size()<<endl;

    //check presence 
    if(ourMap.count("ghi")>0){
        cout<<"ghi is present"<<endl;
    }

    //erase
    ourMap.erase("ghi");
     if(ourMap.count("ghi")>0){
        cout<<"ghi is present"<<endl;
    }
    else{
        cout<<"not present"<<endl;
    }
       cout<<"size:"<<ourMap.size()<<endl;

}