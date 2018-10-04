#include <iostream>
using namespace std;

int main (){
	
	double b,e,n,xi;
	double const 	y = 0.9144,
					k = 0.3048,
					i = 0.0254;
	
	cout<<"/////////////Konversi\\\\\\\\\\\\\\"<<endl;
	cout<<"Masukan Satuan Panjang dalam Meter :";
	cin>>b;
	cout<<"---------------------------------"<<endl;
	
	e = b * y;
	n = b * k;
	xi = b * i;
	

cout<<b<<" meter sama dengan,"<<xi<<" inchi, "<<e<<" yard, "<<n<<" kaki";

}
