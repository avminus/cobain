//http://codeforces.com/contest/782/problem/A
#include <iostream>
using namespace std;
int main(){
	int n, table=0, maxtable=0;
	cin>>n;
	int arr[2*n],barr[n];
	for(int i=0;i<2*n;i++){
	cin>>arr[i];
	}
	for(int j=0;j<n;j++)
		barr[j]=0;
	for(int j=0;j<2*n;j++){
	if(barr[arr[j]-1]==0){
		table++;
		barr[arr[j]-1]++;
		maxtable=max(maxtable, table);
	}
	else	{
		table--;
	}
	}
	cout<<maxtable<<endl;
	return 0;
}