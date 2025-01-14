# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drabarza <drabarza@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/15 08:08:17 by drabarza          #+#    #+#              #
#    Updated: 2025/01/13 16:11:43 by drabarza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN = \033[3;32m
GREENS = \033[7;32m
YELLOW = \033[3;33m
RED = \033[3;31m
NC = \033[0m

NAME = megaphone
CCP = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
SRC =	megaphone.cpp
OBJ = $(SRC:.cpp=.o)
CURRENT_DATE = $(shell date +"%d/%m/%Y %H:%M:%S")
MAKEFLAGS += -s

all: header $(NAME)

$(NAME) : $(OBJ)
	@${CCP} ${FLAGS} $(OBJ) -o $@

header:
	@clear
	@echo "${GREEN} ██████╗ ██████╗  ██████╗"
	@echo "██╔════╝██╔═████╗██╔═████╗"
	@echo "██║     ██║██╔██║██║██╔██║"
	@echo "██║     ████╔╝██║████╔╝██║"
	@echo "╚██████╗╚██████╔╝╚██████╔╝"
	@echo " ╚═════╝ ╚═════╝  ╚═════╝"
	@echo "Compilation in progress...${NC}"

%.o : %.cpp
	@${CCP} ${FLAGS} -c $< -o $@
	@echo "${CURRENT_DATE} ${GREENS}[CMD]${NC}${GREEN} - $(basename $<)${NC}"

clean:
	@echo "${RED}Cleaning object files...${NC}"
	@rm -f ${OBJ}
	@echo "${RED}Cleaning completed.${NC}"

fclean: clean
	@rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re header