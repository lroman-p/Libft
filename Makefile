/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Makefile                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroman-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:50:47 by lroman-p          #+#    #+#             */
/*   Updated: 2023/10/06 15:14:01 by lroman-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

LIBRARY_NAME = libft.a

CC = gcc
CFLAGS = - Wall - Wextra -Werror

SRC_DIr = src
OBJ_DIR = obj

SCR_FILES = $(wilcard $(SCR_DIR)/*.c)

OBJ_FILES = $ (patsubst $ (SCR_DIR)%.c,$(OBJ_DIR)/%.o,$(SCR_FILES))

$