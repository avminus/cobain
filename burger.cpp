#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{	int r=0,z=0,d=0,n,countr=0,countd=0,dist=2000001;
	string str;
	cin>>n;
	
	if(n==0)
	;
	else{
		cin>>str;
	for(int i=0; i<n; i++)
	{	
		if(str[i]=='R')
				r++;
		else if(str[i]=='D')
			d++;
		else if(str[i]=='Z')
			z++;
	}
		if(z==0){
			int R[r],D[d];
		for(int i=0; i< n; i++ ){
			if(str[i]=='R'){
				R[countr]=i;
				countr++;
			}
			else if (str[i]=='D'){
				D[countd]=i;
				countd++;
			}
						}
		for (int i=0; i<r;i++){
			for(int j=0; j<d;j++){
				if(dist>abs(R[i]-D[j]))
					dist= abs(R[i]-D[j]);
			}
		}
		cout<<dist<<endl;
		}
		else
			cout<<"0"<<endl;
	
	}
  return 0;
	}