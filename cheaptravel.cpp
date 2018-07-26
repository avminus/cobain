//http://codeforces.com/problemset/problem/466/A
#include <iostream>
using namespace std;
int main(){
	int n,m,a,b;
	cin>>n>>m>>a>>b;
	if((m*a)<=b){
		cout<<n*a<<endl;
	}
	else
	{	int k = (n/m)*b + (n%m)*a;
		int l;
		if(n%m==0)
			l = (n/m)*b;
		else 
			l = ((n/m)+1)*b;
		cout<<min(k,l)<<endl;
	}
	return 0;
}