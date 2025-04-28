#include <stdio.h>
#include <stdlib.h>

#include "../include/class.h"

Class *create_class(int max_size) {
  Class *class = malloc(sizeof(Class));

  if (class == NULL) {
    fprintf(stderr, "Error: Unable to allocate memory for class.\n");
    return NULL;
  }

  class->students = malloc(max_size * sizeof(Student));
  class->curr_size = 0;
  class->max_size = max_size;

  return class;
}

void add_student(Class *c, const char *name, float grade1, float grade2,
                 float grade3, float grade4, float grade5, int frequency) {
  // check if the class is full and needs to be resized
  if (c->curr_size >= c->max_size) {
    c->students = realloc(c->students, (c->max_size + 10) * sizeof(Student));
    c->max_size += 10;
  }

  Student *student = &c->students[c->curr_size++];
  snprintf(student->nome, sizeof(student->nome), "%s", name);

  student->grade[0] = grade1;
  student->grade[1] = grade2;
  student->grade[2] = grade3;
  student->grade[3] = grade4;
  student->grade[4] = grade5;

  student->frequency = frequency;
}

void destroy_class(Class *c) {
  if (c != NULL) {
    free(c->students);
    free(c);
  }
}

void print_class(Class *c) {
  int avg1 = 0, avg2 = 0, avg3 = 0, avg4 = 0, avg5 = 0;

  for (int i = 0; i < c->curr_size; i++) {
    Student *student = &c->students[i];
    fprintf(stdout, "%s %d %d %d %d %d %d%%\n", student->nome,
            student->grade[0], student->grade[1], student->grade[2],
            student->grade[3], student->grade[4], student->frequency);

    avg1 += student->grade[0];
    avg2 += student->grade[1];
    avg3 += student->grade[2];
    avg4 += student->grade[3];
    avg5 += student->grade[4];
  }

  avg1 /= c->curr_size;
  avg2 /= c->curr_size;
  avg3 /= c->curr_size;
  avg4 /= c->curr_size;
  avg5 /= c->curr_size;

  fprintf(stdout, "%d %d %d %d %d\n", avg1, avg2, avg3, avg4, avg5);

  // students with grades above average
  for (int i = 0; i < c->curr_size; i++) {
    Student *student = &c->students[i];

    if (student->grade[0] > avg1 && student->grade[1] > avg2 &&
        student->grade[2] > avg3 && student->grade[3] > avg4 &&
        student->grade[4] > avg5) {
      fprintf(stdout, "%s ", student->nome);
    }
  }
  fprintf(stdout, "\n");

  // students with frequency < 75%
  for (int i = 0; i < c->curr_size; i++) {
    Student *student = &c->students[i];
    if (student->frequency < 75) {
      fprintf(stdout, "%s ", student->nome);
    }
  }
  fprintf(stdout, "\n");
}
