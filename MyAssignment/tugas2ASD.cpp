#include <iostream>
#include <math.h>
using namespace std;

void segitiga(){
	 ///pokoknya penting :v///
	float a,t,A,L,kllg,miring ;
	cout<<"\t======================================\n";
	cout<<"\t --------------SEGITIGA--------------"<<endl;
	cout<<"\t======================================\n";
	cout<<"\tnilai alas      =  ";cin>>a;
	cout<<"\tnilai tinggi    =  ";cin>>t;
		   ///rumus//
	 L=0.5*a*t;
     A=0.5*a; //setengahnya dari alas
     miring=sqrt(pow(A,2)+pow(t,2)); //sisimiring
     kllg=(miring*2)+a;
	cout<<"\t               ~HASIL~                "<<endl;
	cout<<"\tKELILING             =  "<<kllg<<endl;
	cout<<"\tLUAS SEGITIGA        =  "<<L<<endl;
	cout<<"\t======================================";
}

void persegi(){
	 ///pokoknya penting :v///
	float L,s, kllg ;
	cout<<"\t======================================\n";
	cout<<"\t --------------PERSEGI---------------"<<endl;
	cout<<"\t======================================\n";
	cout<<"\tmasukan luas sisi   =  ";cin>>s;
	kllg = s*s;    ///rumus//
	L= 4*s;
	cout<<"\t               ~HASIL~                "<<endl;
	cout<<"\tKELILING          = "<<kllg<<"cm"<<endl;
	cout<<"\tLUAS              = "<<L<<"cm2"<<endl;
	cout<<"\t======================================";
}

void persegi_panjang(){
	 ///pokoknya penting :v///
	float p,l,L, kllg ;	
	cout<<"\t======================================\n";
	cout<<"\t ----------PERSEGI PANJANG-----------"<<endl;
	cout<<"\t======================================\n";
	cout<<"\tmasukan panjang   =  ";cin>>p;
	cout<<"\tmasukan lebar     =  ";cin>>l;
	L=p*l;
	kllg = (2*p)+(2*l)  ;   ///rumus//
	cout<<"\t               ~HASIL~                "<<endl;
	cout<<"\tKELILING             =  "<<kllg<<"cm"<<endl;
	cout<<"\tLUAS                 =  "<<L<<"cm2"<<endl;
	cout<<"\t======================================";
}

void lingkaran(){
	 ///pokoknya penting :v///
	float K,L,r,d, kllg ;	
	cout<<"\t======================================\n";
	cout<<"\t -------------LINGKARAN--------------"<<endl;
	cout<<"\t======================================\n";
	cout<<"\tmasukan nilai diameter  =  ";cin>>d;
       ///rumus///
	r=0.5*d;
    L=3.14*r*r;
    K=3.14*d;

	cout<<"\t               ~HASIL~                "<<endl;
	cout<<"\tKELILING             =  "<<K<<"cm"<<endl;
	cout<<"\tLUAS LINGKARAN       =  "<<L<<"cm2"<<endl;
	cout<<"\t======================================";
}

void trapesium(){
	 ///pokoknya penting :v///
	float a,b,t,l,tg ;	
	cout<<"\t======================================\n";
	cout<<"\t --------------TRAPESIUM-------------"<<endl;
	cout<<"\t======================================\n";
	cout<<"\tmasukan sisi a   =  ";cin>>a;
	cout<<"\tmasukan sisi b   =  ";cin>>b;
	cout<<"\tmasukan tinggi   =  ";cin>>t;
	    ///rumus//
	l = (0,5 * (a+b) * t);
	tg= ((2*l) / (a+b));
	cout<<"\t               ~HASIL~                "<<endl;
	cout<<"\tLUAS          =  "<<l<<"cm"<<endl;
	cout<<"\TINGGI         =  "<<tg<<"cm"<<endl;
	cout<<"\t======================================";
}

int main(){
	string nama, NIM, IPK;
	float usia;
	
	
	cout<<"-------------------------------------------------------------"<<endl;
	cout<<" masukan nama kamu = ";cin>>nama;
	cout<<" masukan nim kamu  = ";cin>>NIM;
	cout<<" masukan ipk kamu  = ";cin>>IPK;
	cout<<" tanggal lahir     = ";cin>>usia;
	cout<<"\n";
	
	
	cout<<"--hasil data mahasiswa--";
	cout<<"\n nama mahasiswa ="<<nama;
	cout<<"\n nim mahasiswa  ="<<NIM;
	cout<<"\n ipk mahasiswa  ="<<IPK;
	cout<<"\n tanggal lahir  ="<<usia;
	cout<<"\n\n";

				//jangan lupa stringnya [string nama,nim,alamat dsbg ;] di ganti ya ><
	       		//int main nya gausah di tulis lagi yaaaa
	       		//biodata diri taroh sini ya kack"copast aja coding lu"(tulisan stringnya [//] yg ini apus aja ntar ya [ga dibaca compailer juga si])
	       		//yang laen gausah di ganti pokoknya :)
	       		//khansa pasti bisaaa :v
	       		
  	int pilih;			
	cout<<"  menu:\n1.segitiga\n2.persegi\n3.persegi panjang\n4.lingkaran\n5.trapesium"<<endl;
	cout<<"masukan nomor bangun datar yang akan di hitung_";
	cin>>pilih;
    if (pilih == 1){
        segitiga();
    } else if (pilih == 2){
        persegi();
    } else if (pilih == 3){
        persegi_panjang();
    } else if (pilih == 4){
        lingkaran();
    } else if (pilih == 5){
        trapesium();
    } else{
    cout<<"masukkan angka dengan benar";
    main();
    }
         ////PUSINGGGGGGG TAUUUUUUUUUU wkwkwk :V
}