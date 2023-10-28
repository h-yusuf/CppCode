#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	string nama, NIM, IPK;																				///
	float usia;																							///																										///																										///
			cout<<"-------------------------------------------------------------"<<endl; 				///
				cout<<" \tmasukan nama kamu = ";cin>>nama;												///
					cout<<" \tmasukan nim kamu  = ";cin>>NIM;											///
						cout<<" \t\masukan ipk kamu  = ";cin>>IPK;										///
							cout<<" \ttanggal lahir     = ";cin>>usia;   								//////biodata gantisendiri yaa/// 
								cout<<"\n";																///
							cout<<"\t\t--hasil data mahasiswa--";										///
						cout<<"\n\tnama mahasiswa ="<<nama;												///	
				cout<<"\n\tipk mahasiswa  ="<<IPK;														///
			cout<<"\n\ttanggal lahir  ="<<usia<<endl;													///
		cout<<"\n";
	
	int  a, b, t ;
	float l, tg ;
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
	cout<<"\tluas             =  "<<l<<endl;
	cout<<"\ttinggi           =  "<<tg<<endl;
	cout<<"\t======================================\n\n";
	
	int s;
	float L,kllg ;
	cout<<"\t======================================\n";
	cout<<"\t --------------PERSEGI---------------"<<endl;
	cout<<"\t======================================\n";
	cout<<"\tmasukan luas sisi   =  ";cin>>s;
			kllg = s*s;    ///rumus//
			L= 4*s;
	cout<<"\t               ~HASIL~                "<<endl;
	cout<<"\tKELILING          = "<<kllg<<"cm"<<endl;
	cout<<"\tLUAS              = "<<L<<"cm2"<<endl;
	cout<<"\t======================================\n\n";
	
	int p,lb;
	float LU, KLLG ;	
	cout<<"\t======================================\n";
	cout<<"\t ----------PERSEGI PANJANG-----------"<<endl;
	cout<<"\t======================================\n";
	cout<<"\tmasukan panjang   =  ";cin>>p;
	cout<<"\tmasukan lebar     =  ";cin>>lb;
	LU=p*l;
			KLLG = (2*p)+(2*l)  ;   ///rumus//
	cout<<"\t               ~HASIL~                "<<endl;
	cout<<"\tKELILING             =  "<<kllg<<"cm"<<endl;
	cout<<"\tLUAS                 =  "<<L<<"cm2"<<endl;
	cout<<"\t======================================\n\n";
	
	int D,r;
	float K,LL ;	
		cout<<"\t======================================\n";
		cout<<"\t -------------LINGKARAN--------------"<<endl;
		cout<<"\t======================================\n";
			cout<<"\tmasukan nilai diameter  =  ";cin>>D;
				r=0.5*D;
 				   LL=3.14*r*r; ///rumus///
 			   K=3.14*D;

	cout<<"\t               ~HASIL~                "<<endl;
	cout<<"\tKELILING             =  "<<K<<"cm"<<endl;
	cout<<"\tLUAS LINGKARAN       =  "<<LL<<"cm2"<<endl;
	cout<<"\t======================================\n\n";
	
	int na,nt,A,miring;
	float klg,LSG ;
	cout<<"\t======================================\n";
	cout<<"\t --------------SEGITIGA--------------"<<endl;
	cout<<"\t======================================\n";
	cout<<"\tnilai alas      =  ";cin>>na;
	cout<<"\tnilai tinggi    =  ";cin>>nt;
	 L=0.5*a*t;
     		A=0.5*a; 
    	 miring=sqrt(pow(A,2)+pow(t,2)); ///rumus///
     klg=(miring*2)+a;
	cout<<"\t               ~HASIL~                "<<endl;
	cout<<"\tKELILING             =  "<<klg<<endl;
	cout<<"\tLUAS SEGITIGA        =  "<<LSG<<endl;
	cout<<"\t======================================";
	system ("color c");
	
	
	
}