//http://codeforces.com/problemset/problem/812/A
#include <iostream>
using namespace std;
int main(){
	int arr[4][4], count=0;
	for(int i=0;i<4;i++){
	for(int j=0;j<4;j++){
	cin>>arr[i][j];
	}
	}
	for(int i=0;i<4;i++){
		if(arr[i][3]==1){
			for(int j=0;j<3;j++){
				if(arr[i][j]==1){
					cout<<"YES"<<endl;
					count++;
					return 0;
					}
			}
			if(i==0){
				if(arr[1][0]==1||arr[2][1]==1||arr[3][2]==1){
				cout<<"YES"<<endl;
				count++;
				return 0;
				}
			}
			else if(i==1){
			if(arr[2][0]==1||arr[3][1]==1||arr[0][2]==1){
				cout<<"YES"<<endl;
				count++;
				return 0;
			}
			}
			else if(i==2){
			if(arr[3][0]==1||arr[0][1]==1||arr[1][2]==1){
				cout<<"YES"<<endl;
				count++;
				return 0;
			}
			}
			else{
			if(arr[0][0]==1||arr[1][1]==1||arr[2][2]==1){
			cout<<"YES"<<endl;
			count++;
			return 0;
			}
			}
		}
	}
	if(count==0)
	cout<<"NO"<<endl;
}