#include<iostream>
using namespace std;
#include<math.h>
int main(){
int n,a[n];
cin>>n;
for(int i=0;i<n;i++){
	cin>>a[i];
}
int i;
while(i<n){
	for(int i=0;i<n;i++){
	cout<<a[i]; 
}
	n=n-1;
}

	return 0;
}

