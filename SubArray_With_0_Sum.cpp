#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool subArrayExists(int arr[], int n) 
{ 
    unordered_set<int> sumSet; 
  
    // Traverse through array and store prefix sums 
    int sum = 0; 
    for (int i = 0 ; i < n ; i++) 
    { 
        sum += arr[i]; 
  
        // If prefix sum is 0 or it is already present 
        if (sum == 0 || sumSet.find(sum) != sumSet.end()) 
            return true; 
  
        sumSet.insert(sum); 
    } 
    return false; 
} 

int main() {

	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	if(subArrayExists(arr, n)) {
		cout << "Sub Array with 0 sum exits" << endl;
	}
	else {
		cout << "Sub Array with 0 sum does not exits" << endl;
	}
	return 0;

}