CC = gcc

CFLAGS = -Wall

TARGET = attendance

SRCS = main.c date.c check.c

OBJS = $(SRCS:.c=.o)

$(TARGET): $(OBJS)

	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.c

	$(CC) $(CFLAGS) -c $<

clean:

	rm -f $(OBJS) $(TARGET)
 