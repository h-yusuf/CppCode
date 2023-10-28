#include <iostream>
#include <conio.h>

using namespace std;

main(){
	int tgl,ukuran,var;
	float harga;
	for(int i=1;i<=80;i++){
	cout<<"   	   'BOBA TIME'  	  "<<endl;
	cout<<" jl.ringroad barat, sleman, yogyakarta ";
	cout<<"\n        telp(+62)81345678910		  ";
	cout<<"\ndate     : ";cin>>tgl;
	cout<<"pelanggan : "<<i<<endl;
	cout<<"======================================="<<endl;
	cout<<"1.Clear Boba";cout<<"\n2.Mini Boba";cout<<"\n3.Black Boba";
	cout<<"\npilih ukuran ";cin>>ukuran;
	cout<<"======================================="<<endl;
	if(ukuran==1){
		cout<<"clear boba";
	}else if(ukuran==2){
		cout<<"mini boba ";
	}else if(ukuran==3){
		cout<<"black boba";
	}
	cout<<" \n\nVARIAN RASA "<<endl;
	cout<<"1.Boba milk tea.";cout<<"\n2.Cheesy milky boba.";cout<<"\n3.Banana milk boba.";cout<<"\n4.Strawberry macchiato boba.";cout<<"\n5.Brown sugar boba.";
	cout<<"variasi :";cin>>var;
	if(var==1){
		harga=7000;
	}else if(var==2){
		harga=8000;
	}else if(var==3){
		harga=7500;
	}else if(var==4){
		harga=1200;
	}else if(var==5){
		harga=15000;
	}else
	cout<<"tidak ada pilihan :)";
	cout<<"total : "<<harga;
	cout<<endl;
	getch();
}
}