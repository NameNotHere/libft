/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otanovic <otanovic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:57:47 by otanovic          #+#    #+#             */
/*   Updated: 2024/11/21 16:57:48 by otanovic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_toupper(int c)
{
	if (c > 96 && c < 123)
	{
		return (c - 32);
	}
}
