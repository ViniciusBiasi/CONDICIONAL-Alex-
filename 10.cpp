#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int mes, dia, ano,  a, b, c, d;
	
	cout << "Digite um data: com més, dia, ano (00,00,0000)>> "<<endl;
	cin >> mes, dia, ano;
	
	if ((dia < 31) && (mes == 1|| mes== 3 || mes== 5 || mes== 7 || mes== 8 || mes== 10 || mes == 12)){
	a = 1;
	}
	if ((dia <= 30) && (mes == 4 || mes == 6 || mes == 9 || mes == 11)){
	b = 1;
	}
	if ((dia <= 29 && mes == 2) && ((ano % 4) == 0)) {
	c = 1;
	}
	if (dia <= 28 && mes == 2){
	d = 1;
	}
	if (a==1 || b==1 || c==1 || d==1){ 
	cout << "DATA VALIDA \n";	
    }
	
	else {
	cout << "DATA INVALIDA \n";
	}
	
	return 0;
}
