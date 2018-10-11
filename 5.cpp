#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  float salfun, reajuste;
  
  cout << "Qual o salario atual do funcionario: "<<endl;
  cin >> salfun;

	if (salfun <= 350){
		reajuste = salfun + salfun * 0.50;
	}
	if (salfun > 350){
		reajuste = salfun + salfun * 0.30;
	}
	cout << "SALARIO COM REAJUSTE =" <<reajuste;
	return 0;
	
	
	}
