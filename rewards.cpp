//http://codeforces.com/problemset/problem/448/A
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;
int main(){
	int c[3], m[3];
	int sumC=0, sumM=0,n;
	for(int i=0;i<3;i++){
		cin>>c[i];
	}
	for(int j=0;j<3;j++){
		cin>>m[j];
	}
	cin>>n;
	for(int i=0;i<3;i++){
		sumC+=c[i];
		sumM+=m[i];
	}
	int z= ceil(double(sumC)/5.0)+ceil(double(sumM)/10.0);
	if(z<=n){
		cout<<"YES"<<endl;
	}
	else
		cout<<"NO"<<endl;
	return 0;
}