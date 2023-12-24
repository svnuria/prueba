#include<iostream>
using namespace std;

int main (int argc, char *argv[]) 
{
	int n;
	cout<<"digite un numero: "<<endl;
	cin>>n;
	if(n==0)
	{
		cout<<"el numero es igual a cero "<<endl;
	}
	else if(n%2==0)
	{
	cout<<" el numero es par "<<endl;
	}
	else
	{
		cout<<" el numero es impar "<<endl;
	}
	return 0;
}
