#include<iostream>
using namespace std;
#include<math.h>
int main(){
	int t,y,m[t][y];
	cin>>t>>y;
	for(int i=0;i<=t;i++){
		for(int j=0;j<=y;j++){
			cin>>m[i][j];
		}
	}
		for(int i=0;i<=t;i++){
		for(int j=0;j<=y;j++){
		 cout<<m[i][j];
		}
		cout<<endl;
	}

return 0;
}
