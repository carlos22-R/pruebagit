

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int resultado;
    resultado=suma(1,4);
    printf("%i",resultado);

    return (EXIT_SUCCESS);
}
int suma(int x,int y){
    return (x+y);
}
