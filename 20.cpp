#include <iostream> 
#include <math.h>
using namespace std;
int main ()
{
	
	                     int x, y;
	
	                   cout << "Digite um valor para a coordenada (X):";
	                    cin  >> x;
	
	                    cout << "Digite um valor para a coordenada (Y): ";
	                    cin  >> y;
	
	if (x>0 && y>0) 
		  {// O ponto x="+x+" e y="+y+" pertence ao primeiro quadrante.
			  
			  cout << "O ponto x=+x+ e y=+y+ pertence ao primeiro quadrante."<<endl;
	}
	 if(x<0 && y>0) 
	     {//O ponto x="+x+" e y="+y+" pertence ao segundo quadrante. 
			 
			 cout << "O ponto x=+x+ e y=+y+ pertence ao segundo quadrante. "<<endl;             
    } 
	if (x<0 && y<0) 
     {//O ponto x="+x+" e y="+y+" pertence ao terceiro quadrante.
    
             cout << "O ponto x=+x+ e y=+y+ pertence ao terceiro quadrante."<<endl;
  }
     else
              {
				  cout << "O ponto x=+x+ e y=+y+ pertence ao quarto quadrante."<<endl;
	 
	 }
		 if (x==0 && y!=0)
		 {  // O ponto x="+x+" e y="+y+" está em eixo x.
			 cout <<  "O ponto x=+x+ e y=+y+ está em eixo x."<<endl;
	 }
		 else{		 
		cout << "O ponto x=+x+ e y=+y+ está em eixo y."<<endl;
	}
		 if (x==0 && y==0)
	    { //O ponto x="+x+" e y="+y+" está no ponto de origem.
			cout << "O ponto x=+x+ e y=+y+ está no ponto de origem."<<endl;
			 
		}
		
		 
		
	}
		
		

		 
