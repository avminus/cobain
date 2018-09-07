//https://codeforces.com/problemset/problem/1006/C
#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int a=0,b=n-1;
	long long int suma=arr[0],sumb=arr[n-1],megasum=0;
	while(a<b){
		if(suma>sumb){
			b--;
			sumb+=arr[b];
		}
		else if(suma<sumb){
			a++;
			suma+=arr[a];
		}
		else if(suma==sumb){
			megasum=suma;
			a++;
			b--;
			suma+=arr[a];
			sumb+=arr[b];
		}
	}
	cout<<megasum<<endl;
}