*Este proyecto ha sido creado como parte del currículo de 42 por frgonzal.*

 # **LIBFT**
 Se trata de una libreria estatica realizada como proyecto inicial del currículo de 42. Esta creada a partir de funciones comunes que nos podrian resultar utiles en proyectos futuros.

 ## **DESCRIPCIÓN**
El objetivo de Libft es una prueba práctica de aprendizaje de fundamentos de C, asi como manejo de memoria, de strings, descriptores de ficheros y estructuras enlazadas.
El resultado es una libreria estátia libft.a, con el header libft.h que contiene los prototipos de multiples funciones y la definición de la estructur t_list.

## **INSTRUCCIONES**
El proyecto incluye un Makefile con las reglas estándar de 42:

make: Compila los archivos fuente y genera la librería estática libft.a.

make clean: Elimina los archivos objeto (.o) generados durante la compilación.

make fclean: Elimina los archivos objeto y la librería libft.a.

make re: Realiza un fclean seguido de un all (recompilación completa).

## **RECURSOS**
Los recursos realizados han sido el man, y en algun momento la IA para que explique en mas profundidad alguna función

## **DETALLES LIBRERIA**
Manipulación de memoria: ft_memset, ft_bzero, ft_memcpy, ft_memmove, ft_memchr, ft_memcmp, ft_calloc.

Manipulación de cadenas (strings): ft_strlen, ft_strlcpy, ft_strlcat, ft_strchr, ft_strrchr, ft_strnstr, ft_strncmp, ft_strdup, ft_substr, ft_strjoin, ft_split, ft_itoa, ft_strmapi, ft_striteri.

Comprobación y conversión de caracteres: ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint, ft_toupper, ft_tolower, ft_atoi.

Funciones de Esctritura de archivo: ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd.

Funciones de Listas enlazadas:
    
    --Añadir nodos:ft_lstnew, ft_lstadd_front,ft_lstadd_back.
    --Tamaño de la lista: ft_lstsize.
    --Devolver último elemento de la lista: ft_lstlast.
    --Eliminar nodos: ft_lstdelone, ft_lstclear.
    -- iterar y aplicar una funcion a una lista: ft_lstiter, ft_lstmap. 