# =============================================================================
# Command Variables
# =============================================================================

DIR_INCS	= ./
OBJS		= $(SRCS:.cpp=.o)

# =============================================================================
# Command Variables
# =============================================================================

CC			= c++
RM			= rm -rf
ifdef DEBUG
	CFLAGS	= --std=c++98 -g3 -fsanitize=address
else ifdef LEAKS
	CFLAGS	= --std=c++98 -g3
else
	CFLAGS	= --std=c++98 -Wall -Wextra -Werror
endif

# =============================================================================
# Target Generating
# =============================================================================

%.o		: %.cpp
	$(CC) $(CFLAGS) -I $(DIR_INCS) -c $< -o $@

$(NAME)	: $(OBJS) $(INCS)
	$(CC) $(CFLAGS) -I $(DIR_INCS) $(OBJS) -o $(NAME)

# =============================================================================
# Rules
# =============================================================================

.PHONY	: all
all		: $(NAME)

.PHONY	: clean
clean	:
	$(RM) $(OBJS)

.PHONY	: fclean
fclean	: clean
	$(RM) $(NAME)

.PHONY	: re
re		:
	make fclean
	make all

.PHONY	: debug
debug	:
	make DEBUG=1 all

.PHONY	: leaks
leaks	:
	make LEAKS=1 all
