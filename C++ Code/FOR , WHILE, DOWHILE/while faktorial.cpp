#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
int i,j,n,k;
cout<<"Masukkan Bilangan : ";
cin>>n;
cout<<endl;
i=n;
while(i>=1)
{
j=1;
while(j<=i)
{
k=i;
k=k*j;
cout<<k<<" ";
j++;

}
i--;
cout<<endl;
}
}