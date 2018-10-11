#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  float x, y;
  
  cout << "Digite um numero para o valor de (X): "<<endl;
  cin  >> x;
 
  if (x==1)
  {//X for igual a 1.
  cout << "\n X e igual a 1.";
  cout << "O valor de y e:"<<y <<endl;
  y=x;
  x<1;
  y=0;
  }
  
  if (x>1)
  {//X é maior que 1.
  cout << "\n X e o maior que 1.";
  cout << "O valor de y e:"<<y <<endl;
  y=x*x;
  }

 return 0;
  
}
