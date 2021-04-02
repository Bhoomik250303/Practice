#include<iostream>
using namespace std;
#include<math.h>
int main(){
	int n;
	cin>>n;
	int a=n/10;
	int b=n/100;
	int c=n/1000;
	int A=n%10; 
	int A2=a%10;
	int A3=b%10;
	int A4=c%10;
	int ans=A+10*A3+1000*A4+100*A2;
	cout<<ans<<endl;	
	return 0;
}
