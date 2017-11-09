#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout<<"a=/=b svp"<<endl<<"a: ";
	cin>>a;
	cout<<"b: ";
	cin>>b;

	int *pLePlusGrand, *pLePlusPetit;

	if(a > b)
	{
		pLePlusGrand = &a;
		pLePlusPetit = &b;
	}
	else
	{
		pLePlusGrand = &b;
		pLePlusPetit = &a;
	}

	cout<<*pLePlusPetit<<"<"<<*pLePlusGrand<<endl;
	cout<<"Les adresses réspectives sont "<<pLePlusPetit<<" et "<<pLePlusGrand<<endl;

	return 0;
}