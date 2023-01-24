#ifndef HEADERFILE_H
#define HEADERFILE_H
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
typedef struct listint_s;
int main(void);
listint_t *create_listint(const int *array, size_t size);
#endif
