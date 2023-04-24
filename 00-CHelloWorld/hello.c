#include <stdio.h>

int main()
{
    FILE *archivoNuevo = fopen("output.txt", "w");

    fprintf(archivoNuevo, "Hello World!");
    fclose(archivoNuevo);

    return 0;
}