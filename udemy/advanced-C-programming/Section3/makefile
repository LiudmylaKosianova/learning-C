CC = gcc
CFLAGS = -Wall -Wextra -g 

SRC = start.c 

TARGET = nu

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $^ -o $@ 

clean:
	rm -f $(TARGET)