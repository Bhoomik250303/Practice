#include<iostream>
using namespace std;
#include<math.h>
int main (){
	int n,a[n];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(a[j]>a[i]){
				int temp=a[j];
				a[j]=a[i];
				a[i]=temp;
	}
	}
	
}
for(int i=0;i<n;i++){
	cout<<a[i]<<endl;
}
	return 0;
}
