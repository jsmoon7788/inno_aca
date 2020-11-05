CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGET a.out
$(TARGET) : main.o 
	$(CC) $(CFLAGS) -o $(TARGET) main.o
main : main.c
	$(CC) $(CFLAGS) -o $(TARGET) main.o main.c


NAME = 
SRCS = 
$(NAME) :
	$(CC) $(CFLAGS) -o $(NAME) $(SRCS)

clean : 
	rm *.o a.out
fclean : clean
	rm -f $(NAME)
