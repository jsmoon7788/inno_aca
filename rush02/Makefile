CC = gcc
CFLGS = -Wall - Wextra -Werror
TARGET = rush-02
NAME = 
SRCS = 
$(TARGET) : make_list_from_input.o second_col.o main.o
	$(CC) $(CFAGS) -o $(TARGET) make_list_from_input.o second_col.o main.o
make_list_from_input.o : make_list_from_input.c
	$(CC) $(CFAGS) -o $(TARGET) make_list_from_input.o second_col.o main.o
$(NAME) :
	$(CC) $(CFAGS) -o $(TARGET) a.o b.o main.o
clean : 
	rm *.o rush-02
fclean : clean
	rm -f $(NAME)
