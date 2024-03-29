CC = x86_64-w64-mingw32-gcc
CFLAGS = -Wall -Werror -msse2


LIB_NAME_V4 = vector4
LIB_NAME_M4 = mat4x4

LIB_DIR = libs

LIB_FLAG_V4 = -l$(LIB_NAME_V4)
LIB_FLAG_M4 = -l$(LIB_NAME_M4)


SRC = src/main.c
OBJ = obj/main.obj
HEADER_1 = include/types.h
HEADER_2 = include/math_types.h
HEADER_3 = include/mat4x4.h
HEADER_4 = include/vector4.h




all: main

main: $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^ -L$(LIB_DIR) $(LIB_FLAG_V4) $(LIB_FLAG_M4)

$(OBJ): $(SRC) $(HEADER_1) $(HEADER_2) $(HEADER_3) $(HEADER_4)
	$(CC) $(CFLAGS) -c -o $@ $<


clean:
	del /F /Q $(OBJ) main
