//Creado por JorkyProaño

/pone a su disposición los objetos cin, cout en el ámbito estándar (std), de tal manera que usted puede comenzar a enviar o recibir información a través de los mismos sin siquiera preocuparse de su creación./
#include<iostream>

/sirve para dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar/
using namespace std;

/sirve como punto de partida para la ejecución del programa. Normalmente, controla la ejecución del programa dirigiendo las llamadas a otras funciones del programa/

int main()

{

/Para definir datos reales se antepone la palabra reservada float al identificador de la variable/
	float x=0,s=0,c1=0,s5=0;

/El tipo int es el tipo entero básico predeterminado. Puede representar todos los números enteros en un intervalo específico de la implementación/
	int s1=0,l,i1=0,i5=0;

/cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *CBPJ_l:/
	

cout<<"ingrese l:  "; cin>>l;
/*cin es el flujo de entrada estándar que normalmente es el teclado,donde indicara lo que usuario debe ingresar, en este caso ingresaremos CBPJ_l */


/La instrucción do-while permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea false/
	do{
	
	
/cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *CBPJ_x:/
	cout<<" ingrese x:  "; cin>>x;
	
//Hacemos el proceso de la sumatoria de nuestros contadores
	i1=i1+1;

//Sumamos en el acumulador
	s=s+x;
	
/Los condicionales IF, son una estructura de control condicional, también llamadas estructuras selectivas de casos simples/
	if(x==1){
	
//Volvemos hacer el proceso de la sumatoria de nuestros contadores
	i1=i1+1;

//Sumamos en el acumulador
	s1=s1+x;

/Los condicionales IF-ELSE, son una estructura de control, que nos permiten tomar cierta decisión al interior de nuestro algoritmo, es decir, nos permiten determinar que acciones tomar dada o no cierta condición./
	}else{

//Hacemos nuevamente  el proceso de la sumatoria de nuestros contadores
	i5=i5+1;

//Sumamos en el acumulador
	s5=s5+x;
	}
	
/La instrucción do-while permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea false/
	}while(i1==l);
	

/cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *JAPP_i:/
	cout<<"la cantidad de monedas fue:  " <<i1<<endl;
	
/cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *JAPP_s:/
	cout<<"el valor fue:  "<<s<<endl;
	

/cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *JAPP_i1:/
	cout<<"la cantidad de monedas de s1 fue:  "<<i1<<endl;


/cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *JAPP_s1:/
	cout<<"el valor fue:  "<<s<<endl;

/cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *JAPP_i5:/
	cout<<"la cantidad de monedas s5 fue: "<<i5<<endl;

/cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *JAPP_s5:/	
	cout<<"el valor fue: "<<s5<<endl;
	
	/Finaliza la ejecución de una función y devuelve el control a la función de llamada (o al sistema operativo si se transfiere el control de la función main ). La ejecución se reanuda en la función de llamada, en el punto que sigue inmediatamente a la llamada/
	return 0;

}
