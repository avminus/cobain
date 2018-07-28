//http://codeforces.com/problemset/problem/902/A
#include <iostream>
using namespace std;
int main(){
	int n, dest,fug=0;
	cin>>n>>dest;
	int arr[n][2],first=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<2;j++){
			cin>>arr[i][j];
		}
	}
	int last = arr[0][1];
	for(int i=0;i<n;i++)
	{
		fug=max(fug,arr[i][1]);
	}
	if(fug<dest||arr[0][0]!=0)
		{cout<<"NO"<<endl;
		return 0;
		}
	else{
		for(int i=1;i<n;i++){
			if(dest<=last){
				cout<<"YES"<<endl;
				return 0;
			}
			else{
				if(arr[i][0]<=last&&arr[i][1]>last){
					last=arr[i][1];
				}
			}
		}
	}
	if(dest>last)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;
	return 0;

}