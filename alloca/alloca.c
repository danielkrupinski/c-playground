#include <alloca.h>
#include <stdio.h>

int main(void)
{
    int* tab = alloca(3 * sizeof(int));
    printf("tab[3] allocated on stack with alloca():\n");

    for (int i = 0; i != 3; ++i) {
        tab[i] = i;
        printf("tab[%d] = %d\n", i, tab[i]);
    }
    return 0;
}
