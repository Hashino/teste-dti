
typedef struct {
  // WARN: name max size is 50
  char nome[50];
  int grade[5];
  int frequency;
} Student;

typedef struct {
  Student *students;
  int curr_size;
  int max_size;
} Class;

Class *create_class(int max_size);

void destroy_class(Class *c);

void add_student(Class *c, const char *name, float grade1, float grade2,
                 float grade3, float grade4, float grade5, int frequency);

void print_class(Class *c);
