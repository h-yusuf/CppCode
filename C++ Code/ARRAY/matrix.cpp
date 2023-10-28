#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int matrik [3][4] ={{5,10,1,11},{4,7,67,-9},{9,0,45,3}};

	for(int i=0;i<3; i++){
	
		for(int j=0;j<4; j++){
		
		cout<<matrik[i][j]<<" ";
	}
	cout<<endl;
}
getch();
}