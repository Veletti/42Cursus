/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 21:22:33 by rvela-fe          #+#    #+#             */
/*   Updated: 2023/05/27 00:32:13 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		*line;
	static char	*buffer = NULL;

	line = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		if (buffer != NULL)
		{
			free(buffer);
			buffer = NULL;
		}
		return (NULL);
	}
	buffer = file_reader(fd, buffer);
	if (!buffer)
		return (NULL);
	line = line_isolator(buffer);
	buffer = next_line(buffer);
	return (line);
}
/*
Línea 17:'get_next_line' recibe como argumento 'fd', que es el descriptor de archivo del cual se leerán las líneas.
Línea 19: Se declara la variable 'line' que se utilizará para almacenar la línea leída.
Línea 20: Se declara la variable 'buffer' que se utilizará para almacenar el contendico del archivo.
Línea 22: Establecemos 'line' en 'NULL' para indicar que aún no se ha leído ninguna línea.
Línea 23: Verificamos: 
	1. Que 'fd' sea válida. Es decir que el resultado sea mayor o igual a 0;
	2. Que 'BUFFER_SIZE' sea válido. Es decir que el resultado sea mayor a 0;
	3. Que se pueda leer el archivo 'fd'. Es decir que el resultado sea mayor o igual a 0;
Línea 25: Si no se cumple las condiciones se liberará el 'buffer' siempre y cuando no sea 'NULL'
Línea 30: Devolveremos 'NULL' indicando que ha habido un error. 
Línea 32: Se llama a la función 'file_reader' para leer los datos del archivo y almacenarlos en 'buffer'.
	- Esta función se encargará de leeer los datos en bloques y manjera el almacenamiento en el 'buffer'.
Línea 33: Si 'buffer' es nulo, significa que no se pudieron leer datos en el archivo y se devuelve 'NULL'.
Línea 35: Se llama a la función 'line_isolator' para aisalar la línea del contenido del 'buffer'. 
	- La función econtrará la  línea dentro del 'buffer' y la extraerá asignándola a 'line'.
	  Si no se encuentra una línea completa, se devolverá 'NULL'.
Línea 36: Se llama la función 'next_line' para mover el 'buffer' al inicio de la siguiente  línea o
		al final del archivo si no quedan más líneas.
	- Esta función se encargará de ajustar el 'buffer' para que apunter al siguente contendio después de la línea leída.
Línea 37: Devolvermos el resultado asingando a la variable 'line'
	- Contendrá la línea leída del archivo o 'NULL' en el caso que la función 'line_isolator' haya devuelto 'NULL'.
*/

char	*file_reader(int fd, char *buffer)
{
	char	*data;
	int		bytes;

	data = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!data)
		return (NULL);
	data[0] = '\0';
	bytes = 1;
	if (!buffer)
		buffer = ft_calloc(1, 1);
	while (bytes != 0 && !ft_strchr(buffer, '\n'))
	{
		bytes = read(fd, data, BUFFER_SIZE);
		if (bytes == -1)
		{
			free(data);
			return (NULL);
		}
		data[bytes] = '\0';
		buffer = ft_join_and_free(buffer, data);
	}
	free(data);
	return (buffer);
}
/*
Línea 63: 'file_reader' recibe como argumento 'fd' y un puntero a un buffer. 
Línea 65: Se declara un puntero 'data' que se utilizará para alamacenar temporalmente los datos leídos del archivo. 
Línea 66: Se declara un entero 'bytes' que se utilizará para almacenar el número de bytes leídos del archivo. 
Línea 68: Se asigna memoria dinámica: 
	- La cantidad de memoria asignada es 'BUFFER_SIZE + 1' donde 'BUFFER_SIZE' es un valor definido por el usuario.
	- Se utiliza 'sizeof(char)' para asegurar un tamaño correcto para un elemento 'char'.
Línea 69: Si la asignación de memoria falla, se devuelve 'NULL' para indicar que ha habido un error. 
Línea 71: Se define la primera posición de 'data' como un caracter nulo. 
	- Esto iniciliza 'data' como una cadena vacía.
Línea 72: Se inicialia 'bytes' con el valor 1.
Línea 73: Se verifica si 'buffer' es 'NULL'. Lo que indica que aún no se le ha asignado memoria.
	- Si es así se llama la función 'ft_calloc()' para asignar memoria y establecer todos los bytes de memoria a cero.
	- Esto garantizará que 'buffer' se inicialice como una cadena vacía si no se ha asignado previamente memoria. 
Línea 75: Mientras 'bytes' no sea igual a 0 y no se encuentre el caracter '\n' dentro del 'buffer' se inicia el bucle 'while'
	- Línea 77: Se llama a la función 'read()' para leer los datos del 'fd'. 
		> Los datos se leen en 'data' con un tamaño máximo especificado por 'BUFFER_SIZE'.
		> El número de bytes leídos se asigna a la variable 'bytes'.
	- Línez 78: Verificamos si la variable 'bytes' es igual a -1. 
		> Si es true, indica que hay un error en la lectura del archivo. 
		> Si es true, se libera la memoria asignada en 'data' y devolvemos 'NULL'.
	- Línea 83: Al final de los daots leídos en 'data' establecemos el caracter '\0'. 
		> Esto asegura que 'data' se trate como una cadena de carácteres válida.
	- Línea 84: Se llama la función ft_join_and_free() para concatenar 'buffer' y 'data' y liberar la memoria asignada previamente
				en 'buffer'
		> El resultado de la concatenación se asigna a 'buffer'.
Línea 86: Se libera la memoria asignada en 'data'. 
	- Ya no se necesita 'data' después de concatenar los datos y asignarlo a 'buffer'. 
Línea 87: Se devuleve el puntero 'buffer' que contiene los datos leídos del archivo hasta el momento. 
	- Si no se ha leído ningún dato o ha ocurrido un error, 'buffer' puede ser 'NULL'.
*/

