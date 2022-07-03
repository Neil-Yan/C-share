CC = gcc # compiler
OBJ = filename # target/object file name
EXE_FILE = $(OBJ).exe # executable file
C_FILE = $(OBJ).c # C file name
CFLAGS = -Wall -Wextra -Wno-newline-eof -Wno-unused-parameter -std=c2x -pedantic -Wshadow -Wformat=2 -Wfloat-equal -Wconversion -Wshift-overflow -Wcast-qual -Wcast-align -fstack-protector-all -fno-sanitize-recover=all -fstack-protector -g# mode

all:
	$(CC) $(C_FILE) -o $(OBJ)
exec:
	./$(EXE_FILE)
clean:
	del *.o
	del *exe

# 	del $(EXE_FILE)
# 	rm -rf *.exe
# 	rm -rf *.o
