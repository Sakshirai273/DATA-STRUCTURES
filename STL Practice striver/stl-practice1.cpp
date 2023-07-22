#include <bits/stdc++.h>
#include <math.h>
#include <string.h>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

void aboutPair()
{

    pair<int, int> p = {1, 3};

    cout << p.first << " " << p.second;

    pair<int, pair<int, int>> p = {1, {3, 4}};

    cout << p.first << " " << p.second.second << " " << p.second.first;
    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}}; // it is a part of utility library

    cout << arr[1].second;
}

void aboutVector()
{
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;

    v.push_back({1, 2});
    v.emplace_back(1, 2); // emplace is just like pushback it pushes the pairs dynamically in the vector, also it automatically assumes the two nos seperated by comma in a round bracket as a pair hence we don not need to put them in curly braces.

    vector<int> v(5,100);

    vector<int> v(5); //even if you declare size , it can be expanded automatically

    vector<int> v1(5,20);
    vector<int> v2(v1);


    vector<int>::iterator it = v.begin(); // iterator points to the memory address not to the element
    it++;

    cout<< *(it) << " "; // to access the element we write '*' 

    it = it+2;
    cout<< *(it) << " ";

     vector<int>::iterator it = v.end();
     //not used usually 
     vector<int>::iterator it = v.rend(); //reverse end
     vector<int>::iterator it = v.rbegin(); //reverse begin

     cout<< v[0] << " "<<v.at(0); // not used mostly
     cout<< v.back() << " "; // points to first from last 


    for(vector<int>::iterator it = v.begin() ; it != v.end() ;it++) {
        cout << *(it) << " ";
    }

    for(auto it = v.begin() ; it != v.end() ; it++){
        cout<< *(it) <<" ";
    }

    for(auto it : v){ // automatically prints it entirely with correct data type
        cout<<it<<" ";
    }

    v.erase(v.begin()+1);
    v.erase(v.begin() + 2 , v.begin()+ 4);
}