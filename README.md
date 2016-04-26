# Libft
My own library of useful functions in C.

# Functions list

- memset
- bzero
- memcpy
- memccpy
- memmove
- [memalloc] (#ft_memalloc)
- memchr
- memcmp
- strlen
- strdup
- strcpy
- strncpy
- strcat
- strncat
- strlcat
- strchr
- strrchr
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
|----------------	|---	|
| Prototype      	| void * ft_memalloc(size_t size);  	|
| Description    	| Alloue (avec malloc(3)) et retourne une zone de mémoire “fraiche”. La mémoire allouée est initialisée à 0. Si l’allocation échoue, la fonction renvoie NULL.  	|
| Param. #1      	|  La taille de la zone de mémoire à allouer.  	|
| Retour         	| La zone de mémoire allouée.  	|
| Fonctions libc 	| malloc(3) 	|

----------

| Function       	|  ft_memdel 	|
|----------------	|---	|
| Prototype      	| void ft_memdel(void **ap);  	|
| Description    	| Prend en paramètre l’adresse d’un pointeur dont la zone pointée
doit être libérée avec free(3), puis le pointeur est mis à
NULL.  	|
| Param. #1      	|  L’adresse d’un pointeur dont il faut libérer la mémoire puis le
mettre à NULL.  	|
| Retour         	| Rien.  	|
| Fonctions libc 	| free(3) 	|

----------

| Function       	|  ft_strnew 	|
|----------------	|---	|
| Prototype      	| char * ft_strnew(size_t size);  	|
| Description    	| Alloue (avec malloc(3)) et retourne une chaine de caractère
“fraiche” terminée par un ’\0’. Chaque caractère de la chaine
est initialisé à ’\0’. Si l’allocation echoue, la fonction renvoie
NULL.  	|
| Param. #1      	|  La taille de la chaine de caractères à allouer.  	|
| Retour         	| La chaine de caractères allouée et initialisée à 0.  	|
| Fonctions libc 	| malloc(3) 	|
