#include<iostream>
using namespace std;
#include<math.h>
int main(){
	int a;
	cin>>a;
	int sumOffactors(int a){
	int sqr=sqrt(a);
	int sumofac=0;
	for(int i=1;i<=a;i++){
		if(a%i==0 ){
			sumofac+=i;
		}
	}
		cout<<sumofac;
}

