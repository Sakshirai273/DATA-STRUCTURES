/*Pairs with difference K

You are given with an array of integers and an integer K. You have to find and print the count of all such pairs which have difference K.
Note: Take absolute difference between the elements of the array.
Input Format:
The first line of input contains an integer, that denotes the value of the size of the array. Let us denote it with the symbol n.
The following line contains n space separated integers, that denote the value of the elements of the array.
The following line contains an integer, that denotes the value of K.
Output format :
The first and only line of output contains count of all such pairs which have an absolute difference of K. 
Constraints :
0 <= n <= 10^4
Time Limit: 1 sec
Sample Input 1 :
4 
5 1 2 4
3
Sample Output 1 :
2
Explanation
(5,2) and (1,4) are the possible combinations as their absolute difference is 3.
Sample Input 2 :
4
4 4 4 4 
0
Sample Output 2 :
6
*/

#include<bits/stdc++.h>
#include<unordered_map>
#include<cmath>
#include <iostream>
using namespace std;


int countPairs(int *a,int n){
	unordered_map<int,int> mapuse;
	int paircount = 0;
	
	for(int i=0;i<n;i++){
		int comp = -a[i];
		if(mapuse.find(comp) != mapuse.end()){
			paircount = paircount + mapuse[comp];
		}
		mapuse[a[i]]++;
	}
	return paircount;
}

int main(){
	int n;
	cin >> n;
	int *arr = new int[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	
	cout << countPairs(arr,n) << endl;

	return 0;
}