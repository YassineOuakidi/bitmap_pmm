
#include "../inc/bitmap.h"


void bitmap_init()
{
	memset(memory , 0 , MEMORY_SIZE);
}

void bitmap_clear()
{
	memset(memory , 0 , MEMORY_SIZE);
}

void bitmap_get_status(size_t index)
{
	size_t 		i;
	
	i = index;
	while(i < index + FRAME_SIZE && i < MEMORY_SIZE)
	{
		printf("%d " , memory[i]);
		i++;
	}
	
	printf("\n");
}


void bitmap_print()
{
	size_t		i;
	
	i = 0;
	
	while(i < MEMORY_SIZE)
	{
		printf("%d " , memory[i]);
		i++;
	}
	printf("\n");
}
