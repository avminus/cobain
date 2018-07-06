// http://codeforces.com/problemset/problem/621/A



#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
	int n,count=0, carry =0, sup;
  int leastodd=1999999999;
  int sum[15]={0};
	cin>>n;
	string nstr[n];
		if((n<1)||(n>100000))
	cout<<"0"<<endl;
	else{
			for(int j=0; j<n; j++){
				cin>>nstr[j];
				if(stoi(nstr[j])%2==0){
					count++;
				}
			}
		for(int j=0;j<n; j++)
		{	int x= stoi(nstr[j]);
    			if(x%2==0){
					for(int k=14; k>=0; k--){
							{
							sup = (sum[k]+(x%10)+carry);
							sum[k] = sup%10;
							carry = sup/10;
							x /=10;  
							}
    				}
    			}
				else if((n-count)%2==0)
						{
							for(int k=14; k>=0; k--)
							{
								sup = (sum[k]+(x%10)+carry);
							sum[k] = sup%10;
							carry = sup/10;
							x /=10;  
							}

    				}
					 else {
					 if(leastodd> stoi(nstr[j]))
					 	{leastodd= stoi(nstr[j]);
					 	for(int k=14; k>=0; k--)
							{
								sup = (sum[k]+(x%10)+carry);
							sum[k] = sup%10;
							carry = sup/10;
							x /=10;  
							}}
						else 
							{
								for(int k=14; k>=0; k--)
							{
								sup = (sum[k]+(x%10)+carry);
							sum[k] = sup%10;
							carry = sup/10;
							x /=10;  
							}
							}
						}
						  }

		carry=0;
  			if((n-count)%2!=0){
  				int y = leastodd;
  				for(int k=14; k>=0;k--)
  				{
  					if(sum[k]>(y%10)){
  						sum[k] =sum[k]- (y%10)- carry;
  						if(carry==1)
  						carry=0;
  					}
  					else if(sum[k]==(y%10)){
  						if(carry==0)
  						sum[k] =0;
  						else
  							{sum[k] =9;
  						carry=1;}
  						
  					}else
  					{
  						sum[k]= sum[k]-(y%10)- carry+10;
  						carry=1;
  					}
  					y=y/10;
  					
  				}
  			}



  			for(int i=0; i<15; i++)
			{
				if(sum[i]!=0)
				{carry=i;
			break;}
			if(i==14)
				carry=14;
			}  	
			for(int i= carry; i<15; i++)
				cout<<sum[i];
  cout<<endl;
  		
  		}
  		

  return 0;
	}