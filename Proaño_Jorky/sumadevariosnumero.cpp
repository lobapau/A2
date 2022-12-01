/Pone a su disposición los objetos cin, cout en el ámbito estándar (std), de tal manera que usted puede comenzar a enviar o recibir información a través de los mismos sin siquiera preocuparse de su creación./

#include<iostream>
 using namespace std;

/Sirve para dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar/

                                                                                                                                            //creadoporJorkyProaño


/Sirve como punto de partida para la ejecución del programa. Normalmente, controla la ejecución del programa dirigiendo las llamadas a otras funciones del programa/


int main()


/Para definir datos reales se antepone la palabra reservada float al identificador de la variable. las que utilizare son CBPJ_x,CBPJ_s=0.0/


  {
float JAPP_x,JAPP_s=0.0;


/*El tipo int es el tipo entero básico predeterminado. Puede representar todos los números enteros en un intervalo específico de la implementación en este tipo de ejercicio utilizaremos CBPJ_i=0,CBPJ_l */

int JAPP_i=0,JAPP_l;


/cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *CBPJ_l:/
cout<<"Ingrese el valor de JAPP_l: ";                                                                                                                                            


/*cin es el flujo de entrada estándar que normalmente es el teclado,donde indicara lo que usuario debe ingresar, en este caso ingresaremos CBPJ_l */

cin>>JAPP_l; 



/La instrucción do-while permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea false/
                                                     
do{


/cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *CBPJ_x:/

cout<<"Ingrese el valor de JAPP_x: ";


/*cin es el flujo de entrada estándar que normalmente es el teclado,donde indicara lo que usuario debe ingresar, en este caso ingresaremos CBPJ_l */

cin>>JAPP_x;


//hacemos el proceso de la sumatoria de nuestros contadores

JAPP_i=JAPP_i+1;


//sumamos nuestro acumulador

JAPP_s=JAPP_s+JAPP_x;



/La instrucción do-while permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea false/

}while(JAPP_i<JAPP_l); 

//muestro resultados por pantalla
                                           
cout<<"La suma de los número fue: "<<JAPP_s<<endl;   

/Finaliza la ejecución de una función y devuelve el control a la función de llamada (o al sistema operativo si se transfiere el control de la función main ). La ejecución se reanuda en la función de llamada, en el punto que sigue inmediatamente a la llamada/
                                                                                                               return 0;

}
