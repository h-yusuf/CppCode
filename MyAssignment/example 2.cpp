#include <iostream>

using namespace std;

int main(){
	
	int  a, b, t ;
	float l, tg ;
	
	system ("color b");
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
	cout<<"\t======================================";
	system ("color c");
	return 0;
	
}