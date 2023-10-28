#include <iostream>

using namespace std;

int main (){
	system ("color 2");
	int bonus, gjp, tjg, potongan_pjk, gbs;
	cout<<"\t\t\t\t\t|===========================";   cout<<"|"<<endl;
	cout<<"\t\t\t\t\t|=======GAJI KARYAWAN=======";   cout<<"|"<<endl;
	
	cout<<"\t\t\t\t\t|===========================|\n ";
	cout<<"\t\t\t\t\t|gaji pokok      = ";cin>>gjp; 
	tjg = 200000;
	bonus = 0.1 * gjp;
	potongan_pjk = 0.05 * gjp;
	gbs = (gjp+tjg+bonus)-potongan_pjk;
	
	cout<<"\t\t\t\t\t|tunjangan istri = "<<tjg<<endl;
	cout<<"\t\t\t\t\t|bonus           = "<<bonus<<endl;
	cout<<"\t\t\t\t\t|potongan pajak  = "<<potongan_pjk<<endl;
	cout<<"\t\t\t\t\t|gaji bersih     = "<<gbs<<endl;
    cout<<"\t\t\t\t\t|============================";
	system ("color c");
	return 0;
	
}
