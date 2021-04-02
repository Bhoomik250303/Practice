#include<iostream>
using namespace std;
#include<math.h>
int main (){
int n,m;
cin>>n>>m;
/*  ***** 
	****   
	***  
	**
	*
	        */
/*for(int i=1;i<=m;i++){
	for(int j=n;j>=i;j--){
		cout<<" *";
		}
cout<<" "<<endl;
}*/
for(int i=m;i>=1;i--){
	for(int j=n;j>=i;j--){
		cout<<" * " ;
		}
cout<<" "<<endl;
}
for(int i=m-1;i>=1;i--){
	for(int j=1;j<=i;j++){
		cout<<" * ";
	}
cout<<" "<<endl;
}




	return 0;
}
