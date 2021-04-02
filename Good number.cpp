#include<iostream>
using namespace std;
#include<math.h>
	int sumOffactors(int a){
	int sqr=sqrt(a);
	int s=0;
	for(int i=1;i<=a;i++){
		if(a%i==0 ){
			s+=i;
		}
	}
		return s;
}

int main(){
	int t,l[t],r[t];
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>l[t]>>r[t];
	}
	int ans=0;
	for(int i=0;i<t;i++){
for(int j=l[i];j<=r[i];j++){
	ans+=sumOffactors(j) ;
}
}
	cout<<ans<<endl;
	return 0;
}
