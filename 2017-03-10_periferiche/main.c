#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int SalvaVettore(char nomefile[], int vet[], int ne);


void main (void){

int vet[];
int ne;
int i;

char *fgets(char *s, int vet, FILE *stream);
char *gets(char *s);

printf("quante periferiche");
scanf("%i",&ne);

int SalvaVettore(char nomefile[], int vet[], int ne)
{
    FILE* f;
    int i;
    f = fopen("periferiche.txt", "w");
    if (f==0)
    {
        return 0;

    }
    fprintf(f,"%i",ne);
    for(i=0; i<ne; i++)
        fprintf(f, "%i\n", vet[i]);

    FILE* f;
    int i;

    f = fopen("periferiche.txt", "w");
    if (f==0)
    {
        return 0;
    }
    fprintf(f,"%i",ne)
    for (i=0; i<ne; i++)
        fprintf(f, "%i\n", vet[i]);
    fclose(f);
    return 1;













}




}
