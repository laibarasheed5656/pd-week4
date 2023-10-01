#include <iostream>
using namespace std;
void parameter(int a , int b);
int main()
{
	int a;
	cout<< "Enter the first number: ";
	cin>>a;
	int b;
	cout<< "Enter the second number: ";
	cin>>b;
	parameter(a , b);


}
void parameter(int a , int b)
{
	if(a==b)
	cout<<"true";
	if(a!=b)
	cout<<"false";	

}