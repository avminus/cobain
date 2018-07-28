//http://codeforces.com/contest/764/problem/A
#include <iostream>
using namespace std;
int main(){
	int n,m,z,count=0;
	cin>>n>>m>>z;
	for(int i=1;i<=z;i++){
	if(i%n==0&&i%m==0)
	count++;
	}
	cout<<count<<endl;
}