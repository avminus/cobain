//http://codeforces.com/problemset/problem/665/A
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int barr[2][2];
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
		cin>>barr[i][j];
		}
	}
	string lime;
	cin>>lime;
	int time[4];
	time[0]=lime[0]-48;time[1]=lime[1]-48;time[2]=lime[3]-48;time[3]=lime[4]-48;
	int dep= 60*(time[0]*10 + time[1]) + (time[2]*10+ time[3]);
	int arr= dep+barr[0][1];
	int fbus,lbus,x=300;
	while(1){
		if((x+barr[1][1])>dep)
		{	fbus=x;
			break;
		}
		else
			x+=barr[1][0]; 
	}
		if((arr-300)%barr[1][0]==0)
			lbus=arr-barr[1][0];
		else
			lbus=arr-((arr-300)%barr[1][0]);
		if(lbus>=1440){
			lbus=1439-((1139)%barr[1][0]);
		}
	cout<<(lbus-fbus)/barr[1][0]+1<<endl;
}