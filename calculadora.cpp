#include<iostream>
using namespace std;

int main()
{
	float HNJC_x,HNJC_y,HNJC_s,HNJC_m,HNJC_d,HNJC_r;
	//Ingreso de datos
	cout<<"Ingrese en valor de x=:";
	cin>>HNJC_x;
	cout<<"Ingrese en valor de y=:";
	//Operaciones 
	cin>>HNJC_y;
	HNJC_s=HNJC_x+HNJC_y;
	HNJC_m=HNJC_x*HNJC_y;
	HNJC_d=HNJC_x/HNJC_y;
	HNJC_r=HNJC_x-HNJC_y;
	//Muestra los resutaldos.
	cout<<"Las suma de "<<HNJC_x<<" + "<<HNJC_y<<" = "<<HNJC_s<<endl;
	cout<<"Las multiplicacion de "<<HNJC_x<<" * "<<HNJC_y<<" = "<<HNJC_m<<endl;
	cout<<"Las division de "<<HNJC_x<<" / "<<HNJC_y<<" = "<<HNJC_d<<endl;
	cout<<"Las resta de "<<HNJC_x<<" - "<<HNJC_y<<" = "<<HNJC_r<<endl;
	return 0 ;

}
