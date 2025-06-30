#include <stdio.h>
#include "hash_table.h"

int main()
{
    printf("Starting program!\n");
    
    ht_hash_table* ht = ht_new();
    ht_insert(ht, "Test", "Ford");
    printf("The value is: %s", ht_search(ht, "Test"));
    ht_del_hash_table(ht);
    
    getchar();
    return 0;
}