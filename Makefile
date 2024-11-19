CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = bzero.c isalnum.c isalpha.c isascii.c isdigit.c isprint.c memcpy.c memmove.c memset.c strlcat.c strlcpy.c strlen.c
OBJ = $(SRC:.c=.o)

EXEC = PROGRAMHEHE

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC)$(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXEC)
