#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../include/class.h"

int main(int argc, char *argv[]) {
  Class *c = create_class(3);

  fprintf(stderr, "Entre com os dados dos alunos:\n");
  fprintf(stderr, "formato: nome nota1 nota2 nota3 nota4 nota5 frequencia\n");
  fprintf(stderr, "linha vazia sinaliza fim da entrada\n");

  char *entrada;
  size_t size = 0;

  getline(&entrada, &size, stdin);

  while (strlen(entrada) > 1) {
    char nome[50];
    float nota1, nota2, nota3, nota4, nota5;
    int frequencia;

    sscanf(entrada, "%s %f %f %f %f %f %d", nome, &nota1, &nota2, &nota3,
           &nota4, &nota5, &frequencia);

    add_student(c, nome, nota1, nota2, nota3, nota4, nota5, frequencia);

    getline(&entrada, &size, stdin);
  }

  print_class(c);

  exit(EXIT_SUCCESS);
}
