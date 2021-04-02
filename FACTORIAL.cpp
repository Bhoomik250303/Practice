#include<iostream>
using namespace std;
#include<math.h>
int fact(int a){
int pro=a;
while(a>0){
	pro=pro*(a-1);
	pro=a-1;
}
return pro;
}
int main(){
	int t;
	cin>>t;
	int a[t];
	for(int i=0;i<t;i++){
	cin>>a[i];
}
for(int i=0;i<t;i++){
	

}

	
	
	/*int n,t,a[n];
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>a[i];
	}
	for(int i=0;i<t;i++){
		cout<<fact(a[i])<<endl;
	}*/
	return 0;
}
