// http://codeforces.com/problemset/problem/271/A
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
	int n;
	cin>>n;
	int p=n+1;
	while(1){	
		int arr[10]={0},count=0;
		int t=p;
		for(int i=0;i<4;i++){
			arr[t%10]++;
			t/=10;
		}
		for (int j=0;j<10;j++){
			if(arr[j]>1)
				count++;
		}
			
		if(count==0)
			break;
		else
			p++;
	}
	cout<<p<<endl;
	return 0;
}