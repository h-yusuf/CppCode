array 1 dimensi char

array 1 dimensi int

contoh
#include <iostream>
#include <conio.h>
using namespace std;

 main (){ 
int y [] = {1, 2, 7, 4, 5};
  int n, r=0;
  for ( n=0 ; n<5 ; n++ )
  {
    r += y[n];
  }
  cout<<" "<<r;
  getch(); }

  contoh 2
#include <iostream>
#include <conio.h>
using namespace std;
 main ()
{ char hari[3][10]={"senin\n","selasa","rabu"};
  int n, r=0;
  for ( n=0 ; n<5 ; n++ )
  {
    cout<<endl<<hari[n];
  }
  getch(); }

  contoh input dan output array
#include <iostream>
#include <conio.h>
using namespace std;
main(){
int A[5]; deklarasi array
input element array
for (int i=0;i<5;i++)
  { cout<<"A["<<i<<"] = ";
    cin>>A[i];  }
menampilkan isi dari elemen array
for(int c=0;c<5;c++)
  { cout<<"Nilai pada elemen ke "<<c+1
        <<" adalah = "<<A[c]<<endl;  }
getch();}

mengedit array
#include <iostream>
#include <conio.h>
using namespace std;
main ()
{ int A [5]={20,9,1986,200,13};dgn inisialisasi
  int n; 
  system("cls");
  cout<<"Data yang lama\n";
  for (n=0;n<5;n++)
  { cout<<" "<<A[n];}
  cout<<"\nData yang baru : \n";
  A[0]=4;
  A[1]=2;
  A[2]=1;
  A[3]=3;
  A[4]=5;
  for (n=0;n<5;n++)
  { cout<<" "<<A[n]; }
  getch();}

menghapus array
#include <iostream>
#include <conio.h>
using namespace std;
main ()
{ int A [5]={20,9,1986,200,13};
  int n,hapus;
  system("cls");
  cout<<"Data yang lama\n";
  for (n=0;n<5;n++)
    { cout<<" "<<A[n];}
  cout<<" data yang ingin dihapus : ";
  cin>>hapus;
  cout<<"\nData yang baru : \n";
  for (n=hapus-1;n<5-1;n++)
    { A[n]=A[n+1];}
  for (n=0;n<4;n++)
    { cout<<" "<<A[n]; }
  getch();}

pencarian data
for (int c=0;c<10;c++)
 {
   if (A[c]==bil)
     { cout<<"Nilai yang anda cari terdapat pada indek     ke- "<<c;
      break;
     }
 } getch(); }

#include <iostream>
#include <conio.h>
using namespace std;
main ()
{ int A [5]={20,9,1986,200,13};
  cout<<"Data yang lama\n";
  for (int n=0;n<5;n++)
  {cout<<" "<<A[n];}
  cout<<"\nData yang baru : \n";
  A[0]=4;  A[1]=2;  A[2]=1;  A[3]=3; A[4]=5;
  for (int n=0;n<5;n++)
  {cout<<" "<<A[n]; }  getch();}

contoh
#include <iostream>
#include <conio.h>
using namespace std;
main ()
{ int nilai[5],x; tanpa inisialisasi
  cout<<"Masukkan nilai :\n\n";
  for(x=0;x<5;x++)
  { cout<<"Nilai Angka    : ";
    cin>>nilai[x];}
  cout<<"\n\nOutput nilai : \n";
  for(x=0;x<5;x++){ 
  cout<<"\nNilai Angka  : "<<nilai[x];}
  getch(); }

