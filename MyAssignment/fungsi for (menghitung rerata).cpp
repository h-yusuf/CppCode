#include <iostream>
#include <conio.h>
using namespace std;

main(){
	
	
	int n;
	float nilai,rata,jml=0;
	
	cout<<"PROGRAM UNTUK MENGHITUNG RERATA"<<endl;
	cout<<"input banyak nilai";cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		cout<<"masukan nilai "<<i<<"=";cin>>nilai;
		
		jml=jml+nilai;
		rata=jml/i;
		
	}
	
	cout<<"\nTotal nilai  "<<jml;
	cout<<"\nRerata nilai "<<rata<<endl;
	if (rata<81){
		cout<<"tidak lulus";
	}else{
	
		cout<<"Lulus";
}
	getch();
}