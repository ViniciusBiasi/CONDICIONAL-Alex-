#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
float a,b,c;

cout << "Digite três valores para: A,B e C." <<endl;
cin  >> a, b, c;

if(a>b+c || b>a+c || c>a+b){
cout << "NAO FORMAM UM TRIANGULO\n";
}
else if(a==b && a==c){
cout << "TRIANGULO EQUILATERO\n";
}
else if(a==b || a==c || b==c){
cout << "TRIANGULO ISOSCELES\n";
}
else {
cout << "TRIANGULO ESCALENO\n";
}
return(0);
}
