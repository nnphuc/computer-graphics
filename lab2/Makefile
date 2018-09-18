CC = g++
CFLAGS = -g -Wall
OBJ = lab02_Rotate.o
OPENGL_FLAG = -lGL -lGLU -lglut

.PHONY: lab02_Rotate clean

lab02_Rotate: $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)  $(OPENGL_FLAG)

.cpp.o:
	$(CC) $(CFLAGS) -c $< $(OPENGL_FLAG)

clean:
	-rm *.o 
