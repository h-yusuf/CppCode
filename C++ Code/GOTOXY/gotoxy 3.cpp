#include <iostream>
#include <iostream.h>
#include <iomanip.h>
#include <conio.h>
void main ()
{
cout << " APOTEK AL AUFI"<<endl;
cout << " Jl. SELARONG KM 23, BANTUL, YOGYAKARTA"<<endl<<endl<<endl;
 gotoxy(1,3); cout<<"============================================================"<<endl;
   gotoxy(1,4); cout<<"| NO |   NAMA BARANG   | JML BELI | HRG SATUAN |   TOTAL   |"<<endl;
   gotoxy(1,5); cout<<"============================================================"<<endl;

   for (int i=1; i <= 15; i++)
   {
     gotoxy(1,5+i); cout << "|";
         gotoxy(6,5+i); cout << "|";
         gotoxy(24,5+i); cout <<"|";
         gotoxy(35,5+i); cout <<"|";
         gotoxy(48,5+i); cout <<"|";
         gotoxy(60,5+i); cout <<"|";
   }
   int i;
   gotoxy(1,18+i); cout<<"============================================================";
   gotoxy(1,19+i); cout<<"|                                 TOTAL BAYAR  |           |";
   gotoxy(1,20+i); cout<<"============================================================";
   gotoxy(1,21+i); cout<<"|                                       BAYAR  |           |";
   gotoxy(1,22+i); cout<<"============================================================";
   gotoxy(1,23+i); cout<<"|                                     KEMBALI  |           |";
   gotoxy(1,24+i); cout<<"============================================================";
   gotoxy(1,26+i); cout<<"Semoga Lekas Sembuh";
   gotoxy(1,27+i); cout<<"Terimakasih Atas Kunjungannya";

   int no=1, jml, tot=0;
   float hgsat, byr, susuk;
   char nmbrg[30],jw;

   do
   {
     gotoxy(3,5+no); cout<<no<<".";
      gotoxy(8,5+no); cin>>nmbrg;
      gotoxy(27,5+no); cin>>jml;
      gotoxy(27,5+no); cout<<setw(7)<<jml;
      gotoxy(37,5+no); cin>>hgsat;
      gotoxy(37,5+no); cout<<setw(9)<<hgsat;
      tot=tot+(jml*hgsat);
      gotoxy(50,5+no); cout<<setw(8)<<(jml*hgsat);
      gotoxy(50,20); cout<<setw(8)<<tot;

      gotoxy(45,1); cout<<"Beli lagi?(y/t)"; cin>>jw;
      gotoxy(45,1); clreol();
      no++;
   }while (jw=='y');

    gotoxy(50,22); cin>>byr;
    gotoxy(50,22); cout<<byr;
    gotoxy(50,22); cout<<setw(8)<<byr;

    susuk=byr-tot;
    gotoxy(50,24); cout<<setw(8)<<susuk;


   getch();
}