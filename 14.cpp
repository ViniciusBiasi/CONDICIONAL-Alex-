#include <iostream>
#include <math.h>
using namespace std;
int main ()

{
	int a, b, c; // ver se est� certo 
	float aritmetica, ponderada, harmonica, geometrica, quadratica;
	
	
	     cout << "Digite uma nota: "<<endl;
	     cin  >> a;
	     cout << "Digite uma segunda nota:"<<endl;
	     cin  >> b;
	     cout << "Digite uma terceira nota:"<<endl;
	     cin  >> c;
	    
	     
	     cout << "Escolha um tipo de Media para aplicar as tr�s notas: Aritm�tica, Ponderada, Harm�nica, Geometrica e Quadr�tica."<<endl;
	     cin  >> aritmetica, ponderada, harmonica, geometrica, quadratica;
	     
	     if ("Aritm�tica"){
	     	
	     	aritmetica = (a+b+c)/3.0;
	   }
	   
	   if ("Ponderada"){
	   	
	   	ponderada = ((a*3)+(b*3)+(c*4))/10;
	   		   	
	   }
	   
	   if ("Harm�nica"){
	   	
	   	harmonica = 3/((1/a)+(1/b)+(1/c));
	   	
	   }
	   
	   if ("Geom�trica"){
	   	
	   	geometrica = ((a+b+c),1/3.0);
	   } 
	   
	   if ("Quadr�tica"){
	   	
	   	quadratica = ((a,2)+(b,2)+(c,2)) /3,1 /2.0;
	   }
	   cout << "O valor da m�dia escolhida �: "<<  aritmetica << ponderada << harmonica << geometrica << quadratica <<endl;
   
}
