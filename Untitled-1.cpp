#include<iostream>
using namespace std;
#include<math.h>
//classes are like-
// -templates under which various objects can be 
//-stored 
class student{
public:
string name;
int age;
bool gender;
 //creating a function for printing out the 
 //-array of various objects.
 public:
 void printInfo(){
   cout<<name;
   cout<<age;
   cout<<gender;
 }
};

int main(){
/*making the objects one by one*/
	/*student a{
	a.name="bhoomik";
	a.age=18;
	a.gender=1;}
	
	student b{
	b.name="vinish";
	b.age=19;
	b.gender=1;}*/	
//making objects using array(apna hero)
	int n;
	cin>>n;
	student arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i].name;
		cin>>arr[i].age;
		cin>>arr[i].gender;
	};
//now for printing out the array taken we need
//-to declare a function "printInfo" in the class 
//above.	
	for(int i=0;i<n;i++){
		arr[i].printInfo();
	}
	return 0;
}