#include<iostream>
using namespace std;
#include<cmath>
/*int ans=1;
int m,b[m];
int perfSqr(int m,int b[m]){*/
int main(){
	int n,a[n];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i]!=j*j){
			
				cout<<a[j];
			}
		else{
			j++;
			}
		}
	}

//for(int j=1;j<=n;j++){
	
//}
	return 0;
}
