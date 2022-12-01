//Creado por Wilson Morales
/*pone a su disposición los objetos cin, cout en el ámbito estándar (std), de tal manera que usted puede comenzar a enviar o recibir información a través de los mismos sin siquiera preocuparse de su creación.*/
#include<iostream> 
/*sirve para dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar*/
using namespace std;
/*Es la función principal y dentro de ella podemos escribir las operaciones*/
int main()

{

/*Para definir datos reales se antepone la palabra reservada float al identificador de la variable*/
float x, s=0, vb, piva=12, viva, pdesc=10, vdesc, vn;

/*El tipo int es el tipo entero básico predeterminado. Puede representar todos los números enteros en un intervalo específico de la implementación, estaremos utilizando }*/
int i=0,l;

/*Cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas,ingrese l*/
cout<<"Ingrese l: "; cin>>l;

/*La instrucción do-while permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea false*/
do{

cout<<"Ingrese x : "; cin>>x;

//Hacemos el proceso de la sumatoria de nuestros contadores
s=s+x;

/*La instrucción do-while permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea false*/
}while(i<l); 
//Luego hacemos, el proceso de que va hacer igual a , en esta linea estamos igualando dos Cantidades
vb=s;

//Aqui vamos a sacar el % /100
viva=vb * piva/100;

vdesc=vb * pdesc/100;

vn=vb+viva-vdesc;

//Antes de terminar con nuestro ejercicio debemosbmostrar por pantalla, lo que el usuario solicito.
/*Finaliza la ejecución de una función y devuelve el control a la función de llamada (o al sistema operativo si se transfiere el control de la función main ). La ejecución se reanuda en la función de llamada, en el punto que sigue inmediatamente a la llamada*/
cout<<"El valor a pagar es de :"<<vn<<endl<<endl;

return 0;

}
