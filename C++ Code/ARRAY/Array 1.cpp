#include <iostream>
#include <conio.h>
		contoh array
using namespace std;
main(){
	int y [] = {1,2,3,4,5};
	int n, r=0;
	for ( n=0 ; n<5 ; n++ )
	{
		r += y[n];
	}
	cout<<" "<<r;
	getch();
}