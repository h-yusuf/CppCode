#include <iostream>
#include <conio.h>
using namespace std;

 main (){
 	int n;
		string nama,nim;
	float n1,n2,n3,n4,n5,n6,n7,n8,n9,rata,jmlh=0,sks,total;
	cout<<"masukan jumlah mahasiswa ";cin>>n;
	for (int m=1;m<=n;m++){
	
	cout<<"======================================"<<endl;
	cout<<"     PROGAM MENGHITUNG IP MAHASISWA   "<<endl;
	cout<<"======================================"<<endl;
	cout<<"	   MAHASISWA  "<< m <<endl;
	cout<<"======================================"<<endl;
	cout<<"	nama = ";cin>>nama;
	cout<<" nim  = ";cin>>nim;
	cout<<"======================================"<<endl;
	{ 
	cout<<" ASD     ";cin>>n1;
	cout<<" PPKN    ";cin>>n2;
	cout<<" PTI     ";cin>>n3;
	cout<<" PAI     ";cin>>n4;
	cout<<" KOMGRAF ";cin>>n5;
	cout<<" B.INGGRIS ";cin>>n6;
	cout<<" FOTOGRAFI ";cin>>n7;
	cout<<" ETIKA PROFESI ";cin>>n8;
	cout<<" PPA           ";cin>>n9;
	cout<<" total sks     ";cin>>sks;
	
					jmlh=n1+n2+n3+n4+n5+n6+n7+n8+n9;
					total=jmlh/sks;
}
	cout<<"jumlah nilai dari 22 sks ="<<endl;
	cout<<" total IP = "<<total;

getch();
cout<<endl;

}
}