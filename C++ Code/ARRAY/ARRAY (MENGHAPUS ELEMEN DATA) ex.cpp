#include <iostream>
#include <conio.h>
		Array menghapu elemen data
using namespace std;
main(){
	int A[5]={10,20,30,40,50};
	int i,n;
	cout<<"data yang lama\n";
	cout<<"================\n";
	for (i=0;i<5;i++)
	{
		cout<<" "<<A[i];
	}
	cout<<"\nMasukan Data Ke-brpa yang ingin di hapus : ";
	cin>>n;
	for (i=n-1;i<5-1;i++)
	{
		A[i]=A[i+1];
	}
	cout<<"\nData yang baru : \n";
	for (i=0;i<4;i++)
	{
		cout<<" "<<A[i];
	}
	getch();
}