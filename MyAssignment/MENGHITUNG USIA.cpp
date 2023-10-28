#include <iostream>
using namespace std;

int main(){
	float ttl,umur,bl,bulan,blb,blnni;
	string nama;
	cout<<"masukan nama anda ";cin>>nama;
		cout<<"tahun lahir kamu ";cin>>ttl;
		cout<<"bulan lahir kamu ";cin>>bl;
		cout<<"sekarang bulan   ";cin>>blnni;
							umur =2022-ttl;
							bulan=umur*12-(bl-blnni);
							
	system("cls");
			cout<<"nama kamau "<<nama;
			cout<<"\numur anda "<<umur<<endl;
			cout<<bulan<<" bulan"<<endl;
				if (umur>=1&&umur<=12)
						cout<<"haha kamu bocil";
				else if (umur>=12&&umur<=16)
						cout<<"selamat anda tambah gede";
				else if (umur>=16&&umur<=20)
						cout<<"haha kita seumuran";
				else
						cout<<"ciee udah dewasa";
	return 0;
}