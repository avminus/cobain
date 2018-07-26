//http://codeforces.com/problemset/problem/459/A
#include <iostream>
using namespace std;
int main(){
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	double slope;
	if(x2!=x1)
		slope= double(y2-y1)/double(x2-x1);
	else
		slope = 83984374;
		if(slope==0)
				cout<<x1<<' '<<y1+abs(x2-x1)<<' '<<x2<<' '<<y2+ abs(x2-x1)<<endl;
		else if(slope==1)
				cout<<max(x1,x2)<<' '<<min(y1,y2)<<' '<<min(x1,x2)<<' '<<max(y1,y2)<<endl;
		else if(slope==-1)
				cout<<min(x1,x2)<<' '<<min(y1,y2)<<' '<<max(x1,x2)<<' '<<max(y1,y2)<<endl;
		else if(slope==83984374)
				cout<<x1+abs(y2-y1)<<' '<<y1<<' '<<x2+abs(y2-y1)<<' '<<y2<<endl;
		else
				cout<<-1<<endl;
	return 0;
}