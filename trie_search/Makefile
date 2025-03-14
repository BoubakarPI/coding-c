CC = gcc
CFLAGS = -Wall -Wextra -O2
SRC = tri_selection.c
OUT = tri_selection

all: $(OUT)

$(OUT): $(SRC)
	$(CC) $(CFLAGS) -o $(OUT) $(SRC)

run: all
	./$(OUT)

clean:
	rm -f $(OUT)
