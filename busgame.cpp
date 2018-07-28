//http://codeforces.com/problemset/problem/79/A
#include <iostream>
using namespace std;
int main(){
	int x,y,i=1;
	cin>>x>>y;
	while(1){
	if(i%2!=0){
		if((100*x + 10*y)<220 || y<2)
		{
		cout<<"Hanako"<<endl;
		break;
		}
		else if(x>=2){
		x-=2;
		y-=2;
		}
		else{
		y=y-(220-(100*x))/10;
		x=0;
		}
		}
	else{
	if((100*x + 10*y)<220 || y<2){
		cout<<"Ciel"<<endl;	
		break;	
	}
	else if(y>=22)
		y-=22;
	else{
		if(y<12){
		x-=2;
		y-=2;
		}
		else{
		x--;
		y-=12;
		}
	}
	}
	i++;
	}
}