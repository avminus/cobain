//https://codeforces.com/problemset/problem/276/A

#include <iostream>
using namespace std;
int main(){
	int n,k,m=-2147483648;
	cin>>n>>k;
	int arr[n][2];
	for(int i=0;i<n;i++){
		for(int j=0;j<2;j++){
			cin>>arr[i][j];
		}
		if(arr[i][1]<=k){
			m= max(arr[i][0],m);
		}
		else{
			m=max((arr[i][0]-arr[i][1]+k),m);
		}
	}
	cout<<m<<endl;
}