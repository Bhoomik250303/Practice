#include <iostream>
using namespace std;
int add(int a,int b){
int sum=0;
	for(int i=0;i<b;i++)
	{
	int lg=a%10;
	sum=sum+lg;
	a=a/10;
	}
	return sum;
	}
int main(){
/*	int t,a[t];
	cin>>t;
	for(int i=0;i<t;i++){
	cin>>a[i];
	}
	for(int i=0;i<t;i++){
		cout<<add(a[i],t)<<endl;
	}
	return 0;*/
	int myvar=33;
	int foo = &myvar;
	bar = myvar;
}
