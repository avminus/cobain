// http://codeforces.com/contest/158/problem/A
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	int n,k,i,p;
	cin>>n>>k;
	int score[n];
	for(int j=0; j<n;j++){
		cin>>score[j];
	}
	if((k==n)&&(score[n-1]!=0))
		cout<<n<<endl;
	else if(score[k-1]>0){
	for(i=k;i<n;i++){
		if(score[i]!=score[k-1])
			break;
	}	
	cout<<i<<endl;
	}
	else {
		for(p=0;p<k;p++){
			if(score[p]==0)
			break;
		}
		cout<<p<<endl;
	}
	return 0;
}