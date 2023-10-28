#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std;

	int n,nilai,bbnl,tsks,tbbot;
	string ket,cod,mkul;
	float ipk, sks,ttl;

void nh()
{
		if (nilai > 81 && nilai <= 100)
			ket = "A";
		
		else if (nilai > 61 && nilai <= 80)
			ket = "B";
		
		else if (nilai > 41 && nilai <= 60)
			ket = "C";
			
		else if (nilai > 21 && nilai <= 40)
			ket = "D";
			
		else if (nilai > 20 )
			ket = "E";
		
}

void bbt()
{
		if (ket== "A")
			bbnl = 4;
		
		else if (ket== "B")
			bbnl = 3;
		
		else if (ket== "C")
			bbnl = 2;
			
		else if (ket== "D")
			bbnl = 1;
			
		else if (ket== "E" )
			bbnl = 0;
		
}
void rumus(){
	bbt();
	tsks+=sks;
	tbbot=bbnl*sks;
	ttl+=tbbot;
	ipk=ttl/tsks;
}

main(){
	cout<<"Intput banyak mata kuliah = " ;cin>>n;	
for (int i=0;i<n;i++)
	{
	cout<<"\n\nData ke = "<<i+1;
	cout<<"\n----------------";
	cout<<"\nCode makul ";cin>>cod;
	cout<<"Mata kuliah = ";cin>>mkul;
	cout<<"Jumlah SKS  = ";cin>>sks;
	cout<<"Nilai Angka = ";cin>>nilai;
	
    nh();
    rumus();
	cout<<"Nilai huruf = "<<ket;
	cout<<endl;
	cout<<"Bobot Nilai = "<<bbnl;	

}
	cout<<"\n\n====================";
	cout<<"\nTotal sks         = "<<tsks;
	cout<<"\ntotal semua nilai = "<<ttl;
	cout<<"\nIPK               = "<<setiosflags(ios::fixed)
							<<setprecision(2)
							<<ipk;
	getch();
}