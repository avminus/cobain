//https://www.hackerrank.com/challenges/extra-long-factorials/problem
#include <iostream>
using namespace std;
int main(){
int n,k=0,carry,temp;
cin>>n;

	int arr[160];
	for(int i=0;i<160;i++){
	arr[i]=0;
	}
	arr[159]=1;
	for(int i=1;i<=n;i++){
		carry=0;
		for(int j=159;j>=0;j--){
			temp=arr[j];
		arr[j]=((arr[j]*i)+ carry)%10;
		carry=(temp*i + carry)/10;
			}
	}
	for(k=0;k<160;k++){
	if(arr[k]!=0)
	break;
	}
	for(int p=k;p<160;p++){
	cout<<arr[p];
		}
		cout<<endl;
}