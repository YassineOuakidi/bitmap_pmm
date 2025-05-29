# Bitmap Physical Memory Manager (PMM)

## Overview

This project implements a simple **bitmap-based physical memory manager (PMM)** in C. It simulates physical memory management by tracking allocated and free memory frames using a bitmap stored in an array.

- Total simulated memory size: 1 MB (1,048,576 bytes)
- Frame size: 4 KB (4096 bytes)
- Number of frames: 256

Each bit in the bitmap corresponds to one memory frame, where `1` means allocated and `0` means free.

---

## Directory Structure
```
├── inc
│   └── bitmap.h
├── Makefile
├── README.md
├── src
│   ├── bitmap.c
│   ├── bitmap_pmm.c
│   └── frame_allocator.c
├── test
│   └── main.c
```

---

## Features

- Initialize and clear the bitmap representing physical memory.
- Allocate a free frame (4KB block) in simulated memory.
- Free a previously allocated frame.
- Print the status of memory frames for debugging.
- Simple test program demonstrating allocation, freeing, and status printing.

---

## How to Build

Make sure you have `gcc` installed.

```bash
make
```

This will compile the source code and build an executable named `test_program`.


## How to Run Tests

Run the test program:

```bash
./test_program
```

The test will:

- Initialize the memory manager.
- Allocate several frames.
- Display the bitmap status for allocated frames.
- Free a frame and verify the change.
- Allocate a new frame to test reuse.
- Print a snapshot of the bitmap.

## Future Improvements

- Implement more efficient bitmap operations using bitwise operators.
- Support allocating multiple contiguous frames.
- Add error handling and boundary checks.
- Integrate with actual hardware memory management in kernel-level projects.

## License

This project is provided as-is for educational purposes.
