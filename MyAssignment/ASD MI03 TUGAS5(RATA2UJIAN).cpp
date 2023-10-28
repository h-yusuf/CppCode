#include <iostream>
#include <conio.h>
using namespace std;

int main( ){
	int j;
	string nama,nim;
	float uas,uts,rata,jml=0;
	cout<<"  masukan jumlah mahasiswa = ";cin>>j;
	
	for (int m=1;m<=j;m++){
	
	cout<<"---------------------------------------------"<<endl;
	cout<<"  PROGRAM MENGHITUNG NILAI RATA-RATA UJIAN   "<<endl;
	cout<<"---------------------------------------------"<<endl;
	cout<<"		MAHASISWA "<< m <<endl;
	cout<<"---------------------------------------------"<<endl;
	cout<<"Nama Mahasiswa  : ";cin>>nama;
	cout<<"NIM             : ";cin>>nim;
	cout<<"============================================="<<endl;

	{
		cout<<" nilai uas 		= ";cin>>uas;
		cout<<" nilai uts  		= ";cin>>uts;
	
		jml=uas+uts;
		rata=jml/2;	
	;
	}	
	cout<<"\nRata-Rata : "<<rata<<endl;
	if(rata>=81){
		cout<<"LULUS";
	}else
	cout<<"TIDAK LULUS";
	
	cout<<endl;

	getch();	
}
cout<<endl;
}
