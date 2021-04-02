#include<iostream>
using namespace std;
#include<cmath>
int main(){
	int n,a[n],b[n],c[n];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i]>>c[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]+b[i]+c[i]==180){
			cout<<"yes"<<endl;
		}
		else{
			cout<<"no"<<endl;
		}
	}
	return 0;
}
