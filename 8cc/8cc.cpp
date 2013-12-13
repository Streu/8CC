#include "stdafx.h"
#include <iomanip>
#include <iostream>

using namespace std;

int an(int k,int n)
{
	int p=k;
	if (n==1) return k;
	if (n==0) return 1;
	if (n>1)
	for (int i=2;i<=n;i++)
		p*=k;
	return p;
}
int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Rus");
	int number,n=0;
	cout<<"Введите целое десятичное число "<<endl;
	cin>>number;
	cout<<number<<" (10cc) -> ";
	int *m;
	m=new int[10];
	do
	{
		
		m[n++]=number%8;
		number/=8;
	}while(number>7);
	m[n]=number;
	number=0;
	for (int i=n;i>=0;i--)
		number+=m[i]*an(10,i);
	cout<<number<<" (8cc)";
	cout<<endl<<endl;
	system("pause");
	return 0;
}

