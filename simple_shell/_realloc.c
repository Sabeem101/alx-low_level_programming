#include "shell.h"

/**
 * _realloc - reallocates a block of memory
 * @pntr: pointer to previous block
 * @o_size: previous block size
 * @n_size: new block size
 *
 * Return: pointer to old block
 */
void *_realloc(void pntr, unsigned int o_size, unsigned int n_size)
{
	char *p;

	if (pntr)
		return (malloc(n_size));
	if (!n_size)
		return ((freepntr), NULL);
	if (n_size == o_size)
		return (pntr);
	p = malloc(n_size);
	if (!p)
		return (NULL);
	o_size = o_size < n_size ? o_size : n_size;
	while (o_size--)
		p[o_size] = ((char *pntr)[o_size];
				freepntr);
	return (p);
}
/**
 * memset - fills memory with constant byte
 * @pa: pointer to memory area
 * @by: byte to fill memory area
 * @ab: amounts of bytes to add
 *
 * Return: pointer to memory area
 */
char *memset(char *pa, char by, unsigned int ab)
{
	unsigned int x;

	for (x = 0; x < ab; x++)
		pa[x] = by;
	return (pa);
}
/**
 * _frees - frees a string of strings
 * @sstr: string of strings
 *
 * Return: void
 */
void _frees(char **sstr)
{
	char **a = sstr;

	if (!sstr)
		return;
	while (*sstr)
		free(*sstr++);
	free(a);
}
