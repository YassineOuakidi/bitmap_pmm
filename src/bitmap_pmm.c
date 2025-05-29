

#include "../inc/bitmap.h"


uint8_t memory[MEMORY_SIZE];

void pmm_init()
{
	bitmap_init();
}

int pmm_alloc_frame()
{
	return frame_alloc();
}

int pmm_free_frame(size_t index)
{
	return frame_free(index);
}
