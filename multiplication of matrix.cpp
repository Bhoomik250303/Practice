 #include<iostream>
using namespace std;
#include<math.h>
int main(){
	int n,m,a,b,A[m][n],B[a][b];
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>A[i][j];}}
				cin>>a>>b;
			for(int i=0;i<a;i++){
				for(int j=0;j<b;j++){
				cin>>B[i][j];
			}}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			  int newMat=0;
			if(n==a){
				int newMat=newMat+A[i][j]+B[j][i];
			}
			else if(m==b){
				int newMat = newMat+B[i][j]+A[j][i];
			}
			cout<<newMat<<endl;
		}
	}
	
	return 0;
}
