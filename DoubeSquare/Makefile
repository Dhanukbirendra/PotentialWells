CC=gcc -c
LD=gcc
SRC=sign.c step.c main.c
OBJ=sign.o step.o main.o
step:
        $(CC) $(SRC)
        $(LD) $(OBJ) -o step.x -lm
        rm -rf *.o
clean:
        rm -rf *.x *.o
