#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "hash_table.h"
#include "prime.h"

int main()
{

    ht_hash_table *ht = ht_new();

    int total = 50000;

    for (int i = 0; i < total; i++)
    {
        // convert i to string
        char key[5];
        char value[5];

        sprintf(key, "%d", i);
        sprintf(value, "%d", i);

        ht_insert(ht, key, value);
    }

    for (int i = 0; i < total; i++)
    {
        char key[5];
        sprintf(key, "%d", i);
        printf("%s\n", ht_search(ht, key));
    }

    return 0;
}