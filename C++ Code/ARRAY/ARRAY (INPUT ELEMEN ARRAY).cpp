#include <iostream>
#include <conio.h>

using namespace std;
main(){
	int A[5]; dekralasi array
	input elemen array
	for (int i=0;i<5;i++)
	{
		cout<<"A["<<i+1<<"] = ";cin>>A[i];
	}
	menampilkan isi dari elemen array
	for (int c=0;c<5;c++)
	{
		cout<<"Nilai pada elemen ke "<<c+1<<" adalah = "<<A[c]<<endl;
	}
	getch();
}