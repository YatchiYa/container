
SRCS			= main.cpp
OBJS			= $(SRCS:.cpp=.o)

CXX				= clang++
RM				= rm -f
CXXFLAGS		= -g -Wall -Wextra -Werror -I.
DEBUG 			= $(addprefix def_, $(MAKECMDGOALS))

NAME			= ft_containers

all:			$(NAME)

.cpp.o:
				$(CXX) $(CXXFLAGS) -D $(DEBUG) -o $@ -c $<

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) -D $(DEBUG) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			test all clean fclean re
