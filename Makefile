NAME 	= libftprintf.a
FILES	= 	ft_printf		\
			ft_bx			\
			ft_c			\
			ft_d			\
			ft_lx			\
			ft_p			\
			ft_s			\
			ft_u			\
			ft_verif		

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra

.c.o: 
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME} 	:	${OBJS}
				ar rcs ${NAME} ${OBJS}
				
all			:	${NAME}

clean		:
				rm -rf ${OBJS} ${OBJS_B}
fclean 		:	clean
				rm -rf ${NAME}
re 			:	fclean all

.PHONY: clean re all fclean
