#include <stdio.h>

int main(void) {
char *nombreArchivo = "output.txt";
char *modo = "w";// w es para sobrescribir, a+ es para añadir al existente
FILE *archivo = fopen(nombreArchivo, modo);
printf("Hello, World!\n");
/*fprintf(archivo, "Hello, World!");
fclose(archivo);/**/
// gcc hello.c -std=c18 -o hello.exe
//./hello.exe > output.txt "para la salida por txt"
    return 0;
}
