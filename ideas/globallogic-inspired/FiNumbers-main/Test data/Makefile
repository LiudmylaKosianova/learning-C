CC = gcc
CFLAGS = -Wall -Wextra -g

EXEC = test_fi
SRC = fi.c test_fi.c 
OBJ = $(SRC:.c=.o)
DEPS = $(SRC:.c=.d)

all: $(EXEC)

%.c:%.o 
	$(CC) $(CFLAGS) -MMD -MP -c $< -o $@

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

-include $(DEPS)

clean:
	$(RM) $(OBJ) $(DEPS) $(EXEC)
	