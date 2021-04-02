#include<iostream>
using namespace std;
#include <cmath>
#include<math.h>
int rev(int n){
		int sum=0;
	while(n>0){
	int	lastdigit=n%10;
	sum=sum*10+lastdigit;
	n=n/10;
} 
return sum%10;
}
int main(){
	int t,a[t];
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>a[i];
	}
	for(int i=0;i<t;i++){
		cout<<a[i]%10+rev(a[i])<<endl;
}
	return 0;
	}

