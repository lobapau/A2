// Creado por Julio Merelo 
//Suma de varios numeros

/*Pone a su disposición los objetos cin, cout en el ámbito estándar (std), de tal manera que usted puede comenzar a enviar o recibir información a través de los mismos sin siquiera preocuparse de su creación.*/
#include<iostream>


/*Sirve para dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar*/
using namespace std;


/*Sirve como punto de partida para la ejecución del programa. Normalmente, controla la ejecución del programa dirigiendo las llamadas a otras funciones del programa*/
int main(){
	int n,suma=0;
	
	
/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *JAMG_l:*/
	cout<<"Digite la cantidad de elementos que desea sumar: ";
	
/*cin es el flujo de entrada estándar que normalmente es el teclado,donde indicara lo que usuario debe ingresar, en este caso ingresaremos CBPJ_l */
	cin>>n;
	
	for(int i=1;i<=2*n-1;i+=2){
		suma += i;
	}
	
/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *JAMG_x:*/
cout<<"La suma es: "<<suma<<endl;
	
	system("pause");
	return 0;
}
