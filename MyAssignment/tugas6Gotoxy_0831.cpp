#include <iostream>
#include <iomanip>
#include <conio.h>
#include <windows.h>

using namespace std;
void gotoxy(int x, int y){
        COORD c;
        c.X = x;
        c.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
        }
 main(){
	system("color 3");
	  
		gotoxy(11,2);	cout<<"   	          'BOBA TIME'  	  ";
		gotoxy(11,3);	cout<<"    jl.ringroad barat, sleman, yogyakarta ";
		gotoxy(11,4);	cout<<"          telp(+62)81345678910		  ";
		gotoxy(11,5);	cout<<"              date   : 22-nov-2022";	
		gotoxy(11,6);	cout<<"----------------------------------------------------";
		gotoxy(11,7);	cout<<"Nomer Nota    : IV1102A";	
		gotoxy(11,8);	cout<<"----------------------------------------------------";
		gotoxy(11,9);	cout<<"1.Clear Boba";
		gotoxy(11,10);	cout<<"2.Mini Boba";
		gotoxy(11,11);	cout<<"3.Black Boba";
		gotoxy(11,12);	cout<<"pilih ukuran  : ";
		gotoxy(11,13);	cout<<"----------------------------------------------------";							
		gotoxy(11,14);	cout<<"QTY    VARIAN RASA ";
		gotoxy(12,15);	cout<<"  1.Boba milk tea(8.5k).";
		gotoxy(12,16);	cout<<"  2.Cheesy milky boba(8k).";
		gotoxy(12,17);	cout<<"  3.Banana milk boba(9k).";
		gotoxy(12,18);	cout<<"  4.Strawberry macchiato(12k).";
		gotoxy(12,19);	cout<<"  5.Brown sugar boba(7k).";
									gotoxy(55,14);cout<<"total harga";
			gotoxy(12,21);cout<<"UKURAN  	   :";
		gotoxy(12,22);cout<<"TOTAL HARGA   :";
		gotoxy(12,23);cout<<"TOTAL BAYAR   :";
		gotoxy(12,24);cout<<"Kembalian     :";
					int ukuran;
	float byr,harga,mt,cmb,bmb,smb,bsb,qty1,qty2,qty3,qty4,qty5,total1,total2,total3,total4,total5,angsul;
	string ukr,tgl,var;
					for(int i=1;i<=80;i++){
														gotoxy(35,7);cout<<i;
														gotoxy(35,12);cin>>ukuran;
									if(ukuran==1){
									  ukr = "clear boba";
									}else if(ukuran==2){
										ukr = "mini boba";
									}else if(ukuran==3){
									    ukr = "black boba";
									}else
										ukr = "pilihan anda tidak ada";
											
			gotoxy(11,15);cin>>qty1;
				gotoxy(45,15);cin>>mt;
					total1=qty1*mt;
					    gotoxy(55,15);cout<<total1;
					
			gotoxy(11,16);cin>>qty2;
				gotoxy(45,16);cin>>cmb;
					total2=qty2*cmb;
						gotoxy(55,16);cout<<total2;
					
			gotoxy(11,17);cin>>qty3;
				gotoxy(45,17);cin>>bmb;
					total3=qty3*bmb;
						gotoxy(55,17);cout<<total3;
					
			gotoxy(11,18);cin>>qty4;
				gotoxy(45,18);cin>>smb;
					total4=qty4*smb;
						gotoxy(55,18);cout<<total4;
					
			gotoxy(11,19);cin>>qty5;
				gotoxy(45,19);cin>>bsb;
					total5=qty5*bsb;
						gotoxy(55,19);cout<<total5;
						 		    
			harga=total1+total2+total3+total4+total5;
	gotoxy(30,21);cout<<ukr;
	gotoxy(30,22);cout<<harga;
	gotoxy(30,23);cin>>byr;
				angsul=byr-harga;
	gotoxy(30,24);cout<<angsul;
	cout<<endl;
getch();
system("cls");

}
}	