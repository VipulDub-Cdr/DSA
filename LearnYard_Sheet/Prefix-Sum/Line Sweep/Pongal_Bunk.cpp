#include <bits/stdc++.h>
using namespace std;
void brute(){
    int N;
	cin>>N;
	int Q;
	cin>>Q;
	vector<int> arr(N+1,0);
	while(Q--){
	    int L,R;
	    cin>>L>>R;
	    for(int i = L;i<=R;i++){
	        arr[i] += (i-L+1);
	    }
	   
	}
	int M;
	cin>>M;
	while(M--){
	    int I;
	    cin>>I;
	    cout<<arr[I]<<endl;
	}
}

int main() {

    return 0;
}