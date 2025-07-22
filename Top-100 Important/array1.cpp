#include<bits/stdc++.h>
using namespace std;

//Second smallest element
int secondSmallest(vector<int> arr){
	int smallest_element = INT_MAX;
	int second_smallest;
	int len = arr.size();
	for(int i = 0;i<len;i++){
		if(arr[i]<smallest_element){
			second_smallest = smallest_element;
			smallest_element = arr[i];
		}
		else if(arr[i]>smallest_element and arr[i]<second_smallest){
			second_smallest = arr[i]; 
		}
	}
	return second_smallest==INT_MAX?-1:second_smallest;
}


//calculate the sum of element in the array
int sumofElement(vector<int> arr){
	int n = arr.size();
	int sum = 0;
	for(auto it:arr){
		sum+=it;
	}
	return sum;
}

//reverse an array
void reverseArray(vector<int> &arr){
	int n = arr.size();
	for(int i = 0;i<n/2;i++){
		int temp = arr[i];
		arr[i] = arr[n-i-1];
		arr[n-i-1] = temp;
	}
}

//

int main(){
	vector<int> arr = {1,7,4,6,3,8};
	//int second_smallest = secondSmallest(arr);
	//cout<<second_smallest<<endl;
	//cout<<sumofElement(arr);
	reverseArray(arr);
	cout<<'[';
	for(auto it:arr){
		cout<<it<<", ";
	}
	cout<<']'<<endl;
	return 0;
}