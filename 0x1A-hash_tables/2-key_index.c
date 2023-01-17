/**
 * key_index -  gives you the index of the key
 * @key: unsigned char that is thee key in the hashtable
 * @size: size of the array of the hashtable
 *
 * Return: index of the array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;
	int j;

	for (j = 0; key[j]; j++)
	{

		i += key[j];
	}

	return (i % size);
}
