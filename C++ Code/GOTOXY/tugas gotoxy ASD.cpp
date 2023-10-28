#include <iostream>
#include <iomanip>
#include <conio.h>
#include <windows.h>

using namespace std;
void gotoxy(int x, int y){
        COORD c;
        c.X = x;
        c.Y = y;
        SetConsoleCursorPosition(	GetStdHandle(STD_OUTPUT_HANDLE), c);
        }
int main(){
	system("color 3");
	int ukuran;
	float harga,mt,cmb,bmb,smb,bsb;
	string ukr,tgl,var;

        for(int i=1;i<=80;i++){
	gotoxy(12,2);		cout<<"   	       'BOBA TIME'  	  ";
	gotoxy(12,3);		cout<<" jl.ringroad barat, sleman, yogyakarta ";
	gotoxy(12,4);		cout<<"        telp(+62)81345678910		  ";
	gotoxy(12,5);		cout<<"   date   : ";cin>>tgl;
		
		gotoxy(12,6);		cout<<"=======================================";
		gotoxy(12,7);		cout<<"Nomer Nota    : IV1102A"<<i;
		gotoxy(12,8);		cout<<"=======================================";
		gotoxy(12,9);		cout<<"1.Clear Boba";
		gotoxy(12,10);		cout<<"2.Mini Boba";
		gotoxy(12,11);		cout<<"3.Black Boba";
		gotoxy(12,12);		cout<<"pilih ukuran  : ";cin>>ukuran;
		gotoxy(12,13);		cout<<"=======================================";
									if(ukuran==1){
									  ukr = "clear boba";
									}else if(ukuran==2){
										ukr = "mini boba";
									}else if(ukuran==3){
									    ukr = "black boba";
									}else
										ukr = "pilihan anda tidak ada";
	gotoxy(12,14);	cout<<"VARIAN RASA ";
	gotoxy(12,15);	cout<<"1.Boba milk tea(8.5k).";
	gotoxy(12,16);	cout<<"2.Cheesy milky boba(8k).";
	gotoxy(12,17);	cout<<"3.Banana milk boba(9k).";
	gotoxy(12,18);	cout<<"4.Strawberry macchiato(12k).";
	gotoxy(12,19);	cout<<"5.Brown sugar boba(7k).";
	
			gotoxy(45,15);cin>>mt;
			gotoxy(45,16);cin>>cmb;
			gotoxy(45,17);cin>>bmb;
			gotoxy(45,18);cin>>smb;
			gotoxy(45,19);cin>>bsb;
			
			harga=mt+cmb+bmb+smb+bsb;
	gotoxy(12,23);cout<<"UKURAN  :"<<ukr;
	gotoxy(12,24);cout<<"VARIAN  :"<<var;
	gotoxy(12,25);cout<<"HARGA   :"<<harga;
	
	cout<<endl;
	getch();
	system("cls");
}
}