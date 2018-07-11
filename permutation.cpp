// http://codeforces.com/problemset/problem/618/B
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	int arr1[n],arr2[n];
	for(int i=0;i<n;i++){
			for(int l=0;l<n;l++){
				arr1[l]=0;
			}
		
		for(int j=0;j<n;j++){
			if(i!=j){	
				arr1[(arr[i][j])-1]++;
			}
		
		}
		int max=0;
		for(int k=0;k<n;k++){
			if(arr1[k]>max)
				max=arr1[k];
		}
		
		if(max>1)
			arr2[i]=(n-max);
		else 
				arr2[i]=0;
		
		}
	bool met= true;
	for(int j=0;j<n;j++){
		if(arr2[j]==0){
			if(met==true){
			arr2[j]=n-1;
			met=false;}
			else 
				arr2[j]=n;
		}
		if(j<n-1)
		cout<<arr2[j]<<" ";
		else
			cout<<arr2[j]<<endl;
	}
	return 0;
}