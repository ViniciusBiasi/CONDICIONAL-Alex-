#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	          float a, d, g, total, preco, litro;
	          
	          
	          cout << " Escolha o combustível: Alcool(a), Diesel(d) e Gasolina(g), Colocando só a 1 letra do respectivel combustivel. "<<endl;
	          cin  >>a, d, g;
	          
	          cout << " O valor total do combustível a ser posto no carro é: "<<endl;
	          cin  >>total;
	          
	    if ("Alcool", 'a'){
	    	
	    	a=(preco=1,805);
	    	total=(1,805*litro);
		}
		      
	if ("Diesel", 'd') {
		
		d=(preco=1,053);
		total=(1,053*litro);
			}
	if ("Gasolina", 'g'){
		
		g=(preco=2,565);
		total=(2,565*litro);
			}
			
			total= (preco*litro);
			
			cout << "O preço total é:\n " <<preco;
					
}
