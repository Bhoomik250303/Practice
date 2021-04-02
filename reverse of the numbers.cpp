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
return sum;
}
int main(){
	int t,a[t];
	cin>>t;
	for(int i=0;i<t;i++){
	cin>>a[i];
	}
/*	for(int i=0;i<t;i++){
	int sum=0;
	while(a[i]>0){
	int	lastdigit=a[i]%10;
	sum=sum*10+lastdigit;
	a[i]=a[i]/10;
}
return sum;
}*/
for(int i=0;i<t;i++){
cout<<rev(a[i])<<endl;
}
return 0;
}
