SRCS			=	main.cpp\
					Replacer.cpp

HEAD			= 	Replacer.hpp
NAME			= 	Replacer

OBJS			= 	$(SRCS:.cpp=.o)


CPP				= 	c++
RM				= 	rm -f
FLAGS			= 	-Wall -Wextra -Werror -std=c++98

$(NAME):		$(OBJS)
				$(CPP) $(FLAGS) -o $(NAME) $(OBJS)

$(OBJS):		$(HEAD)

all:			$(NAME)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re