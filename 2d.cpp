#include<iostream>
using namespace std;
#include<math.h>
int main(){
	int t,y,arr[t][y];
	cin>>t>>y;
	for(int i=0;i<t;i++){
		for(int j=0;j<y;j++){
			cin>>arr[i][j];
		}
	}
		for(int i=0;i<t;i++){
		for(int j=0;j<y;j++){
		 cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

return 0;
}
