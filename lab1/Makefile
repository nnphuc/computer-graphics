CC = g++
CFLAGS = -g -Wall
OBJ = lab01_Polygon.o
OPENGL_FLAG = -lGL -lGLU -lglut

.PHONY: lab01_Polygon clean

lab01_Polygon: $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)  $(OPENGL_FLAG)

.cpp.o:
	$(CC) $(CFLAGS) -c $< $(OPENGL_FLAG)

clean:
	-rm *.o 
