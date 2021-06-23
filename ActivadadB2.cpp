//=============================================================================



#include<iostream>
using namespace std;
int main()
{
int c=0;
float matriz1[10]={2.3,4.5,6.5,0.5,6.1,5.5,1.2,2.4,6.5,9.1};
float matriz2[10]={2.3,4.5,6.5,0.5,6.1,5.5,1.2,2.4,6.5,9.1};
float suma[10],resta[10],producto[10],division[10];
cout<<"     PROGRAMA DE OPERACIONES MATEMATICAS: "<<endl;
cout<<"SE MUESTRAN LAS DOS MATRICES: "<<endl;	
out<<"========================================================: "<<endl;	
//Parte de Lexer Preciado En Esta Parte Se Muestran Por Pantalla las MATRICES 1 Y 2//
do{
  cout<<matriz1[c];
  c=c+1;
  if(c<10){
    cout<<" - ";
  }
}while(c<10);
  cout<<endl;
  c=0;
  do{
    cout<<matriz[c];
    c=c+1;
    if(c<10){
      cout<<" -  ";
    }
  }while(c<10);
  cout<<endl;
  
  //Lexer Preciado en esta parte mostraremos la suma de las matrices 1 y 2//
  cout<<"\n";
  cout<<"muestra por pantalla la suma de las matrices "<<endl;
  cout<<"                                             "<<endl;
  for(int c=0;c<10;c++){
	       cout<<matriz1[c]+ matriz2[c];
	       cout<<" - ";
}
cout<<endl;

return 0;

}
