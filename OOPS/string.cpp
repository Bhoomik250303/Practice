#include <iostream>
#include<math.h>
#include<algorithm>
#include<string>
using namespace std;
int main() {
    string s= "lfjnfnirengnv";
    transform(s.begin(),s.end(),s.begin(4),::toupper);
 
    std::cout << s << std::endl;
	return 0;
}
