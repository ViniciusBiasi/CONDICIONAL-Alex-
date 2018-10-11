#include <iostream>
#include <math.h>
using namespace std;
int main ()
 { 
 
    int numero, numero2 , numero3;
 
	cout << "Digite um numero de 5 digitos: "<<endl;
	cin  >> numero;
	
	numero2 = numero / 1000;
	numero3 = (numero % 10)*10 + (numero % 100 ) / 10;
	
	if ( numero2 == numero3){	
	cout << "O numero Palindromo.";
	}
	else {
		cout << "O numero nao e palindromo.";
	}
	return 0;
}

