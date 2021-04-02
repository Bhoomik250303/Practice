#include<iostream>
using namespace std;
int main(){
int A[1000001]={0};
int n;
cin >> n;
int a;
while(n>0){
cin >> a;
A[a]= A[a]+1;
}
int i=0;
while(i0){
cout << i << endl;
A[i]–;
}
i++;
}
return 1;
}


