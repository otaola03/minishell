/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 19:51:51 by xmatute-          #+#    #+#             */
/*   Updated: 2022/09/09 19:37:58 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint( int arg )
{
	if (arg >= 32 && arg <= 126)
		return (1);
	return (0);
}
