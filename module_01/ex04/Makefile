# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 17:40:02 by gbaumgar          #+#    #+#              #
#    Updated: 2022/12/02 09:49:27 by gbaumgar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= Sed_is_for_losers
INC_DIR			= ./include/
SRC_DIR			= ./src/
OUT_DIR			= ./obj/

SRC				= 	main.cpp \

SRCC			= ${addprefix ${SRC_DIR}, ${SRC}}
OBJS			= ${SRCC:%.cpp=${OUT_DIR}%.o}

INCLUDE			= -I${INC_DIR}

CC				= c++
CFLAGS			= -g -std=c++98 -Wall -Wextra
CFLAGS			+= -Werror
MKDIR			= mkdir -p
RM				= rm -rf

all: ${NAME}

${NAME}: ${OBJS}
	@${CC} -o ${NAME} ${INCLUDE} ${OBJS} ${CFLAGS}

${OUT_DIR}%.o: %.cpp Makefile
	@${MKDIR} ${OUT_DIR}
	@${MKDIR} ${@D}
	@${CC} ${CFLAGS} ${INCLUDE} $< -c -o $@

clean:
	@${RM} ${OBJS}
	@${RM} ${OUT_DIR}

fclean:	clean
	@${RM} ${NAME}

re: fclean ${NAME}

bonus:	all

.PHONY:	all clean fclean re bonus
