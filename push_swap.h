/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlim <junlim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 20:49:24 by junlim            #+#    #+#             */
/*   Updated: 2026/10/04 19:25:27 by junlim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf.h"

typedef struct s_node
{
	int				num;
	int				index;
	struct s_node	*prev;
	struct s_node	*next;
}				t_node;

typedef struct s_stack
{
	t_node	*top;
	int		size;
}				t_stack;

//linked list manipulation
t_node	*ft_doubly_lstnew(int data);
void	ft_doubly_lstadd_back(t_stack *stack, t_node *new);
void	ft_clearstack(t_stack *stack);

#endif 