/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginwan <ginwan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 11:42:11 by ginwan            #+#    #+#             */
/*   Updated: 2026/10/20 09:54:49 by ginwan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
	** Tested Functions:
	1 - ft_atoi  ft_atoi(const char *nptr)
	2 - ft_bzero  void ft_bzero(void *s, size_t n)
	3 - ft_memset  void *ft_memset(void *s, int c, size_t n)
	4 - ft_isalnum  int ft_isalnum(char c)
	5 - ft_isalpha  int ft_isalpha(char c)
	6 - ft_isascii  int ft_isascii(int c)
	7- ft_isdigit  int ft_isdigit(char c)
	8- ft_isprint  int ft_isprint(char c)
	9- ft_itoa  char *ft_itoa(int n)
	10- ft_strchr  char *ft_strchr(const char *s, int c)
	11- ft_strlen  size_t ft_strlen(const char *s)
	12- ft_toupper  int ft_toupper(int c)
	13- ft_tolower  int ft_tolower(int c)
	14- ft_strrchr  char *ft_strrchr(const char *s, int c)
	15- ft_strncmp  int ft_strncmp(const char *s1, const char *s2, size_t n)
	16- ft_strlcpy  size_t ft_strlcpy(char *dest, const char *src, size_t size)
	17- ft_strlcat  size_t ft_strlcat(char *dest, const char *src, size_t size)
	18- ft_substr  char *ft_substr(char const *s, unsigned int start, size_t len)
	
	19- ft_putchar_fd  void ft_putchar_fd(char c, int fd)
	20- ft_putstr_fd  void ft_putstr_fd(char *s, int fd)
	21- ft_putendl_fd  void ft_putendl_fd(char *s, int fd)
	22- ft_putnbr_fd  void ft_putnbr_fd(int n, int fd)
	23- ft_strdup  char *ft_strdup(const char *s)
	
	24- ft_strjoin  char *ft_strjoin(char const *s1, char const *s2)
	25- ft_striteri  void ft_striteri(char *s, void (*f)(unsigned int, char *))
	26- ft_strmapi  char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
	27- ft_split  char **ft_split(char const *s, char c)

	28- ft_memchr  void *ft_memchr(const void *s, int c, size_t n)
	29- ft_memcpy  void *ft_memcpy(void *dest, const void *src, size_t n)
	30- ft_memcmp  int ft_memcmp(const void *s1, const void *s2, size_t n)
	31- ft_memmove  void *ft_memmove(void *dest, const void *src, size_t n)
	32- ft_calloc  void *ft_calloc(size_t nmemb, size_t size)
	33- ft_lstnew  t_list *ft_lstnew(void *content)
	34- ft_lstadd_front  void ft_lstadd_front(t_list **lst, t_list *new)
	35- ft_lstadd_back  void ft_lstadd_back(t_list **lst, t _list *new)
	36- ft_lstclear  void ft_lstclear(t_list **lst, void (*del )(void *))
	37- ft_lstdelone  void ft_lstdelone(t_list *lst	, void (*del)(void *))
	38- ft_lstiter  void ft_lstiter(t_list *lst, void (*f)(void *))
	39- ft_lstlast  t_list *ft_lstlast(t_list *lst)
	40- ft_lstsize  unsigned int ft_lstsize(t_list *lst)
	41- ft_lstmap  t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
	42- ft_strnstr  char *ft_strnstr(const char *haystack, const char *needle, size_t len)
	43- ft_strtrim  char *ft_strtrim(char const *s1, char const *set)

*/
int	main(void)
{
	char	*result;
	result = ft_substr("Hello, World!", 14, 5);
	printf("Substring: %s\n", result);
	free(result);
	return 0;
}
