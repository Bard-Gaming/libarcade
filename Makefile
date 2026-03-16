##
## EPITECH PROJECT, 2026
## Project - Arcade
## File description:
## libarcade helper
## makefile
##

NAME = libarcade

TO_REMOVE = .git/		\
			blob/		\
			LICENSE		\
			README.org	\
			Makefile	\

.PHONY: all no-repo

all:

no-repo:
	@printf "\033[31m%s\033[0m\n" "removing $(NAME) repository..."
	@rm -rf $(TO_REMOVE)
	@printf "\033[31m%s\033[0m\n" "removed $(NAME) repository"
