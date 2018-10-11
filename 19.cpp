#include <iostream>

using namespace std;
int main ()
{
	char aluno [30];
	int i;
	

	cout << "Digite o nome do aluno: "<<endl;
	cin  >> aluno, i;
	
	for (i=0;i<=1;i++) ;
	
	aluno[0]=toupper(aluno[0]);
	
	if (aluno[0]=='A' || aluno[0]=='B' || aluno[0]=='C' || aluno[0]=='D' || aluno[0]=='D' || aluno[0]=='E' || aluno[0]=='F' || aluno[0]=='G' || aluno[0]=='H' || aluno[0]=='I' || aluno[0]=='J' || aluno[0] =='K') 	{   
	
	cout << "O aluno faz a prova na sala 101."<<endl;
   }
	if (aluno[0]=='L' || aluno[0]=='M' || aluno[0]=='N') 	{
		
	cout << "O aluno faz a prova na sala 102."<<endl;
	}
	
	
	if (aluno[0]=='O' || aluno[0]=='P' || aluno[0]=='Q' || aluno[0]=='R' || aluno[0]=='S' || aluno[0]=='T' || aluno[0]=='U' || aluno[0]=='V' || aluno[0]=='W' || aluno[0]=='X' || aluno[0]=='Y' || aluno[0] =='Z')	{
		
	cout << "O aluno faz na sala 103."<<endl;
  }
  else   {

	cout << "O caractere digitado não corresponde a um nome."<<endl;
  }
}
