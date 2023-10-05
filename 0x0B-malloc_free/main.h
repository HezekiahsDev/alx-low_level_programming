#ifndef MAIN_MALLOC
#define MAIN_MALLOC

char *create_array(unsigned int size, char c);
int **alloc_grid(int width, int height);
char *argstostr(int ac, char **av);
void free_grid(int **grid, int height);
char *str_concat(char *s1, char *s2);
char *_strdup(char *str);
int _putchar(char c);

#endif /*MAIN_MALLOC*/
