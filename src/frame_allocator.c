
#include "../inc/bitmap.h"


int frame_alloc()
{
	size_t 		i;
	size_t		j;

	i = 0;
	while( i < MEMORY_SIZE)
	{
		j = i;
		int not_null = 0;
		while(j< i + FRAME_SIZE)
		{
			if(memory[j] == 1)
			{
				not_null = 1;
				break;
			}
			j++;
		}
		if(not_null==0)
		{
			memset(memory + i , 1 , FRAME_SIZE);
			return i ;
		}
		else 
			i += FRAME_SIZE;
	}
	return -1;
}

int frame_free(size_t index)
{
	if(index>=MEMORY_SIZE)
		return -1;
	memset(memory + index , 0 , FRAME_SIZE);
	return 0;
}

