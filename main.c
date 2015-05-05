#include <stdio.h>
#include <stdlib.h>

#define MAX_STRLEN 30
#define MAX_FILENAME 255
struct s_studente  {
	char nome[MAX_STRLEN+1];
	char cognome[MAX_STRLEN+1];
	unsigned int eta;
	char classe[MAX_STRLEN+1];
};

typedef struct s_studente studente;

int main(int argc, char** argv) {
    char file[MAX_FILENAME+1];
    FILE *puntafile;
    studente alunno;
    int i;
    
    printf("Inserisci il nome del file: ");
    scanf("%[^\n]s", file);
    puntafile=fopen(file, "r");
    if (puntafile == NULL) {
        printf("Impossibile aprire il file.");
    }
    else {
        fscanf(puntafile, "%s\n", file);
        i=1;
        fscanf(puntafile, "%[^;];%[^;];%d;%s\n", alunno.nome, alunno.cognome, &alunno.eta, alunno.classe);
        while(!feof(puntafile)){
            printf("Studente %d:\n", i);
            printf("Nome: %s\n", alunno.nome);
            printf("Congome: %s\n", alunno.cognome);
            printf("Eta': %d\n", alunno.eta);
            printf("Classe: %s\n", alunno.classe);
            fscanf(puntafile, "%[^;];%[^;];%d;%s\n", alunno.nome, alunno.cognome, &alunno.eta, alunno.classe);
            i++;
        }
        fclose(puntafile);
    }
    return (EXIT_SUCCESS);
}
