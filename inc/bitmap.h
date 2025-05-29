#ifndef BITMAP_H
#define BITMAP_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>

#define MEMORY_SIZE (1024 * 1024)
#define FRAME_SIZE 4096
#define NUM_FRAMES (MEMORY_SIZE / FRAME_SIZE)

extern uint8_t memory[MEMORY_SIZE];

void pmm_init(void);
int pmm_alloc_frame(void);
int pmm_free_frame(size_t index);

void bitmap_init();
void bitmap_clear();
void bitmap_get_status(size_t index);
void bitmap_print();

int frame_alloc();
int frame_free(size_t index);




#endif
