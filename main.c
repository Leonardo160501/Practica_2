
#include "lib/include.h"

typedef struct ElementoLista {
char *dato;
struct ElementoLista *siguiente;
}Elemento;

typedef struct ListaIdentificar {
Elemento *inicio;
Elemento *fin;
int tamanio;
}Lista;

unsigned long Led;



int main(void){

                   
  while(1){
    Configurar_GPIO();
    //if(PF4 == 0x0){
    Led = 0x02;            // reverse value of LED
    GPIOF->DATA = Led;
    //GPIO_PORTF_DATA_R = Led;   // write value to PORTF DATA register,toggle led
    Delay();
    Led = 0x04;            // reverse value of LED
    GPIOF->DATA = Led;
    //GPIO_PORTF_DATA_R = Led;   // write value to PORTF DATA register,toggle led
    Delay();
    Led = 0x08;            // reverse value of LED
    GPIOF->DATA = Led;
    //GPIO_PORTF_DATA_R = Led;   // write value to PORTF DATA register,toggle led
    Delay();
    Led = 0x0A;            // reverse value of LED
    GPIOF->DATA = Led;
    //GPIO_PORTF_DATA_R = Led;   // write value to PORTF DATA register,toggle led
    Delay();
    // }
  }
}
