// Creado por Garcia Jickson


#include<iostream>
/*pone a su disposición los objetos cin, cout en el ámbito estándar (std), de tal manera que usted puede comenzar a enviar o recibir información a través de los mismos sin siquiera preocuparse de su creación.*/
using namespace std;
/*sirve para dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar*/
int main()
	/*sirve como punto de partida para la ejecución del programa. Normalmente, controla la ejecución del programa dirigiendo las llamadas a otras funciones del programa*/
{
	float GVJM_imc,GVJM_peso,GVJM_altura;
	/*Para definir datos reales se antepone la palabra reservada float al identificador de la variable*/
	cout<<"Ingrese el peso (kg) : ";
	/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos Peso:*/
	cin>>GVJM_peso;
	/*cin es el flujo de entrada estándar que normalmente es el teclado,donde indicara lo que usuario debe ingresar, en este caso peso*/
	cout<<"Ingrese la altura (metros) : ";
	/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos altura:*/
	cin>>GVJM_altura;
	/*cin es el flujo de entrada estándar que normalmente es el teclado,donde indicara lo que usuario debe ingresar, en este caso altura */
	GVJM_imc=GVJM_peso/(GVJM_altura*GVJM_altura);
	//Procedemos a decir que GVJM_imc va hacer igual a GVJM_peso, dividido para GVJM_altura multiolocadl por CBPJ_altura
	if(GVJM_imc<18.5){
		/*Los condicionales IF, son una estructura de control condicional, también llamadas estructuras selectivas de casos simples*/
		cout<<"Usted tiene bajo peso"<<endl;
		/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos Usted tiene peso Bajo:*/
	}if(GVJM_imc>=18.5 && GVJM_imc<24.9){
		/*Los condicionales IF, son una estructura de control condicional, también llamadas estructuras selectivas de casos simples*/
		cout<<"Usted tiene peso normal"<<endl;
		/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos peso Normal:*/
	}if(GVJM_imc>=25 && GVJM_imc<26.9){
		/*Los condicionales IF, son una estructura de control condicional, también llamadas estructuras selectivas de casos simples*/
		cout<<"Usted tiene sobrepeso grado I"<<endl;
		/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos Usted tiene Sobrepeso Grado 1:*/
	}if(GVJM_imc>50){
		/*Los condicionales IF, son una estructura de control condicional, también llamadas estructuras selectivas de casos simples*/
		cout<<"Usted tiene obesidad tipo IV (Extrema)"<<endl;
		/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos Usted tiene obesidad tipo IV (Extrema)*/
	}
	return 0;
/*Finaliza la ejecución de una función y devuelve el control a la función de llamada (o al sistema operativo si se transfiere el control de la función main ). La ejecución se reanuda en la función de llamada, en el punto que sigue inmediatamente a la llamada*/
}
