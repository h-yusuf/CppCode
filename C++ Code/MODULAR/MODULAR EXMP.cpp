#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std;



main(){
	int i=0,n,nilai=0;
	float ipk, sks,tsks;
	string mkul,ket;
	cout<<"Intput banyak mata kuliah = " ;cin>>n;
	
	while(i<=n)
	{
	cout<<"\nData ke = "<<i+1;
	cout<<"\n----------------";
	cin.ignore();
	cout<<"\nMata kuliah = ";getline(cin,mkul);
	cout<<"Jumlah SKS  = ";cin>>sks;
	cout<<endl;
	cout<<"Nilai matkul";cin>>ket;
	
		if (ket=="A"|| ket=="a")
			nilai+=(4*sks);
		else if (ket=="B"|| ket=="b")
			nilai+=(3*sks);
		else if (ket=="C"|| ket=="c")
			nilai+=(2*sks);
		else if (ket=="D"|| ket=="d")
			nilai+=(1*sks);
		else if (ket=="E"|| ket=="e")
			nilai+=(0*sks);
		else
		cout<<"Range nilai hanya Dari A-E";
		tsks=+sks;
		ipk=nilai/tsks;
		i++;
}
	cout<<"\nNilai total = "<<nilai;
	cout<<"\nTotal sks   = "<<tsks;
	cout<<"\nIpk         = "<<setiosflags(ios::fixed)
							<<setprecision(2)
							<<ipk;
							getch();
}