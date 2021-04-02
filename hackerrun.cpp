#include <iostream>
#include <cstdio>
using namespace std;

int main() {
int a,b,n;
cin>>a>>b>>n;
for(int i=a;i<=b;i++){
}
    if(n>=1 && n<=9){
        cout<<"*"<<endl;
    }
    else if(n%2==0){cout<<"even"<<endl;}
    else {cout<<"odd"<<endl;}
    return 0;
}
