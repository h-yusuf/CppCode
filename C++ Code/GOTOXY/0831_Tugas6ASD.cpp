#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <iomanip>

using namespace std;

void gotoxy(int x, int y){
COORD coord;
coord.X=x;
coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);}

int main()
{
char lagi;
string jenis[20],nama;
int a,menu,harga[10],porsi[10],bayar,kode;
float totalharga,total,uang,kembalian;

atas:
system("cls");
        cout<<"             				BOBA TIME "<<endl;
        cout<<"              			telp(+62)81345678910 "<<endl;
        cout<<"               jl.ringroad barat, sleman, yogyakarta"<<endl;
        cout<<"=************************************************************************="<<endl;
          cout<<">> VARIAN :                       						                \n";
          cout<<"|| 1. Boba milk tea     Rp.8.500,- || 4. Strawberry macchiato Rp.14000,-|| \n";
          cout<<"|| 2. Cheesy milky boba Rp.12000,- || 5. Brown sugar boba     Rp.13000,-|| \n";
          cout<<"|| 3. Banana milk boba  Rp.9.000,- || 				                    \n";

cout<<"\nNama Pemesan         : ";cin>>nama;
cout<<"jJumlah Pesanan      : ";cin>>menu;
    for(a=1;a<=menu;++a)
    {
                cout<<"\n=******************="<<endl;
                cout<<"      Pesanan Ke "<<a<<endl;
                cout<<"=******************=\n"<<endl;
                cout<<"Varian Boba	: ";cin>>jenis[a];
                cout<<"Jumlah Pesan : ";cin>>porsi[a];
                cout<<"Harga Satuan	: ";cin>>harga[a];

                }

            system("cls");
            cout<<"                             BOBA TIME "<<endl;
        	cout<<"                         telp(+62)81345678910 "<<endl;
      	    cout<<"                   jl.ringroad barat, sleman, yogyakarta"<<endl;
            cout<<"=*********************************************************************="<<endl;
            cout<<"Nama Pemesan  : "<<nama<<endl;
            cout<<"======================================================================="<<endl;
            cout<<"No.       Nama          Harga        Jumlah      Subtotal             "<<endl;
            cout<<"          VARIAN                     Pesan                            "<<endl;
            cout<<"======================================================================="<<endl;
                
            totalharga=0;
            for(a=1;a<=menu;++a)
                {
                gotoxy(1,a+10);  cout<<a;
                gotoxy(5,a+10);  cout<<jenis[a];
                gotoxy(25,a+10); cout<<harga[a];
                gotoxy(39,a+10); cout<<porsi[a];
                total=porsi[a]*harga[a];
                gotoxy(51,a+10); cout<<total;
                cout<<endl;
                totalharga=totalharga+total;
                }
            cout<<"\n====================================================================\n"<<endl;
            cout<<"                                Total Bayar     :Rp. "<<totalharga<<endl;
            cout<<"                                Uang Bayar      :Rp. ";cin>>uang;
            kembalian=uang-totalharga;
            cout<<"                                Uang Kembali    :Rp. "<<kembalian<<endl;
            cout<<"_______________________________________________________________________ "<<endl;
            cout<<"======================================================================= "<<endl;
            cout<<"                   Terimakasih atas kunjungan anda ^^               "<<endl;
            cout<<"======================================================================= "<<endl;


                cout<<"Pilih Pesanan Lain [Ya]/[Tidak]? jika iya tekan y/Y: ";cin>>lagi;
                if(lagi=='Y'||lagi=='y')
                goto atas;
                else
                system("cls");
                }
                
                														//  22.02.0831