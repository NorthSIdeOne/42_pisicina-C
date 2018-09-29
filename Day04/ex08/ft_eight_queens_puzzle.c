/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andstefa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 09:47:38 by andstefa          #+#    #+#             */
/*   Updated: 2018/09/23 17:29:39 by andstefa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_board(int board[8][8])
{
	int		i;
	int		j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
}

int		ft_move_check(int	board[8][8], int line, int col)
{
	int		i;
	int		j;

	i = 0;
	while (i < 8)
	{	
		j = 0;
		while (j < 8)
		{
			if (i == line && j != col && board[i][j] == 1) /*** Verific pe linie ***/
				return (1);
			if (i != line && j == col && board[i][j] == 1) /*** Verific pe coloana ***/
				return (1);
			if (i != line && j != col && ((i - j) == (line - col)) && board[i][j] == 1) /*** Verific pe diagonala principala ***/
				return (1);
			if ( i != line && j != col && ((i + j) == (line + col)) && board[i][j] == 1) /*** Verific pe diagonala secundara ***/
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int 	ft_solution_8_queen(int	board[8][8], int col)
{
	if (col >= 8)
		return (0);

	int		i;

	i = -1;
	while (++i < 8)
	{
		if (ft_move_check(board, i, col))
		{
			board[i][col] = 1;
			if (ft_solution_8_queen(board, col))
				return (0);
			board[i][col] = 0;
		}
	}
	return (1);
}

int		ft_eight_queens_puzzle(void)
{
	int		board[8][8];
	int		i;
	int		j;
	int		nr;
	
	nr = 0;
	i = -1;
	while (++i < 8)
	{
		ft_board(board);
		if(ft_solution_8_queen(board,i))
		nr++;
	}
	return (nr);
}
