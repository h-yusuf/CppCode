#include <iostream>

using namespace std;

int main()
{
	string nama, NIM, IPK;
	float usia;
	
	
	cout<<"-------------------------------------------------------------"<<endl;
	cout<<"\n masukan nama kamu = ";cin>>nama;
	cout<<"\n masukan nim kamu  = ";cin>>NIM;
	cout<<"\n masukan ipk kamu  = ";cin>>IPK;
	cout<<"\n tanggal lahir     = ";cin>>usia;
	cout<<"\n\n";
	
	
	cout<<"--hasil data mahasiswa--";
	cout<<"\nnama mahasiswa ="<<nama;
	cout<<"\nnim mahasiswa  ="<<NIM;
	cout<<"\nipk mahasiswa  ="<<IPK;
	cout<<"\ntanggal lahir  ="<<usia;
	
	return 0;
	
}