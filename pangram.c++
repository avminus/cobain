// http://codeforces.com/problemset/problem/520/A

#include <iostream>
#include <fstream>
#include<string>
using namespace std;
int main(){
	string str;
	int n, up[26]={0}, low[26]={0}, count=0;
	cin>>n>>str;
	if(n<26)
		cout<<"NO"<<endl;
	else
		{
			for(int j=0; j<n; j++)
				{
					if(int(str[j]>94))
					low[int(str[j])-97]++;
					else
					up[int(str[j])-65]++;
				}
			for(int k=0; k<26; k++)
				{
					if((low[k]+up[k])==0)
						count++;
				}
			if(count>0)
				cout<<"NO"<<endl;
			else
				cout<<"Yes"<<endl;	
		}
	
	return 0;
}