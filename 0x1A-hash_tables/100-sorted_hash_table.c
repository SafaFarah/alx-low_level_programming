#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size)





int shash_table_set(shash_table_t *ht, const char *key, const char *value)



char *shash_table_get(const shash_table_t *ht, const char *key)


void shash_table_print(const shash_table_t *ht)


void shash_table_print_rev(const shash_table_t *ht)


void shash_table_delete(shash_table_t *ht)
