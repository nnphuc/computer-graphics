CC = g++
CFLAGS = -g -Wall -lm
OPENGL_FLAG = -lGL -lGLU -lglut

objects = Cube Rose Lab03_SnowFlake Lab03_Radiod
all: $(objects)

$(objects): %: %.cpp
	$(CC) -o $@ $< $(CFLAGS) $(OPENGL_FLAG) 

