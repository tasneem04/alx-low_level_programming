#ifndef _LISTS_H_
#define _LISTS_H_
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


size_t print_list(const list_t *h);

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;




#endif
