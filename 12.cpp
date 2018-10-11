#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	float a, b;
	char op [10] ;
	
	cout << "Escreva um numero inteiro: " <<endl;
	cin  >>  a;
	
	cout << "Escreva um segundo numero inteiro: " <<endl;
	cin  >> b;
	
	cout << "Escolha uma operação aritmética: '+', '-', '*', '/' pelos símbolos." <<endl;
	cin  >> op;
	
	if (op, "+" ) 
	{//Se pedir Adição, somar.
	cout << "\n O valor da Adição é: " ,(a+b) ;
	}
	if (op, "-" ) 
	{//Se pedir para subtrair.
	cout << "\n O valor da Subtração é: "  ,(a-b) ;
	}
    if (op, "*" ) 
    {//Se pedir para multiplicar.
    cout << "\n O valor da Multiplicação o é: " ,(a*b) ;
    }
    if (op, "/" ) 
    {//Se pedir para dividir. 
    cout << "\n O valor da Divisão é: "  ,(a/b);
	}
	
	return 0;

}





