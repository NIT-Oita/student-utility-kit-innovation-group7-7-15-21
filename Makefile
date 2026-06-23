CC = gcc
CFLAGS = -Wall -Wextra -std=c11

TARGET = attendance

SRCS = main.c \
       count_check.c \
       date.c \
       file_manager.c \
       judge.c

OBJS = $(SRCS:.c=.o)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(TARGET) *.o

run: $(TARGET)
	./$(TARGET)

.PHONY: clean run