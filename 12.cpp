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
	
	cout << "Escolha uma opera��o aritm�tica: '+', '-', '*', '/' pelos s�mbolos." <<endl;
	cin  >> op;
	
	if (op, "+" ) 
	{//Se pedir Adi��o, somar.
	cout << "\n O valor da Adi��o �: " ,(a+b) ;
	}
	if (op, "-" ) 
	{//Se pedir para subtrair.
	cout << "\n O valor da Subtra��o �: "  ,(a-b) ;
	}
    if (op, "*" ) 
    {//Se pedir para multiplicar.
    cout << "\n O valor da Multiplica��o o �: " ,(a*b) ;
    }
    if (op, "/" ) 
    {//Se pedir para dividir. 
    cout << "\n O valor da Divis�o �: "  ,(a/b);
	}
	
	return 0;

}





