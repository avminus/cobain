// http://codeforces.com/problemset/problem/577/A

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
	int n,count=0,tot=0;
	long int x;
	cin>>n>>x;
	if(x>n){
		for(int i=1;i<=n;i++)
		{
			if((x%i==0)&&(x/i<=n))
				count++;
		}
		cout<<count<<endl;
	}
	else if(x<=n){
		for(int j=1;j<=x;j++){
			if(x%j==0)
			count++;
		}
		cout<<count<<endl;
	}
	
	return 0;
}