/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekuchel <ekuchel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:24:09 by ekuchel           #+#    #+#             */
/*   Updated: 2023/03/03 16:29:58 by ekuchel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Desc: tests for a decimal digit character.
Return: The isdigit() and isnumber() functions return zero if the character
tests false and return non-zero if the character tests true.*/

int	ft_isdigit(int c)
{
	if ((c >= 48 && c < 58))
		return (1);
	return (0);
}
