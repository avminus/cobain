//http://codeforces.com/problemset/problem/478/A
#include <iostream>
using namespace std;
int main(){
	int c1,c2,c3,c4,c5;
	cin>>c1>>c2>>c3>>c4>>c5;
	if((c1+c2+c3+c4+c5)%5==0){
		if(c1+c2+c3+c4+c5==0)
			cout<<-1<<endl;
		else cout<<(c1+c2+c3+c4+c5)/5<<endl;
	}
	else
		cout<<-1<<endl;
	return 0;
}