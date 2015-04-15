#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define N 3
#define MAX_STRLEN 30

    struct s_studente{
    char name[MAX_STRLEN];
    char surname[MAX_STRLEN];
    unsigned int age;
    char class[MAX_STRLEN];
};

    typedef struct s_studente studente;

    void ordina( studente record[], int n);
    int main(int argc, char** argv) {
    
    int i;
    studente elenco[N];
    
    for(i=0;i<N;i++){
        printf("Inserisci il nome della %d persona: ",i+1);
        scanf("%s",(elenco[i].name));
        printf("Inserisci il cognome della %d persona: ",i+1);
        scanf("%s",(elenco[i].surname));
        printf("Inserisci l'età della %d persona: ",i+1);
        scanf("%d",&(elenco[i].age));
        printf("Inserisci la classe della %d persona: ",i+1);
        scanf("%s",(elenco[i].class));
    }
    
    ordina(elenco,N);
    
    for(i=0;i<N;i++){
        printf("%s; %s; %d; %s;\n",elenco[i].name,elenco[i].surname,elenco[i].age,elenco[i].class);
    }
    return (EXIT_SUCCESS);
}

    void ordina( studente record[], int n){
    studente temp;
    int i,j,min;
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(strcmp(record[j].surname,record[min].surname)<0){
                min=j;
                }
            }
        temp=record[min];
        record[min]=record[i];
        record[i]=temp;
    }
}