#include<iostream> 
/*pone a su disposición los objetos cin, cout en el ámbito estándar (std), de tal manera que usted puede comenzar a enviar o recibir información a través de los mismos sin siquiera preocuparse de su creación.*/
 using namespace std;
/*sirve para dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar*/
 //creadopor Garcia Jickson

int main()
/*sirve como punto de partida para la ejecución del programa. Normalmente, controla la ejecución del programa dirigiendo las llamadas a otras funciones del programa*/ 
{
float JMGV_x,JMGV_s=0.0;
/*Para definir datos reales se antepone la palabra reservada float al identificador de la variable*/
	int JMGV_i=0,JMGV_l;
/*El tipo int es el tipo entero básico predeterminado. Puede representar todos los números enteros en un intervalo específico de la implementación*/
cout<<"Ingrese el valor de JMGV_l: ";                                                                                /*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *JMGV_L:*/                                                       
cin>>JMGV_l;  
/*cin es el flujo de entrada estándar que normalmente es el teclado,donde indicara lo que usuario debe ingresar, en este caso ingresaremos CBPJ_l */
do{
/*La instrucción do-while permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea false*/
cout<<"Ingrese el valor de JMGV_x: ";
/*cin es el flujo de entrada estándar que normalmente es el teclado,donde indicara lo que usuario debe ingresar, en este caso ingresaremos JMGV_X */
cin>>JMGV_x;
//Hacemos el proceso de la sumatoria de nuestros contadores
JMGV_i=JMGV_i+1;
//Sumamos en el acumulador
JMGV_s=JMGV_s+JMGV_x;
/*La instrucción do-while permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea false*/
}while(JMGV_i<JMGV_l);                                            
cout<<"La suma de los número fue: "<<JMGV_s<<endl;              
/*Cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas*/
return 0;
/*Finaliza la ejecución de una función y devuelve el control a la función de llamada (o al sistema operativo si se transfiere el control de la función main ). La ejecución se reanuda en la función de llamada, en el punto que sigue inmediatamente a la llamada*/
}
