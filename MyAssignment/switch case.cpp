#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	system ("color c");
      float jari;
      const float phi = 3.142857;
      float alas,tinggi;
      int sisi;
      char pilih,ulang;
     
      do{

       cout<<"\nhubungi *123# untuk mengakses b.yu\n"
             <<"Dial number : ";cin>>pilih;
       cout<<"-----------------------"<<endl;

       switch(pilih){
        case '1' :
                   cout<<"Menghitung luas persegi"<<endl;
                   cout<<"Sisi = ";cin>>sisi;

                   cout<<"Luas persegi = "<<sisi*sisi;
              break;
        case '2' :
                   cout<<"Menghitung luas segitiga"<<endl;
                   cout<<"Alas = ";cin>>alas;
                   cout<<"Tinggi = ";cin>>tinggi;

                   cout<<"Luas segitiga = "<<0.5 * alas * tinggi;
              break;
        case '3' :
                   cout<<"Menghitung luas lingkaran"<<endl;
                   cout<<"Jari-jari = "; cin>>jari;
                   cout<<setprecision(8);
                   cout<<"Luas lingkaran = "<<phi * jari * jari;
              break;
         default :
                   cout<<"Pilihan anda tidak ada di sistem"<<endl;
    }
            cout<<"\nKembali ke menu utama ? (y/n) "; cin>>ulang; //untuk      kembali ke dalam blok do-while

   


      }while(ulang == 'y' || ulang == 'Y'); 
}