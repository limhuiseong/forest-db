CC = gcc
CFLAGS = -Wall -Iinclude
TARGET = forest-db

SRCS = db.c $(wildcard tokenizer/*.c)
OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o tokenizer/*.o $(TARGET)