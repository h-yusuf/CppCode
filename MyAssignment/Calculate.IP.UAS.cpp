#include <iostream>
#include <conio.h>
using namespace std;

int main( ){
	
	string nama,nim;
	float n1,n2,n3,n4,n5,n6,n7,n8,n9,rata,jml=0,sks;
	for (int m=1;m<=68;m++){
	
	cout<<"---------------------------------------------"<<endl;
	cout<<"  PROGRAM MENGHITUNG NILAI IP UAS SMESTER 1 "<<endl;
	cout<<"---------------------------------------------"<<endl;
	cout<<"		MAHASISWA "<< m <<endl;
	cout<<"---------------------------------------------"<<endl;
	cout<<"Nama Mahasiswa  : ";cin>>nama;
	cout<<"NIM             : ";cin>>nim;
	cout<<"============================================="<<endl;

	{
		cout<<" ASD  		= ";cin>>n1;
		cout<<" PPA  		= ";cin>>n2;
		cout<<" PTI  		= ";cin>>n3;
		cout<<" PAI  		= ";cin>>n4;
		cout<<" KOMGRAF  	= ";cin>>n5;
		cout<<" B.INGGRIS 	= ";cin>>n6;
		cout<<" DIGITAL ENTERPRENEURSHIP = ";cin>>n7;
		cout<<" ETIKA PROFESI		   = ";cin>>n8;
		cout<<" PENDIDIKAN PANCASILA   = ";cin>>n9;
		cout<<"\nJumlah SKS 		:";cin>>sks;
	
		jml=n1+n2+n3+n4+n5+n6+n7+n8+n9;
		rata=jml/sks;	
	}	
	cout<<"\nTotal IP : "<<rata<<endl;

	getch();	
}
cout<<endl;
}
