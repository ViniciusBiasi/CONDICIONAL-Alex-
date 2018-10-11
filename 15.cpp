#include<iostream>
using namespace std;
int main ()
{
	int  d1, d2, d3, aux, prefixo;
	float Oeste , Centro , Sul , Bueno , Campinas ;
	char Bairro [20]  ;
	float telefone ;
	
	cout << "Digite o nome do Bairro: Oeste, Centro, Sul, Bueno, Campinas: "<<endl;
	cin  >> Oeste , Centro , Sul , Bueno , Campinas ;
	
	cout << "Qual os 4 prefixos (primeiros digitos) do telefone. "<<endl;
	cin  >> telefone ;
	
	d1 = telefone / 1000;
	aux = telefone / 1000;
	d2 = aux / 1000;
	aux = aux % 1000;
	d3 = aux / 1000;
	prefixo = d1 * 100 + d2 * 10 + d3;
	 
	     if ("Bairro",  "Oeste" || "Bairro", "Centro" || "Bairro", "Sul" && prefixo == 3223 || prefixo == 3225 || prefixo == 3212  && prefixo == 3224  &&  prefixo == 3241 || prefixo == 3242 || prefixo == 3243 || prefixo == 3281 ) 
	 {
	     cout << "O telefone está correto."<<endl;	 
	 }
	     if ("Bairro", "Bueno" || "Bairro", "Campinas" && prefixo == 3251 || prefixo == 3285  && prefixo == 3233 || prefixo == 3291)	
	 {
		 cout << "O telefone está correto."<<endl;
	  }
		 else 
	 {
		 cout << "O telefone está errado."<<endl;
	   }    
	
}

