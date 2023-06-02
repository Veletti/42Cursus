/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 23:07:16 by rvela-fe          #+#    #+#             */
/*   Updated: 2023/06/02 23:22:09 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

int	main(void)
{
	int		fd;
	char	*result = (char *)1;

	fd = open("file.txt", O_RDONLY);
	if (fd < 0)
		return (printf("Error al tratar abrir el archivo!\n"));
	while (result)
	{
		result = get_next_line(fd);
		printf("%s", result);
	}
	close(fd);
	return(0);
}

/*
Línea 18: Declaración de la variable llamada 'fd'.
Línea 19: Declaración de un puntero llamado 'result'
		se iniciali con un valor de 1.
Línea 21: Se abre el archivo en modo de 'solo lectura'
		y se asigna el descriptor de archivo a 'fd'.
Línea 22: Si el valodr del 'fd' es menor que 0.
		Indica un error al abrir el archivo.
Línea 24: Mientras el valor de 'result' sea distinto a 'NULL'
		Se llama la función 'get_next_line' para obtener la 
		siguiente línea del archivo que se asigna a 'result'
Línea 27: Se imprime el contenido de 'result'.
Línea 29: Se cierra el archivo.
*/