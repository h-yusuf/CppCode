
#include <iostream>
using namespace std;

int main()
{
     float pilih, menuutama, s, vkubus, r, llingkaran, t, vtabung;
     float phi = 3.14;
     char status;

     menu :
     cout << "\n\n\t\t - Rumus Matematika Bangun Datar dan Bangun Ruang - \n";
     cout << "\t===================================================================== \n\n";

     cout << "Menu : \n";
     cout << "1. Volume Kubus \n";
     cout << "2. Luas Lingkaran \n";
     cout << "3. Volume Tabung \n";
     cout << "Rumus yang anda pilih adalah menu nomor : ";
     cin >> pilih;
     system("cls");

     if (pilih==1)
     {
           kubus :
           cout << "\n\n\t\t - Volume Kubus - \n";
           cout << "\t================================== \n\n";
    
           cout << "Masukan panjang sisi kubus : ";
           cin >> s;
    
           cout << "\n";
           vkubus = s*s*s;
           cout << "Rumus : V = S * S * S \n";
           cout << "V = " << s << " * " << s << " * " << s << "\n";
           cout << "V = " << vkubus;
           cout << "\n\n";

           cout << "Apakah anda ingin memilih kembali ? (y=ya /t=tidak /m=menu utama) : ";
           cin >> status;

           if(status =='y' || status =='Y')
                     goto kubus;
           else if (status == 'm' || status == 'M')
                     goto menu;
           else
                     goto end ;

     }
     else if (pilih==2)
     {
           lingkaran :
           cout << "\n\n\t\t - Luas Lingkaran - \n";
           cout << "\t==================================== \n\n";
    
           cout << "Masukan jari-jari lingkaran : ";
           cin >> r;
    
           cout << "\n";
           llingkaran = phi*r*r;
           cout << "Rumus : L = phi * r * r \n";
           cout << "L = 3.14 * " << r << " * " << r << "\n";
           cout << "L = " << llingkaran;
           cout << "\n\n";

           cout << "Apakah anda ingin memilih kembali ? (y=ya /t=tidak /m=menu utama) : ";
           cin >> status;

           if(status =='y' || status =='Y')
                     goto lingkaran;
           else if (status == 'm' || status == 'M')
                     goto menu;
           else
                     goto end ;
     }
     else if (pilih==3)
     {
           tabung :
           cout << "\n\n\t\t - Volume Tabung - \n";
           cout << "\t==================================== \n\n";
    
           cout << "Masukan jari-jari alas tabung : ";
           cin >> r;

           cout << "Masukan tinggi tabung : ";
           cin >> t;
    
           cout << "\n";
           vtabung = phi*r*r*t;
           cout << "Rumus : V = phi * r * r *t \n";
           cout << "V = 3.14 * " << r << " * " << r << " * " << t << "\n";
           cout << "V = " << vtabung;
           cout << "\n\n";

           cout << "Apakah anda ingin memilih kembali ? (y=ya /t=tidak /m=menu utama) : ";
           cin >> status;

           if(status =='y' || status =='Y')
                     goto tabung;
           else if (status == 'm' || status == 'M')
                     goto menu;
           else
                     goto end ;
     }
     end :
     cout << "\n\n\t\tTerima Kasih Telah Menggunakan Program Rumus ini\n";
     cout << "\t\t\t by : Fahmi Maulani Fauziah \n";
     cout << "\t\t\t Politekni TEDC Bandung\n";
     cout << "\n\t========================= Sampai Jumpa =========================\n\n\n" ;
                return 0;
}

