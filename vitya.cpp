//http://codeforces.com/problemset/problem/719/A
#include <iostream>
using namespace std;
int main(){
	int n,count=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	if(n==1){
		if(arr[0]==15)
		cout<<"DOWN"<<endl;
		else if(arr[0]==0)
			cout<<"UP"<<endl;
		else
			cout<<-1<<endl;
	}
	else{
		if(arr[n-1]==15)
			cout<<"DOWN"<<endl;
		else if(arr[n-1]==0)
			cout<<"UP"<<endl;
		else{
			if(arr[n-2]<arr[n-1])
				cout<<"UP"<<endl;
			else
				cout<<"DOWN"<<endl;
		}
	}
}