#include <iostream>
using namespace std;
int main ()
	{
	
	double h,t,ideal,tinggi;
	
	cout<<"Mengetahui Berat badan ideal seseorang "<<endl;
	cout<<"masukan tinggi badan : ";
	cin>>tinggi;
	
	h = tinggi-100;
	t = h * 10 / 100;
	ideal = h - t ;
	
	cout<<ideal;
	
}