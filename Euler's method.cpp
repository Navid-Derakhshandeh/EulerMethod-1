//Navid-Derakhshandeh
#include <iostream>

using namespace std;

int main() 
{
	double x;
	
	double y;
	
	for(int i = 0; i < 100000; i++)
	{
		
	cout<<"Please Enter your time : \n";
	cin >>x;
	cout<<"Please Enter your point number : \n";
	cin>>y;
	double z = 0.2 * y;

	double e = 1 - x;

    double s = e / 100;

	double a = z * s;

    double r = a * x;

	double b = y + r;
	
	cout<<"Your Next Point Number is : \n"<<b<<"\n";
	}
	
	return 0;
}
