//https://codeforces.com/problemset/problem/988/A
#include <iostream>
using namespace std;
int main(){
int n,k;
cin>>n>>k;
int arr[n],barr[100];
for(int j=0;j<100;j++){
barr[j]=0;
}
for(int i=0;i<n;i++){
cin>>arr[i];
barr[arr[i]-1]=i+1;
}
int count=0;
for(int i=0;i<100;i++){
if(barr[i]!=0){
count++;}
}
if(count<k){
cout<<"NO"<<endl;
return 0;
}
else{
cout<<"YES"<<endl;
int i=0;
while(k>0){
if(barr[i]!=0&&k!=1){
cout<<barr[i]<<' ';
k--;
}
else if(barr[i]!=0&&k==1){
cout<<barr[i]<<endl;
k--;
}
i++;
}
}
return 0;
}
