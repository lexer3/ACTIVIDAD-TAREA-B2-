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
cout<<"========================================================: "<<endl;	
//LEXER PRECIADO TELLO MUESTRA DE MATRICES//
  do {
	cout<<matriz1[c];
	c=c+1;
	if(c<10){
		cout<<"    ";
	}
}while(c<10);
cout<<endl;
c=0;
do {
	cout<<matriz2[c];
	c=c+1;
	if(c<10){
		cout<<"    ";
	}
}while(c<10);
cout<<endl;
c=0;

return 0;

}
