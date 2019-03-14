#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;//compilation fail
	cout<<a<<endl;
	
	int* vec= new int [3];
	vec[0]=2;//run time error
	cout<<vec[0]<<endl;
	
	return 0;
}
