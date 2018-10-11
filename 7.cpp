#include <iostream>
#include <math.h>
using namespace std;
int main ()
 { 
 
            float a, b, c;
			
			cout << "Dar três valores para A, B, C: "<<endl;
			cin  >> a,b,c;
			
			if ((b-c)==a<b+c && (a-c)==b<a+c && (a-b)==c<a+b){
			//a&b&c forem menores.
			cout << "Sao Triangulos. "<<endl;  
            }
            if (a>b+c || b>a+c || c>a+b){
			 
            	
            	cout << "Nao sao triangulos. "<<endl;
            	} 
            return 0;
 
 
}   


