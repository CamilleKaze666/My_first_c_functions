CC=gcc
INC=-I ./include/
SRC=src/
EXEC=main
BUILD_DIR=.
BIN=bin/
LIB=lib/
all: $(EXEC)

main: $(SRC)Main.c $(LIB)int_is_in_list.o $(LIB)my_catstr.o $(LIB)my_num_to_str.o $(LIB)my_putchar.o \
	$(LIB)my_putstr.o $(LIB)my_str_is_num.o $(LIB)my_str_to_num.o $(LIB)my_strlen.o
	$(CC) $(INC) -o $(BIN)$@.exe $^

$(SRC)%.o : $(SRC)%.c
	$(CC) $(INC) -o $@ -c $<

clean: 
	rm -rf ./$(LIB)*.o

fclean: clean
	rm -rf $(BIN)$(EXEC).exe

re: fclean all