//http://codeforces.com/problemset/problem/236/A
#include <iostream>
#include <string>
using namespace std;
int main(){
	string str;
	cin>>str;
	int arr[26],count=0;
	for(int i =0;i<26;i++){
		arr[i]=0;
	}
	for(int i=0;i<str.length();i++){
	arr[int(str[i])-97]++;
	}
	for(int i=0;i<26;i++){
	if(arr[i]!=0)
	count++;
	}
	if(count%2==0)
	cout<<"CHAT WITH HER!"<<endl;
	else
	cout<<"IGNORE HIM!"<<endl;
	return 0;
}