#include "../inc/bitmap.h"
#include <stdio.h>

int main(void) {
    printf("Initializing PMM...\n");
    pmm_init();

    printf("Allocating 3 frames:\n");
    int frame1 = pmm_alloc_frame();
    int frame2 = pmm_alloc_frame();
    int frame3 = pmm_alloc_frame();

    printf("Allocated frames at indices: %d, %d, %d\n", frame1, frame2, frame3);

    printf("\nBitmap status for frame 1:\n");
    bitmap_get_status(frame1);

    printf("Bitmap status for frame 2:\n");
    bitmap_get_status(frame2);

    printf("Bitmap status for frame 3:\n");
    bitmap_get_status(frame3);

    printf("\nFreeing frame 2 at index %d...\n", frame2);
    if (pmm_free_frame(frame2) == 0) {
        printf("Frame %d freed successfully.\n", frame2);
    } else {
        printf("Failed to free frame %d.\n", frame2);
    }

    printf("\nBitmap status after freeing frame 2:\n");
    bitmap_get_status(frame1);
    bitmap_get_status(frame2);
    bitmap_get_status(frame3);

    printf("\nAllocating another frame after free:\n");
    int frame4 = pmm_alloc_frame();
    printf("Allocated frame at index: %d\n", frame4);
    bitmap_get_status(frame4);

    printf("\nComplete bitmap (partial view):\n");
    
    for (int i = 0; i < 128; i++) {
        printf("%d ", memory[i]);
    }
    printf("\n");

    return 0;
}

