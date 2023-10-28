#include <iostream>
#include <math.h>
using namespace std;

int main(){
	string nama, NIM, IPK;
	float usia;
		
	cout<<"-------------------------------------------------------------"<<endl;
	cout<<" masukan nama kamu = ";cin>>nama;
	cout<<" masukan nim kamu  = ";cin>>NIM;
	cout<<" masukan ipk kamu  = ";cin>>IPK;
	cout<<" tanggal lahir     = ";cin>>usia;
	cout<<"\n";
	
	cout<<"------ data mahasiswa--------";
	cout<<"\n nama mahasiswa ="<<nama;
	cout<<"\n nim mahasiswa  ="<<NIM;
	cout<<"\n ipk mahasiswa  ="<<IPK;
	cout<<"\n tanggal lahir  ="<<usia;
	cout<<"\n\n";


    int a,t;
	float ,L,A,kllg,miring;
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
int main(){
	
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
	return 0;
}