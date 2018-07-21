
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	int n,count=0,count1=0;
	cin>>n;
	int arr[n][2];
	for(int i=0;i<n;i++){
	for(int j=0;j<2;j++){
	cin>>arr[i][j];
	}
	if(arr[i][0]!=arr[i][1])
		count++;
	}
	for(int i=0;i<n;i++){
		if(count==0){
			if(i<n-1)
			{
				if(arr[i][0]<arr[i+1][0])
					count1++;
			}
		}
	}
	if(count!=0)
		cout<<"rated"<<endl;
	else if(count1!=0)
		cout<<"unrated"<<endl;
	else if(count1==0)
		cout<<"maybe"<<endl;

	return 0;
}