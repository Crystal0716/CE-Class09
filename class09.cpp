#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std ;
int sum ( int x )
{
	int b , c , d ,e , f , g ;
	b = x %10 ;
	c = b * 1000 ;
	d = b * 100 ;
	e = x / 10 ;
	f = e * 10 ;
	g = c + d + e + f ;
	return ( g );
}
int main ()
{
	int a , h ;
	cout << "Enter an integer <=99 and >= 1 :" ;
	cin >> a ;
	h = sum ( a ) ;
	cout <<"New integer is "<< setw (4) << setfill ('0') << h ;
	return (0) ;
}