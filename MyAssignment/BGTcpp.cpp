#include <iostream>
#include <math.h>
using namespace std;

void persegi(){
    float s,L,K;
    cout<<"menghitung luas dan keliling persegi\n\n\n"<<endl;
    cout<<"masukkan nilai sisi:";
    cin>>s;
    L=s*s;
    K=s*4;
    cout<<"Keliling persegi: "<<K<<"cm"<<endl;
    cout<<"Luas persegi: "<<L<<"cm2"<<endl;
}

void persegipanjang(){
    float p,l,L,K;
    cout<<"menghitung luas dan keliling persegi panjang\n\n\n"<<endl;
    cout<<"masukkan nilai panjang:";
    cin>>p;
    cout<<"masukkan nilai lebar:";
    cin>>l;
    L=p*l;
    K=(2*p)+(2*l);
    cout<<"Keliling persegi panjang: "<<K<<"cm"<<endl;
    cout<<"Luas persegi panjang: "<<L<<"cm2"<<endl;
}

void segitiga(){
    float a,A,t,L,K,miring;
    cout<<"menghitung luas dan keliling segitiga\\n\n"<<endl;
    cout<<"masukkan nilai alas:";
    cin>>a;
    cout<<"masukkan nilai tinggi:";
    cin>>t;
    L=0.5*a*t;
    A=0.5*a; //setengahnya dari alas
    miring=sqrt(pow(A,2)+pow(t,2)); //sisimiring
    K=(miring*2)+a;
    cout<<"Keliling segitiga: "<<K<<"cm"<<endl;
    cout<<"Luas segitiga: "<<L<<"cm2"<<endl;
}

void lingkaran(){
    float d,r,L,K,miring;
    cout<<"menghitung luas dan keliling lingkaran\n\n\n"<<endl;
    cout<<"masukkan nilai diameter:";
    cin>>d;
    r=0.5*d;
    L=3.14*r*r;
    K=3.14*d;
    cout<<"Keliling lingkaran: "<<K<<"cm"<<endl;
    cout<<"Luas lingkaran: "<<L<<"cm2"<<endl;
}

int main()
{
    int pilih,bio;
    cout<<"biodata =";cin>>bio;
    cout<<"menu\n1.persegi\n2.persegi panjang\n3.segitiga\n4.lingkaran\n\n";
    cout<<"masukkan nomor bagun datar yang akan dihitung:";
    cin>>pilih;
    if (pilih == 1){
        persegi();
    } else if (pilih == 2){
        persegipanjang();
    } else if (pilih == 3){
        segitiga();
    } else if (pilih == 4){
        lingkaran();
    } else{
        cout<<"masukkan angka dengan benar";
        main();
    }
    return 0;
}