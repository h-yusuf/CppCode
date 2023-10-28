#include <iostream>
#include <conio.h>
	//mencari data dalam array
using namespace std;
main(){
	int A[5],cari;
	for(int i=0;i<5;i++)
	{
		cout<<"A["<<i<<"] = ";cin>>A[i];
	}
	for(int c=0;c<5;c++)
	{
		cout<<"nilai pada elemen ke- "<<c+1<<" adalah = "<<A[c]<<endl;
	}
	cout<<"Nilai yang di cari = ";cin>>cari;
	
	//mencari data
	for (int f=0;f<5;f++)
	{
		if(A[f] == cari){
			cout<<"Nilai yang di cari di indeks ke- "<<f+1<<endl;
		}
	}
	getch();
}