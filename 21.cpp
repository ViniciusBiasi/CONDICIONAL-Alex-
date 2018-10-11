#include <iostream> 
#include <math.h> 
using namespace std;
int main ()
{
	           int a, b, c;
	
	            cout << "Digite um numero: ";
	            cin >> a;
	            
	            cout << "Digite um segundo numero: ";
	            cin  >> b;
	            
	            cout << "Digite um terceiro numero: ";
	            cin  >> c;
	            
	    if (a>b)
	    if (a>c)
	    {//a não o menor.
			a = (a+b);
			a = (a-b);
			c = (a-b);
		}
		
		if (b<c)
		{//b é o menor.
		    
		     a=(a+b);
	         b=(a-b);   
	         c=(a-b);
	         
	        }
	     else    
	         {//c é o menor.
				 
				 a=(a+c);
				 c=(a-c);
				 a=(a-c);
				}
		if (b>c)		 
				{//b é o maior. 
       a = (a+b);
       b = (b+c);
       c = (b-c);
       b = (b-c);
       a = (a-b);
  }
              cout <<"A ordem fica:" <<a <<b <<c;
              
		  }
