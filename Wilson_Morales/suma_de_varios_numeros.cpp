//Creado por Wilson Morales
/*pone a su disposición los objetos cin, cout en el ámbito estándar (std), de tal manera que usted puede comenzar a enviar o recibir información a través de los mismos sin siquiera preocuparse de su creación.*/
#include<iostream>
#include<stdlib.h>

/*sirve para dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar*/
using namespace std;

/*Es la función principal y dentro de ella podemos escribir las operaciones*/
int main(){
	/*El tipo int es el tipo entero básico predeterminado. Puede representar todos los números enteros en un intervalo específico de la implementación*/
int n,suma=0;
	
	
	/*Cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas,ingrese l*/
cout<<"Digite la cantidad de elementos que desea sumar: ";
	/*cin es el flujo de entrada estándar que normalmente es el teclado, que el usuario debera ingresar*/
cin>>n;
	
	for(int i=1;i<=2*n-1;i+=2){
		suma += i;
	}
	
//Antes de terminar con nuestro ejercicio debemosbmostrar por pantalla, lo que el usuario solicito.
cout<<"La suma es: "<<suma<<endl;
	
	system("pause");
	/*Finaliza la ejecución de una función y devuelve el control a la función de llamada (o al sistema operativo si se transfiere el control de la función main). La ejecución se reanuda en la función de llamada, en el punto que sigue inmediatamente a la llamada*/
return 0;
}
