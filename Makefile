##
## EPITECH PROJECT, 2026
## Project - Arcade
## File description:
## libarcade helper makefile
##

NAME = libarcade

.PHONY: all no-repo

all:

no-repo:
	@printf "\033[31m%s\033[0m\n" "removing $(NAME) repository"
	@rm -rf .git
	@rm -rf LICENSE
	@rm -rf README.org
	@rm -rf Makefile
