#include<iostream>
using namespace std;
#include<math.h>
int main(){
	int n,a[n],b[n],c[n];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i]>>c[i];
	}
	for(int i=0;i<n;i++){
		if(c[i]>a[i]>b[i] ||c[i]>a[i]>b[i]  ){
			cout<<a[i]<<endl;
		}
		else if(a[i]>b[i]>c[i] ||c[i]>b[i]>a[i]  ){
			cout<<b[i]<<endl;
		}
		else if(b[i]>c[i]>a[i] ||a[i]>c[i]>b[i]  ){
			cout<<c[i]<<endl;
		}
	}
		return 0;
}
