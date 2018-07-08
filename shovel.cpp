// http://codeforces.com/contest/732/problem/A

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	int k, r,n=1;
	cin>>k>>r;
while(1){
	if(((n*k)%10==0)||(((n*k)-r)%10==0))
	break;
	else
	n++;
}
cout<<n<<endl;
}