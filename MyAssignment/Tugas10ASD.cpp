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
int mood(int a, int b ){
	return (a % b );
}
void mb(){
	cout<<" ========================================"<<endl;
	cout<<" |	     Masukan Bilangan		|"<<endl;
	cout<<" ========================================"<<endl;
	cout<<" |					|"<<endl;
}
void tb(){
	cout<<" | Masukan Bilangan pertama : ";
}
void mk(){
	cout<<" | Masukan Bilangan kedua : ";
}

int main (){
int bil1, bil2,oo;
char pilih;

menu:
cout<<" ========================================"<<endl;
cout<<" |	Program Kalkulator Sederhana	|"<<endl;
cout<<" ========================================"<<endl;
cout<<endl;
cout<<" ========================================"<<endl;
cout<<" |	     Masukan pilih		|"<<endl;
cout<<" ========================================"<<endl;
cout<<" |					|"<<endl;
cout<<" |	(A) Tambah	(B) Kurang	|"<<endl;
cout<<" |	(C) Kali	(D) Bagi	|"<<endl;
cout<<" |					|"<<endl;
cout<<" ========================================"<<endl;
cout<<" Masukan pilih		: ";cin>>pilih;
cout<<endl;

if ( pilih == 'A' || pilih == 'a' ) {

	mb();
	tb();cin>>bil1;
	mk();cin>>bil2;
	cout<<" |					|"<<endl;
	cout<<" ========================================"<<endl;
	cout<<" | Hasilnya Adalah : "<<tambah(bil1,bil2)<<"			|"<<endl;
	cout<<" ========================================"<<endl;

}
else if ( pilih == 'B' || pilih == 'b' ) {

	mb();
	tb();cin>>bil1;
	mk();cin>>bil2;
	cout<<" |					|"<<endl;
	cout<<" ========================================"<<endl;
	cout<<" | Hasilnya Adalah : "<<kurang(bil1,bil2)<<"			|"<<endl;
	cout<<" ========================================"<<endl;
}
else if ( pilih == 'c' || pilih == 'C' ) {

	mb();
	tb();cin>>bil1;
	mk();cin>>bil2;
	cout<<" |					|"<<endl;
	cout<<" ========================================"<<endl;
	cout<<" | Hasilnya Adalah : "<<kali(bil1,bil2)<<"			|"<<endl;
	cout<<" ========================================"<<endl;
}
else if ( pilih == 'D' || pilih == 'd' ) {

	mb();
	tb();cin>>bil1;
	mk();cin>>bil2;
	cout<<" |					|"<<endl;
	cout<<" ========================================"<<endl;
	cout<<" | Hasilnya Adalah : "<<bagi(bil1,bil2)<<"			|"<<endl;
	cout<<" | Sisa hasil bagi : "<<mood(bil1,bil2)<<"           |"<<endl;
	cout<<" ========================================"<<endl;
}
	oo:
	cout<<" ketik '0' Untuk Menghitung kembali ";cin>>oo;
	if (oo == 0){	
			system("cls");
			goto menu;
	}
	else if( oo != 0){
		cout<<"kode salah";
		goto oo;
	}
	goto menu;
	
return 0;
}
