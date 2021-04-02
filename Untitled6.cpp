#include<iostream>
using namespace std;
#include <math.h>
#include<cmath>
int main(){
	int t,n[t];
	cin>>t;
	for(int i=0;i<t;i++){
	cin>>n[i];
	}
	for(int i=0;i<t;i++){
	int root=sqrt(n[i]);
	cout<<root<<endl;
	}
	return 0;
}

