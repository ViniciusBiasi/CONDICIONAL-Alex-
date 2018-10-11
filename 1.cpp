#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int num;
  
  cout << "\n Digite o valor de um numero inteiro: ";
  cin >> num;
  	

	if (num % 2 == 0){
		printf("NUMERO PAR\n");
	}
	else 
	 if (num % 2 != 0){
		printf("NUMERO IMPAR\n");
	}
	return 0;
}
