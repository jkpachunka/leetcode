CC = gcc
CFLAGS = -Wall -g
TARGET = longest_sub
SRC = longest_substring.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(TARGET)
