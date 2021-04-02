 #include<iostream>
 using namespace std;
 int ascend(int x, int b[x]){
 	for(int i=0;i<x;i++){
 		for(int j=i+1;j<=x;j++){
 		if(b[j]<b[i]){
 			int tempo=b[i];
 			b[j]=b[i];
 			b[i]=tempo
		 }	
		 }
		  }
		  return b[n-1];
 }
 int main(){
 	int n,a[n];
 	cin>>n;
 	for(int i=0;i<n;i++){
 		cin>>a[i];
	 }
	 
	 
 	for(int i=0;i<n;i++){
 		cout<<ascend(n,a[n])<<endl;
	 }
 	return 0;
 } 
