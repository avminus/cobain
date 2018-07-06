// http://codeforces.com/problemset/problem/705/A

#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
int n;
cin>>n;
for(int j=1; j<=n;j++){
	if(j%2==1)
	cout<<"I hate ";
	else
	cout<<"I love ";
	if(j!=n)
	cout<<"that ";
	}
cout<<"it"<<endl;
}