#include <stdio.h>

void mostrarNumero(int numero);//escribimos el prototipo de la funcion con la variable que va a recibir

int main() {

    int valor = 23; //iniciamos la variable con el valor

    mostrarNumero(valor);
    return 0;
}

void mostrarNumero(int numero) {//iniciamos la funcion con la variable que va a recibir

    printf("El numero ingresado es: %d\n", numero);//imprimimos el numero que habiamos escrito anteriormente
}
