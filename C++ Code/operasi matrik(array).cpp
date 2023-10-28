#include <iostream>
#include <conio.h>

using namespace std;
//operasi matrik
int main(){
	typedef int matrix[3][2];
	
	matrix A,B,C;
	
	
	for(int b=0;b<3;b++){
		
		for(int k=0;k<2;k++){
			
			cout<<"A["<<b<<"]["<<k<<"] = ";
			cin>>A[b][k];
		}
	}
	cout<<endl<<endl;
	//int matrik A
		for(int b=0;b<3;b++){
		
		for(int k=0;k<2;k++){
			
			cout<<"A["<<b<<"]["<<k<<"] = ";
			cin>>A[b][k];
	}
}
	//int matrix B
		for(int b=0;b<3;b++){
		
		for(int k=0;k<2;k++){
			
			cout<<"B["<<b<<"]["<<k<<"] = ";
			cin>>B[b][k];
	}
}
	//output matrik A
	cout<<endl<<endl<<"Matrix A \n";
		for(int b=0;b<3;b++){
		
			for(int k=0;k<2;k++){	
			cout<<" "<<A[b][k];
			
		}
}
	//output matrik B
	cout<<endl<<endl<<"Matrix B \n";
		for(int b=0;b<3;b++){
		
			for(int k=0;k<2;k++){	
			cout<<" "<<b<<B[b][k];
			
		}
}
	//penjumlahan matrix C=A+B
	cout<<endl<<endl<<"Matrix B \n";
		for(int b=0;b<3;b++){
		
			for(int k=0;k<2;k++){	
		C[b][k]=A[b][k]+B[b][k];
			
		}
		cout<<endl;
	}
	
		//Output Matrik C
	cout<<endl<<endl<<"Matrix C \n";
		for(int b=0;b<3;b++){
		
			for(int k=0;k<2;k++){	
			cout<<" "<<C[b][k];
			
		}
		cout<<endl;
}	//pengurangan matrix C=A+B
	cout<<endl<<endl<<"Matrix B \n";
		for(int b=0;b<3;b++){
		
			for(int k=0;k<2;k++){	
		C[b][k]=A[b][k]-B[b][k];
			
		}
		cout<<endl;
	}
	
		//Output Matrik C
	cout<<endl<<endl<<"Matrix C \n";
		for(int b=0;b<3;b++){
		
			for(int k=0;k<2;k++){	
			cout<<" "<<C[b][k];
			
		}
		cout<<endl;
}

getch();

}