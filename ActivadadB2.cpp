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
	
______________________________________________
//LEXER PRECIADO TELLO MUESTRA DE MATRICES//
______________________________________________
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
	
	
________________________________________________
//WENDY ROBINZON RODRIGUEZ SUMA DE MATRICES//
________________________________________________
cout<<"=======================================:"<<endl;
cout<<"EL RESULTADO DE LA SUMA DE MATRICES ES:"<<endl;
do{
suma[c]=matriz1[c]+matriz2[c];
cout<<suma[c];

         c=c+1;
         cout<<" ";
	
}while(c<10);
c=0;
cout<<endl;
	

_______________________________________________
//WENDY ROBINZON RODRIGUEZ RESTA DE MATRICES//
_______________________________________________
cout<<"EL RESULTADO DE LA RESTA DE MATRICES ES:"<<endl;
do{
resta[c]=matriz1[c]-matriz2[c];
cout<<resta[c];

         c=c+1;
         cout<<" ";
	
}while(c<10);
c=0;
cout<<endl;
cout<<"=======================================:"endl;
	
	
_____________________________________________________
//ALISSON LUCAS ANGULO MULTIPLICACION DE MATRICES//
_____________________________________________________
cout<<"EL RESULTADO DE LA MULTIPLICACION DE LAS MATRICES ES:"<<endl;
do{
producto[c]=matriz1[c]*matriz2[c];
cout<<producto[c];
	
         c=c+1;
         cout<<"   ";

}while(c<10);
c=0;
cout<<endl;
cout<<"======================================:"<<endl;
	
________________________________________________
//ALISSON LUCAS ANGULO DIVISION DE MATRICES//
________________________________________________
cout<<"EL RESULTADO DE LA DIVISIÓN DE MATRICES ES:"<<endl;
for(c=0; c<10; c++){
division[c]=matriz1[c]/matriz2[c];
}
	
for(c=0; c<10; c++){
cout<<division[c]<<"  ";
cout<<endl;
}
	

cout<<" "<<endl;
cout<<"INTEGRANTES"<<endl;
cout<<"WENDY ROBINZON RODRIGUEZ"<<endl;
cout<<"ALISSON LUCAS ANGULO"<<endl;
cout<<"LEXER PRECIADO TELLO"<<endl;

return 0;

}
