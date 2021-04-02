#include<iostream>
using namespace std;
#include<math.h>
int main(){
	int n,m,a[n][m];
	cin>>n>>m;
	for(int row=0;row<n;row++){
		for(int col=0;col<m;col++){
			cin>>a[row][col];
		}
		}
	for(int row=0;row<n;row++){
		for(int col=0;col<m;col++){
			int temp=a[row][col];
			a[row][col]= a[col][row];
			a[col][row]=temp;
			}
			for(int row=0;row<n;row++){
				for(int col=0;col<m;col++){
					cout<<a[row][col]<<" ";
				}
				cout<<endl;
			}
	}
	return 0;
}
