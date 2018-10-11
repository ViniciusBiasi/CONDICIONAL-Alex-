#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	
   float salmin, salfun, impbru, impliq, result, taxa, dep;
   
    cout << "Digite o numero de dependentes: "<<endl;
    cin  >> dep;
    
    cout << "Digite o imposto normal a ser pago: "<<endl;
    cin  >> taxa;
    
    cout << "O salario do funcionario: "<<endl;
    cin >> salfun;
    
    cout << "Qual o salario minimo :"<<endl;
    cin  >> salmin;
 	
	if (salfun >= salmin*12){	
		impbru=(salfun*0.20);
	}
	if (salfun >= salmin*5 && salfun < salmin*12){
		impbru=(salfun*0.08);
	}
	if (salfun < salmin*5){
		impbru=0;
	}
	if (salfun >= salmin*12)
	impbru=(salfun*0.20);
	
	if (salfun >= salmin*5 && salfun < salmin*12)
	impbru=(salfun*0.08);
	
	if (salfun < salmin*5)
	impbru=0;
 	impbru = (impbru*0.04)+impbru; 
	impliq += impbru - (dep*300.00); 
	result += impliq+ - (salfun*taxa/100);
 	
 	cout << "\n IMPOSTO BRUTO =" <<impbru;
	cout <<  "\n IMPOSTO LIQUIDO =" <<impliq; 
	cout <<  "\n RESULTADO = "<<result; 
 	
	if (result < 0){
		cout <<"\nIMPOSTO A RECEBER";
	}
	else if (result == 0){
			cout << "\nIMPOSTO QUITADO";
		}
		else{
			cout << "\nIMPOSTO A PAGAR";
		}
	if (result < 0)
	
	cout << "\nIMPOSTO A RECEBER";
	
	else if (result == 0)
	
	cout << "\nIMPOSTO QUITADO";
	
	else
	
	cout << "\nIMPOSTO A PAGAR";
	
 	return 0;
 }
