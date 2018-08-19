//http://codeforces.com/problemset/problem/463/B
#include <iostream>
using namespace std;
int main(){
	int p;
	cin>>p;
	int arr[p];
	for(int i=0;i<p;i++){
		cin>>arr[i];
	}
	int en=0,mon=0;
	for(int i=0;i<p;i++){
		if(i==0){
			if(arr[i]!=0)
				mon+=arr[0];
			else
				;
		}
		else{
			en+= arr[i-1] - arr[i];
		if(en>=0){
			;
		}
		else{
			mon+=abs(en);
			en=0;
		}
		}
	}
	cout<<mon<<endl;
	return 0;
}