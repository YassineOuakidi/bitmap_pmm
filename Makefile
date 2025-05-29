CC = gcc
CFLAGS = -Wall -Wextra -I./inc -g
LDFLAGS =

SRC_DIR = src
INC_DIR = inc
TEST_DIR = test
OBJ_DIR = obj

SRC = $(SRC_DIR)/bitmap.c $(SRC_DIR)/bitmap_pmm.c $(SRC_DIR)/frame_allocator.c
TEST_SRC = $(TEST_DIR)/main.c
OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o) $(TEST_SRC:$(TEST_DIR)/%.c=$(OBJ_DIR)/%.o)

TARGET = test_program

.PHONY: all clean

all: $(TARGET)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(TEST_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(TARGET): $(OBJ)
	$(CC) $(LDFLAGS) $^ -o $@

clean:
	rm -rf $(OBJ_DIR) $(TARGET)
