#include<iostream>
using namespace std;
#include<math.h>
int main(){
	int n,a[n],b[n];
	cin>>n;
	for(int i=0;i<n;i++){
			cin>>a[i];
		 }
		 for(int i=0;i<n;i++){
			cin>>b[i];
		 }
		 int sum=a[1];
		 int sum1=b[1];
	for(int i=1;i<=n;i++){
		sum=sum+a[i];
		sum1=sum1+b[i];
		cout<<sum<<"  "<<sum1; 
	}	
	return 0;
}
