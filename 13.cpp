#include <iostream>
using namespace std;
int main ()
{
	           float nome, idade;
	           float infantila, infantilb, juvenila, juvenilb, senior;
			   
		cout << "Qual o nome do nadador: "<<endl;
		cin  >> nome;
		
		cout << "Digite a idade do nadador: "<<endl;
		cin >> idade;
		
		if (idade>5>6<7)
		{//Se a idade for maior que 5 e maior que 6 e menor que 7.
		infantila = 5 > 6 < 7;
		idade > 5 > 6 < 7;
		}
		
		if (idade>8>9<10)
		{//Se a idade for maior que 8 e maior que 9 e menor do que 10.
		
		infantilb = 8 > 9 < 10;
		idade > 8 > 9 < 10;
		}
		
		if (idade>11>12<13)
		{// Se a idade for maior que 11 maior que 12 e menor que 13.
		 juvenila = 11 > 12 < 13;
		 idade > 11 > 12 < 13;
		 }
	    if (idade>14>15>16<17)
	    {//Se a idade for maior que 14 e maior que 15 e maior que 16 e menor que 17.
	    juvenilb = 14 > 15 > 16 < 17;
	    idade > 14 > 15 > 16 < 17;
	    }
	    if (idade>18)
	    {//Se a idade for maior que 18.
	    senior > 18 > idade;
	    }
	    
	    cout << "O nome do nadador é: "<<nome<<endl; 
		cout << "A sua idade é : "<<idade <<endl;
	    cout << "A Categoria que melhor se encaixa na idade dos competidores é: " <<infantila  <<infantilb <<juvenila <<juvenilb <<senior <<endl;
	
}

