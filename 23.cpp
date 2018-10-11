#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	     string nome;
	     float altura;
	     float mult;
	     int peso, imc;
	
	
	      cout << "Qual o nome do paciente:"<<endl;
	      cin  >> nome;
	
	      cout << "Digite o peso do paciente: "<<endl;
	      cin  >> peso;
	
	      cout << "Digite a altura do paciente: "<<endl;
	      cin  >>  altura;
	
	      mult = altura*altura;
	      imc  = peso/mult;
	      
	     if (imc<20)
	    
		   cout <<"Abaixo do peso"<<endl;
				  
	     if (imc>20) 
	     if (imc<25)
	 
			cout <<"Normal"<<endl;  
								  
		
	    if (imc>26)  
	    if (imc<30)
	  
		  cout <<"O excesso de peso"<<endl;
								   
								   
	   if (imc>31) 
	   if (imc<35)
	  						   
		   cout <<"Obesidade"<<endl;
							      
							      
      if (imc>36)
    					               
	        cout <<"Obesidade Morbida"<<endl;
				
		return 0;		
}
