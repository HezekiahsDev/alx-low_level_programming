/**
  *int_index - search engine for an int
  *@array: int array
  *@size: size of int array
  *@cmp: pointer to compare function
  *Return: first element
  *or -1 on error
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int indx, result;

	result = -1;
	if (array && cmp)
	{

		if (size <= 0)
		{
			return (result);
		}
		for (indx = 0; indx < size; indx++)
		{
			cmp(array[indx]);
			if (cmp(array[indx]) > 0)
			{
				result = indx;
				break;
			}
			if ((cmp(array[indx]) == (-1)))
			{
				return (result);
			}
		}

	}
	return (result);
}
