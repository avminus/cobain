//http://codeforces.com/contest/749/problem/A
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
	int n, count2;
	cin>>n;
	if(n%2==0){
	count2=n/2;
	}
	else 
	count2=(n/2)-1;
	if(n%2==0){
		cout<<count2<<endl;
		for(int i=0;i<count2;i++){
			if(i!=(count2-1)){
				cout<<"2 ";
			}
			else
				cout<<'2'<<endl;
		}
	}
	else
	{	cout<<count2+1<<endl;
		for(int i=0;i<count2;i++){
			cout<<"2 ";
		}
		cout<<'3'<<endl;
	}
}