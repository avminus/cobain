#include <iostream>
#include <string>
using namespace std;
int main(){
	int k,count=0;
	string s,t;
	cin>>s>>t>>k;
for(int i=0;i<max(s.length(),t.length());i++){
	if(s[i]==t[i])
		count++;
	else 
		break;
}
	if((s.length()-count+t.length()-count)>k){
		cout<<"No"<<endl;
	}
	else if((s.length()-count+t.length()-count)==k)
		cout<<"Yes"<<endl;
	else
	{
		if((k-(s.length()-count+t.length()-count))%2==0){
			cout<<"Yes"<<endl;
		}
		else if((s.length()+t.length())<=k)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
}
