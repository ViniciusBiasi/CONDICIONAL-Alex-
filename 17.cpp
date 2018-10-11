#include <iostream>

using namespace std;
int main ()
{
	             float nomecliente , conta ;
	             int saldo;
	             string tarifa;
	             
	        cout << "Qual o nome do cliente do Banco:"<<endl;
			cin  >> nomecliente ;
			
			cout << "Qual o numero da conta bancaria de 4 digitos:"<<endl;
			cin  >> conta ;
			
			cout << "Qual o saldo da conta bancária: "<<endl;
			cin  >> saldo ;
			
			if ("Basica"){
				
				saldo < 1000.00;
				tarifa=(saldo*25.00);
			}
			
			if ("Prata"){
				
				saldo < 1000.01 > 2000.00;
				tarifa=(saldo*20.00);
			}
            
			if ("Ouro"){
				
				saldo < 2000.01 > 3500.00;
				tarifa=(saldo*13.00);
			}
			if ("Premio"){//Sem tarifa.
			 
			     saldo > 3500.01;
			 }
			 else {
			 	
			 	cout << "COMANDO INVALIDO.";
			 }
			 
			 cout << "\n A tarifa bancaria é de: "<<tarifa;
			 cout << "\n O nome do cliente é:" <<nomecliente;
			 cout << "\n O saldo da conta bancaria é:" <<saldo;
			 
}
			
			
			
			
		
	

