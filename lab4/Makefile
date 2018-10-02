CC = g++
CFLAGS = -g -Wall -lm
OPENGL_FLAG = -lGL -lGLU -lglut

objects = Lab04_Texture
all: $(objects)

$(objects): %: %.cpp
	$(CC) -o $@ $< $(CFLAGS) $(OPENGL_FLAG) 

