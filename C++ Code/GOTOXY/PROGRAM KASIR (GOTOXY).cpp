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
char nama[10],lagi;
string jenis[10];
int a,menu,harga[10],porsi[10],bayar,kode;
float totalharga,total,uang,kembalian;

atas:
system("cls");
        cout<<"              DAFTAR MENU HARGA MAKANAN DAN MINUMAN"<<endl;
        cout<<"                      Kantin SHERLOCKIAN"<<endl;
        cout<<"                Jln. Ngembal Rejo No. 2 Bae Kudus"<<endl;
        cout<<"=*********************************************************************="<<endl;
            cout<<">> MAKANAN :                       >> MINUMAN :                    ||\n";
          cout<<"|| 1. Nasi Goreng       Rp. 9000,- || 4. Es Teh          Rp.2000,- || \n";
          cout<<"|| 2. Bakso             Rp.10000,- || 5. Jus Jeruk       Rp.3000,- || \n";
          cout<<"|| 3. Mie Ayam          Rp. 8000,- || 6. Cappucino       Rp.4000,- || \n";

cout<<"\nNama Pemesanan          : ";cin>>nama;
cout<<"\nBanyak Pesanan           : ";cin>>menu;
    for(a=1;a<=menu;++a)
    {
                cout<<"\n=******************="<<endl;
                cout<<"Pesanan Ke "<<a<<endl;
                cout<<"=******************=\n"<<endl;
                cout<<"Masukkan Nomor Makanan/Minuman : ";cin>>kode;
                cout<<"Jumlah Pesan                   : ";cin>>porsi[a];

                if (kode==1){
                        cout<<"Nasi goreng\n";
                    jenis[a]="Nasi goreng";
                    harga[a]=90000;}

                else if (kode==2){
                        jenis[a]="Bakso";
                    harga[a]=10000;}

                else if (kode==3){
                        jenis[a]="Mie Ayam";
                    harga[a]=8000;}

                else if (kode==4){
                    jenis[a]="Es Teh";
                    harga[a]=2000;}

                else if (kode==5){
                        jenis[a]="Jus Jeruk";
                    harga[a]=3000;}

                else if (kode==6){
                        jenis[a]="Cappucino";
                    harga[a]=4000;}

                    else
                    {cout<<"Salah!!,Input Kode Lagi!!"<<endl;
                     goto atas;}

                }

            system("cls");
            cout<<"                     Bukti Pemesanan Makanan                         "<<endl;
            cout<<"                        Kantin SHERLOCKIAN                          "<<endl;
            cout<<"                Jln. Ngembal Rejo No. 2 Bae Kudus                  "<<endl;
            cout<<"=*********************************************************************="<<endl;
            cout<<"Nama Pemesan  : "<<nama<<endl;
            cout<<"======================================================================="<<endl;
            cout<<"No.       Nama          Harga        Jumlah      Subtotal             "<<endl;
            cout<<"          Makanan       Makanan      Pesan                            "<<endl;
            cout<<"======================================================================="<<endl;
                 //12345678901234567890123456789012345678901234567890123456789012345678901234567890
                 //            1         2         3         4         5         6         7         8
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
            cout<<"Terimakasih atas kunjungan anda dikantin sederhana kami^^               "<<endl;
            cout<<"======================================================================= "<<endl;


                cout<<"Input data lagi [Ya]/[Tidak]? jika iya tekan y/Y:";cin>>lagi;
                if(lagi=='Y'||lagi=='y')
                goto atas;
                else
                system("cls");
                }