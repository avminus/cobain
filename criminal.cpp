// http://codeforces.com/contest/680/problem/B

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
	int n,a,count=0;
	cin>>n>>a;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	if(arr[a-1]==1)
		count++;
	if(n%2==0){
		if(a<=n/2){
			for(int j=(a-2);j>=0;j--){
				if((arr[j]==1)&&(arr[(2*(a-1))-j]==1))
					count+=2;
			}
			for(int j=(2*(a-1)+1);j<n;j++){
				if(arr[j]==1)
					count++;
			}
		}
		else {
			for(int i=a;i<n;i++){
			if((arr[i]==1)&&(arr[2*(a-1)-i]==1))
				count+=2;
		}	
		
		for(int i=0;i<(2*(a-1)-n+1);i++)
			{	if(arr[i]==1)
				count++;
				}
		}
	}
	else {
		if(a==(n+1)/2){
			for(int j=(a-2);j>=0;j--){
				if((arr[j]==1)&&(arr[(2*(a-1))-j]==1))
					count+=2;
			}
		}
		else if(a<=n/2){
			for(int j=(a-2);j>=0;j--){
				if((arr[j]==1)&&(arr[(2*(a-1))-j]==1))
					count+=2;
			}
			for(int j=(2*(a-1)+1);j<n;j++){
				if(arr[j]==1)
					count++;
		}
		}
		else {
			for(int i=a;i<n;i++){
			if((arr[i]==1)&&(arr[2*(a-1)-i]==1))
				count+=2;
		}
		for(int i=0;i<(2*(a-1)-(n-1));i++)
			{if(arr[i]==1)
			count++;
			}
		}
	}
	cout<<count<<endl;
	return 0;
}