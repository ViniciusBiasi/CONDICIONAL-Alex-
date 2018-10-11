#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	char posto[20]; 
	float litro = 2.13;
	float consumo, preco;
	float conta1, conta2, conta3, soma;

	
	cout << "Digite o nome do posto: "<<endl;
	cin  >> posto;
	
	cout << "Digite o consumo anual do posto: "<<endl;
	cin >> consumo;
	
	if ( consumo<= 50000 )
	{// 50.000 litros de combustivel por més, terão aumento de 20%.
    preco = litro + (litro*0.20);
	}
	else 
	{// 50000 litros de combustivel acima desta media tera um aumento de 12%. 
	 preco = litro + (litro*0.12);	
	}
	
	cout << "\n PRECO REAJUSTADO =" <<preco <<endl;
}

