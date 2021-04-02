#include<iostream>
using namespace std;
#include<math.h>
int main(){
	int key,n,m,a[n][m];
	cin>>n>>m>>key;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]==key){
				cout<<"true";
				continue;
			}
			else{
			cout<<"false";
			continue;
			}
		}
	}
	return 0;
}
