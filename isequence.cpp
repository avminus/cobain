//http://codeforces.com/problemset/problem/675/A
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
	int arr[3];
	for(int i=0;i<3;i++){
		cin>>arr[i];
	}
	if((arr[2]>0 && arr[1]<arr[0])||(arr[2]<0 && arr[1]>arr[0])||(arr[2]==0&& arr[0]!=arr[1]))
		cout<<"NO"<<endl;
	else{
		if (arr[1]==arr[0])
		cout<<"YES"<<endl;

		else if((arr[1]-arr[0])%arr[2]==0){
		cout<<"YES"<<endl;
		}
		else
		cout<<"NO"<<endl;
	}
	return 0;
}