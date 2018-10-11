#include <iostream>
#include <math.h>
using namespace std;
int main ()

{
	int a, b, c; // ver se está certo 
	float aritmetica, ponderada, harmonica, geometrica, quadratica;
	
	
	     cout << "Digite uma nota: "<<endl;
	     cin  >> a;
	     cout << "Digite uma segunda nota:"<<endl;
	     cin  >> b;
	     cout << "Digite uma terceira nota:"<<endl;
	     cin  >> c;
	    
	     
	     cout << "Escolha um tipo de Media para aplicar as três notas: Aritmética, Ponderada, Harmônica, Geometrica e Quadrática."<<endl;
	     cin  >> aritmetica, ponderada, harmonica, geometrica, quadratica;
	     
	     if ("Aritmética"){
	     	
	     	aritmetica = (a+b+c)/3.0;
	   }
	   
	   if ("Ponderada"){
	   	
	   	ponderada = ((a*3)+(b*3)+(c*4))/10;
	   		   	
	   }
	   
	   if ("Harmônica"){
	   	
	   	harmonica = 3/((1/a)+(1/b)+(1/c));
	   	
	   }
	   
	   if ("Geométrica"){
	   	
	   	geometrica = ((a+b+c),1/3.0);
	   } 
	   
	   if ("Quadrática"){
	   	
	   	quadratica = ((a,2)+(b,2)+(c,2)) /3,1 /2.0;
	   }
	   cout << "O valor da média escolhida é: "<<  aritmetica << ponderada << harmonica << geometrica << quadratica <<endl;
   
}
