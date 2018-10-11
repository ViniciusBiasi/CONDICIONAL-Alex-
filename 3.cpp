#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	
    
	int num1, num2, num3, num4, soma, maior;
	cout << "Digite quatro numeros: (aperte ENTER para colocar os numeros separados)." <<endl;
	cin >> num1;
	cin >>num2;
	cin >>num3;
	cin >>num4;
	
	
	if ( num1>num2 && num1>num3 && num1>num4 )
	maior=num1;
	else if (num2>num3 && num2>num4)
	maior=num2;
	else if (num3>num4)
	maior=num3;
	else
	maior=num4;
	soma=num1+num2+num3+num4-maior;
	cout << "A soma dos tres menores é: " <<soma;		
	return 0;
}