char	*line_isolator(char *buffer)
{
	char	*line;
	int		i;

	i = 0;
	if (!buffer[i])
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	line = (char *)malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] == '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}
/*
Línea 119: 'line_isolator' reciber como argumento un puntero 'buffer'
Línea 121: Se declara un puntero 'line' que se utilizará para almacenar la línea aislada del buffer. 
Línea 122: Se declara un entero 'i' que se utilizará como contador.
Línea 124: Inicilizamos 'i' a cero.
Línea 125: Verificamos si el primer caracter de 'buffer' es 'NULL' lo cual indica que el 'buffer' está vacío.
	- Si es así, se devuelve 'NULL' para indicar que no hay línea para aislar y que hay un error.
Línea 127: Se llama la función 'ft_strlen()' para saber la longitud de la línea en el 'buffer'.
	- Se asignará el resultado en la variable 'i'.
Línea 128: Reservamos en el 'heap':
	- La cantidad de memoria a reservar es (i + 2)
		> 'i' es la longitud de la línea en el buffer.
		> '2' es para garantizar que haya suficiente espacio para incluir '\n' y '\0'.
Línea 129: Verificamos la asignación de memoria.
	- Si ha habido un error, devolvemos 'NULL'.
Linea 131: Reiniciamos el contado a 0.
Línea 132: Mientras haya caracteres en 'buffer' y no encontremos un '\n':
	- Línea 134: Copiamos el carácter actual de 'buffer' a 'line'.
	- Línea 135: Incrementamos el contador al siguiente carácter.
Línea 137: Verificamos si se ha encontrado un '\n' en 'buffer'
	- Línea 139: Se copia el carácter '\n' a 'line'.
	- Línea 140: Incrementamos el contado al siguiente carácter.
Línea 142: Se agrega el carácter '\0' al final de 'line'.
	- Esto asegura que 'line' se trate como una cadena de caracteres válida.
Línea 143: Se devuelve el puntero 'line' que contiene la línea aislada del 'buffer'
	- Si no se econtró ninguna línea o se produjo un error, 'line' pude ser 'NULL'.		
*/

char	*next_line(char *buffer)
{
	int	i;
	int	j;
	char	*next_line;

	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		i++;	
	}
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	next_line = (char *)malloc(sizeof(char) * (ft_strlen(buffer) -i + 1));
	if (!next_line)
		return (NULL);
	i++;
	j = 0;
	while (buffer[i])
	{
		next_line[j++] = buffer[i++];
	}
	next_line[j] = '\0';
	free(buffer);
	return (next_line);
}
/*
Línea 173: 'next_line' recibe como argumento un putero 'buffer'
Línea 175 y 176: Declaramos las variables enteras 'i' y 'j' que se utilizaran como contador.
Linea 177: Se declara un puntero 'next_line' que se utilizará para almacenar la siguiente línea después de la actual.
Línea 179: Inicializamos el contador 'i' a 0. 
Línea 180: Ejecutamos un bucle 'while' mientras haya caracteres en 'buffer' y no se encuentre '\n'.
	- Se incrementerá el valor de 'i' en 1 para saber la posición del carácter después del '\n' en el 'buffer'.
Línea 184: Si al final de 'buffer' no hay más líneas.
	- Línea 186: Liberaremos la memoria asiganda a 'buffer'.
	- Línea 187: Se devuelve 'NULL'.
Línea 189: Reservamos memoria en 'heap':
	- La cantidad de memoria es igual a la longitud restante del 'buffer' después de la línea actual más 1.
		> 'i' representa la posición del primer carácter después de '\n' en el 'buffer', la resta '-i' se realiza
		  para obtener la longitud restante del buffer desde esa posición hasta el final.
		> '1' se agrega para reservar espacio para el carácter '\0'.
		> En resutma '(-i + 1) se utiliza pra garantizar que se reserve suficiente memoria para almacenar la parte
		  restante del buffer y el carácter que indicar el final de la cadena.
Línea 190: Verificamos la asignación de memoria.
	- Si ha habido un error, devolvemos 'NULL'.
Línea 192 y 193: Se incirmenta el valor de 'i' para saltar el primer carácter después de '\n' y inicializamos 'j' como
				 contador para el próximo bucle.
Línea 194: Ejectumaos un bucle 'while' mientras haya caracteres en 'buffer'.
	- Línea 196: Se copian los carácteres del 'buffer' a 'nex_line' incrementando el siguiente carácter y posición.
Línea 198: Se agrega el carácter '\0' al final de 'next_line'.
	- Así aseguramos que sea tratado como una cadena de caracteres válida.
Línea 199: Se libera la memoria asiganada para 'buffer' original, ya que ya no es necesario.
Línea 200: Se devuelve el puntero 'next_line' que contiene el contendio del buffer después de la línea actual.
	- Si hubo un error o no hay más contenido, 'next_line' puede ser 'NULL'.
*/

char	*ft_join_and_free(char *buffer, char *data)
{
	char	*temp;

	temp = ft_strjoin(buffer, data);
	free (buffer);
	return (temp);
}
