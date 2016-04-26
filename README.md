# Libft
My own library of useful functions in C.

# Functions list

- memset
- bzero
- memcpy
- memccpy
- memmove
- [memalloc] (#ft_memalloc)
- [memdel] (#ft_memdel)
- memchr
- memcmp
- [strdel] (#ft_strdel)
- strlen
- strdup
- [strclr] (#ft_strclr)
- strcpy
- strncpy
- strcat
- strncat
- strlcat
- [strnew] (#ft_strnew)
- strchr
- strrchr
- [striter] (#ft_striter)
- [striteri] (#ft_striteri)
- strstr
- strnstr
- strcmp
- strncmp
- atoi
- isalpha
- isdigit
- isalnum
- isascii
- isprint
- toupper
- tolower

# Details

| Function       	|  <a name="ft_memalloc">ft_memalloc</a> 	|
|----------------	|---------------------------------------	|
| Prototype      	| void * ft_memalloc(size_t size);  	|
| Description    	| Alloue (avec malloc(3)) et retourne une zone de mémoire “fraiche”. La mémoire allouée est initialisée à 0. Si l’allocation échoue, la fonction renvoie NULL.  	|
| Param. #1      	|  La taille de la zone de mémoire à allouer.  	|
| Retour         	| La zone de mémoire allouée.  	|
| Fonctions libc 	| malloc(3) 	|

----------

| Function       	|  <a name="ft_memdel">ft_memdel</a> 	|
|----------------	|-----------------------------------	|
| Prototype      	| void ft_memdel(void **ap);  	|
| Description    	| Prend en paramètre l’adresse d’un pointeur dont la zone pointée doit être libérée avec free(3), puis le pointeur est mis à NULL.  	|
| Param. #1      	|  L’adresse d’un pointeur dont il faut libérer la mémoire puis le mettre à NULL.  	|
| Retour         	| Rien.  	|
| Fonctions libc 	| free(3) 	|

----------

| Function       	|  <a name="ft_strnew">ft_strnew</a> 	|
|----------------	|-----------------------------------	|
| Prototype      	| char * ft_strnew(size_t size);  	|
| Description    	| Alloue (avec malloc(3)) et retourne une chaine de caractère “fraiche” terminée par un ’\0’. Chaque caractère de la chaine est initialisé à ’\0’. Si l’allocation echoue, la fonction renvoie NULL.  	|
| Param. #1      	|  La taille de la chaine de caractères à allouer.  	|
| Retour         	| La chaine de caractères allouée et initialisée à 0.  	|
| Fonctions libc 	| malloc(3) 	|

----------

| Function       	|   <a name="ft_strdel">ft_strdel</a> 	|
|----------------	|-------------------------------------	|
| Prototype      	| void ft_strdel(char **as);  	|
| Description    	| Prend en paramètre l’adresse d’une chaine de caractères qui doit être libérée avec free(3) et son pointeur mis à NULL.  	|
| Param. #1      	|  L’adresse de la chaine de caractère dont il faut libérer la mémoire et mettre le pointeur à NULL.  	|
| Retour         	| Rien.  	|
| Fonctions libc 	| free(3) 	|

----------

| Function       	|  <a name="ft_strclr">ft_strclr</a> 	|
|----------------	|-----------	|
| Prototype      	| void ft_strclr(char *s);  |
| Description    	| Assigne la valeur ’\0’ à tous les caractères de la chaine passée en paramètre.  |
| Param. #1      	| La chaine de caractères à clearer.  |
| Retour         	| Rien.	|
| Fonctions libc 	| Aucune	|

----------

| Function       	|  <a name="ft_striter">ft_striter</a> 	|
|----------------	|-------------------------------------	|
| Prototype      	| void ft_striter(char *s, void (*f)(char *));  |
| Description    	| Applique la fonction f à chaque caractère de la chaine de caractères passée en paramètre. Chaque caractère est passé par adresse à la fonction f afin de pouvoir être modifié si nécéssaire.  |
| Param. #1      	| La chaine de caractères sur laquelle itérer.  |
| Param. #2      	| La fonction à appeler sur chaque caractère de s.  |
| Retour         	| Rien.	|
| Fonctions libc 	| Aucune	|

----------

| Function       	|  <a name="ft_striteri">ft_striteri</a> 	|
|----------------	|---------------------------------------	|
| Prototype      	| void ft_striteri(char *s, void (*f)(unsigned int, char *));  |
| Description    	| Applique la fonction f à chaque caractère de la chaine de caractères passée en paramètre en précisant son index en premier argument. Chaque caractère est passé par adresse à la fonction f afin de pouvoir être modifié si nécéssaire.  |
| Param. #1      	| La chaine de caractères sur laquelle itérer.  |
| Param. #2      	| La fonction à appeler sur chaque caractère de s et son index.  |
| Retour         	| Rien.	|
| Fonctions libc 	| Aucune	|
