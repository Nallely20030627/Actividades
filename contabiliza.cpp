#include<iostream>
using namespace std;

int main()
{
	int HNJC_i=0,HNJC_l;
	float HNJC_x,HNJC_s=0;
	cout<<"ingrese el limite l="; cin>>HNJC_l;
	do{
		
	cout<<"ingrese el numero x="; cin>>HNJC_x;
	HNJC_i=HNJC_i+1;
	HNJC_s=HNJC_s+HNJC_x;



	}while(HNJC_i<HNJC_l);
	cout<<"Se ingresaron "<<HNJC_l<<" numeros "<< "que sumaron "<<HNJC_s<<endl;
	return 0;



}
