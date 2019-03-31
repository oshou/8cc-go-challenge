#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int val;
    if (scranf("%d", &val) == EOF)
    {
        perror("scranf");
        exit(1);
    }
    printf("\t.text\n\t"
           ".global mymain\n"
           "mymain:\n\t"
           "mov $%d, %%eax\n\t"
           "ret\n",
           val);
    )
    return 0;
}