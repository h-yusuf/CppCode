#include<iostream>

using namespace std;

int tambah (float a, float b){
	return ( a + b );
	}

int kurang (float a, float b ){
	return ( a - b );
	}

int kali (float a, float b ){
	return ( a * b );
	}

int bagi (float a, float b ){
	return (a / b );
	}

int main (){
int bil1, bil2,oo;
char pilihanananan;

menu:
cout<<" ========================================"<<endl;
cout<<" |	Program Kalkulator Sederhana	|"<<endl;
cout<<" ========================================"<<endl;
cout<<endl;
cout<<" ========================================"<<endl;
cout<<" |	     Masukan pilihanananan		|"<<endl;
cout<<" ========================================"<<endl;
cout<<" |					|"<<endl;
cout<<" |	(A) Tambah	(B) Kurang	|"<<endl;
cout<<" |	(C) Kali	(D) Bagi	|"<<endl;
cout<<" |					|"<<endl;
cout<<" ========================================"<<endl;
cout<<" Masukan pilihanananan		: ";cin>>pilihanananan;
cout<<endl;

if ( pilihanananan == 'A' || pilihanananan == 'a' ) {

	cout<<" ========================================"<<endl;
	cout<<" |	     Masukan Bilangan		|"<<endl;
	cout<<" ========================================"<<endl;
	cout<<" |					|"<<endl;
	cout<<" | Masukan Bilangan pertama : ";cin>>bil1;
	cout<<" | Masukan Bilangan kedua : ";cin>>bil2;
	cout<<" |					|"<<endl;
	cout<<" ========================================"<<endl;
	cout<<" | Hasilnya Adalah : "<<tambah(bil1,bil2)<<"			|"<<endl;
	cout<<" ========================================"<<endl;

}
else if ( pilihanananan == 'B' || pilihanananan == 'b' ) {

	cout<<" ========================================"<<endl;
	cout<<" |	     Masukan Bilangan		|"<<endl;
	cout<<" ========================================"<<endl;
	cout<<" |					|"<<endl;
	cout<<" | Masukan Bilangan pertama : ";cin>>bil1;
	cout<<" | Masukan Bilangan kedua : ";cin>>bil2;
	cout<<" |					|"<<endl;
	cout<<" ========================================"<<endl;
	cout<<" | Hasilnya Adalah : "<<kurang(bil1,bil2)<<"			|"<<endl;
	cout<<" ========================================"<<endl;

}
else if ( pilihanananan == 'c' || pilihanananan == 'C' ) {

	cout<<" ========================================"<<endl;
	cout<<" |	     Masukan Bilangan		|"<<endl;
	cout<<" ========================================"<<endl;
	cout<<" |					|"<<endl;
	cout<<" | Masukan Bilangan pertama : ";cin>>bil1;
	cout<<" | Masukan Bilangan kedua : ";cin>>bil2;
	cout<<" |					|"<<endl;
	cout<<" ========================================"<<endl;
	cout<<" | Hasilnya Adalah : "<<kali(bil1,bil2)<<"			|"<<endl;
	cout<<" ========================================"<<endl;
}
else if ( pilihanananan == 'D' || pilihanananan == 'd' ) {

	cout<<" ========================================"<<endl;
	cout<<" |	     Masukan Bilangan		|"<<endl;
	cout<<" ========================================"<<endl;
	cout<<" |					|"<<endl;
	cout<<" | Masukan Bilangan pertama : ";cin>>bil1;
	cout<<" | Masukan Bilangan kedua : ";cin>>bil2;
	cout<<" |					|"<<endl;

	cout<<" ========================================"<<endl;
	cout<<" | Hasilnya Adalah : "<<bagi(bil1,bil2)<<"			|"<<endl;
	cout<<" ========================================"<<endl;
}
	oo:
	cout<<" ketik '0' Untuk Menghitung kembali ";cin>>oo;
	if (oo==0){	
			system("cls");
			goto menu;
	}
	else{
		cout<<"kode salah";
			system("cls");
		goto oo;
	}
	goto menu;

}
