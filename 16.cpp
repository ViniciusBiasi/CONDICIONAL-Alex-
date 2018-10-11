#include <iostream>
using namespace std;
int main ()

{
	         string nome ;
	         int tempo;
	         float valor;
	         
	    cout << "Qual o nome do usuario: "<<endl;
		cin  >> nome;
		
		cout << "Qual o tempo da ligação em minutos: "<<endl;
		cin  >> tempo;
		
		if (tempo <= 3){
			valor = 3.00;
			valor++;
			}
			
		if 	(tempo > 3){
			tempo = (tempo-3);
			valor =3.00 + (( tempo / 5 )* 2.15) + (( tempo % 5)* 0.85);
	     	}	
	     	
	     	else {
	     		
	     		cout << "COMANDO INVALIDO." <<endl;
			 } 
	     	
	     	
		cout << "O valor da conta é R$: " <<valor <<endl;	 
			     
}

