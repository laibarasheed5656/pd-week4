#include<iostream>
using namespace std;
Reserve(string x)
{
	if(x=="true")
	cout<< "false";
	if(x=="false")
	cout<< "true";

}
main()
{
	string x;
	cout<<"Enter 'true' or 'false': ";
	cin>> x;
	Reserve(x);


}