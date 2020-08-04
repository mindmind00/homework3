#include<iostream>
using namespace std;
void main()
{
	int n1,n2;
	cout<<"Enter a number : ";
	cin>>n1;
	cout<<"Enter a number : ";
	cin>>n2;

	cout<<"Largest : "<<((n1 >= n2) ? n1 : n2) <<endl;
	cout<<"Smallest : "<<((n1 <= n2) ? n1 : n2) <<endl;
}