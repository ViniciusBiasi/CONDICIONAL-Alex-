#include<iostream>
#include<math.h>
using namespace std;
int main()
{
     int codigo;
  
	float nota1, nota2, nota3, media;
	
	cout << "Digite a matrícula do aluno: \n";
	cin  >> codigo;
	
	cout << "Digite a  1 nota  do aluno: \n";
	cin >> nota1;
	
	cout << "Digite a 2 nota do aluno: \n";
	cin  >> nota2;
	
	cout << "Digite a 3 nota  do aluno: \n";
	cin  >> nota3;
	
	if (nota1 > nota2 && nota1 > nota3){
		media = ((nota1*4)+(nota2*3)+(nota3*3))/10;
	}
	else if (nota2 > nota1 && nota2 > nota3){
		media = ((nota2*4)+(nota1*3)+(nota3*3))/10;
	}
	else if (nota3 > nota1 && nota3 > nota2){
		media = ((nota3*4)+(nota1*3)+(nota2*3))/10;
	}

	cout << "A matrícula do aluno é: "<<codigo <<endl;
	cout << "As três notas do aluno foram: "<<nota1 <<nota2 <<nota3 <<endl;
	cout << "A média do Aluno foi: "<<media <<endl;
		
	if (media >= 5){
		cout << "O aluno foi Aprovado.";
	}
	else{
		cout << "O aluno foi reprovado.";
	}
	return 0;
}
