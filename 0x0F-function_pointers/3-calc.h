#ifndef _HEADER_
#define _HEADER_
/**
 * struct op - the struct operator
 * @op:The operator
 * @f:The function with it
 */
typedef struct op
{
char *op;
int (*f)(int a, int b);
<<<<<<< HEAD

=======
>>>>>>> origin/master
}
op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
#endif
