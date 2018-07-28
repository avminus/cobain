//http://codeforces.com/problemset/problem/556/A
#include <iostream>
#include <string>
using namespace std;
int main(){
	int n;
	cin>>n;
	string str;
	cin>>str;
	int count0=0,count1=0;
	for(int i=0;i<str.length();i++){
	if(str[i]=='1')
	count1++;
	else
	count0++;
	}
	cout<<str.length()-(2*min(count1,count0))<<endl;
	return 0;
}