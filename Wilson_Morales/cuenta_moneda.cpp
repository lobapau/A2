//Creado por Wilson Morales

/*pone a su disposición los objetos cin, cout en el ámbito estándar (std), de tal manera que usted puede comenzar a enviar o recibir información a través de los mismos sin siquiera preocuparse de su creación.*/
#include <iostream>
/*sirve para dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar*/
using namespace std;
/*sirve como punto de partida para la ejecución del programa. Normalmente, controla la ejecución del programa dirigiendo las llamadas a otras funciones del programa*/
int main ()
{
	/*Para definir datos reales se antepone la palabra reservada float al identificador de la variable*/
float x,s=0,s1=0,s5=0;
	int i=0,l,i1=0,i5=0;
	/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos */
cout<<"Ingrese el valor de l: ";cin>>l;
	do{

	cout<<"Ingrese el valor de x: ";cin>>x;
	i=i+1;
	s=s+x;
	if(x==1){
		i1=i1+1;
		s1=s1+x;
	}else{

		i5=i5+1;
		s5=s5+x;
	}

	/*La instrucción do-while permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea false*/
}while(i<l);
	cout<<"La cantidad de monedas es: "<<i<<endl;
	cout<<"El valor es: "<<s<<endl;


	cout<<"La cantidad de monedas de 1$ es: "<<i1<<endl;
	cout<<"El valor es: "<<s1<<endl;

	cout<<"La cantidad de monedas de 50ctvs es: "<<i5<<endl;
	cout<<"La cantidad de moneda es: "<<s5<<endl;
	/*Finaliza la ejecución de una función y devuelve el control a la función de llamada (o al sistema operativo si se transfiere el control de la función main ). La ejecución se reanuda en la función de llamada, en el punto que sigue inmediatamente a la llamada*/
return 0;
}
