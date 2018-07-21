//http://codeforces.com/problemset/problem/147/A
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
	string str;
	getline(cin,str);
	int count=0;
	int n= str.length();
		for(int i=0;i<n;i++){
		if(str[i]==' '){
			int j=i+1;
			while(str[j]==' '){
				count++;
				j++;
			}
			if((str[j]==',')||(str[j]=='!')||(str[j]=='?')||(str[j]=='.')){
				str.erase(i,count+1);
				n-= (count+1);
			}
			else {
				str.erase(i,count);
				n-= count;
			}
		 count =0;
		}
	}
	count=0;
	for(int j=0;j<n;j++){
		if(j!=(n-1)){
		if((str[j]==',')||(str[j]=='!')||(str[j]=='?')||(str[j]=='.')){
			if(str[j+1]!=' '){
				str.insert(j+1,1,' ');
				n++;
			}
		}
	}
}
	cout<<str<<endl;
	return 0;
}