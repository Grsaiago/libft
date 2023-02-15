<div align="center">
  <img src="https://user-images.githubusercontent.com/98427284/175352149-d1146a34-d163-4d0e-806f-1c63c04d3663.png" height="150" width="150"/>
  
</div>

<h1 align ="center">
  42 Cursus' libft
  
</h1>
<p align ="center">
  This repo is my first project as a cadet <a href="https://42.rio/">@42rio.</a><br>It acts as both a study project on replicating libc functions, as well as a developer toolbelt to be used throughout the cursus.

</p>

### Functions from `<ctype.h>`
* [`ft_isascii`](ft_isascii.c) - checks if it's an ASCII char.
* [`ft_isalpha`](ft_isalpha.c) - checks if it's an alphabetic char.
* [`ft_isalnum`](ft_isalnum.c) - checks if it'a an alphanumeric char.
* [`ft_isdigit`](ft_isdigit.c) - checks if it's a digit.
* [`ft_isprint`](ft_isprint.c) - checks if it's a printable character.
* [`ft_toupper`](ft_toupper.c) - turns the char into uppercase.
* [`ft_tolower`](ft_tolower.c) - turns the char into lowercase.
* [`ft_isspace`](ft_isspace.c) - checks if it's a whitespace.

### Functions from `<stdlib.h>`
* [`ft_atoi`](ft_atoi.c) - converts ASCII to integer.
* [`ft_calloc`](ft_calloc.c) - allocate and initialize to 0 a block of memory.

### Functions from `<string.h>` && `<strings.h>`
* [`ft_strlen`](ft_strlen.c) - gets the lenght of a null terminated string.
* [`ft_strdup`](ft_strdup.c) - duplicates a string (with malloc).
* [`ft_strnstr`](ft_strnstr.c) - searches for the occurence of a byte stream inside another byte stream.
* [`ft_strchr`](ft_strchr.c) - searches for the first occurence of a byte in a byte stream.
* [`ft_strrchr`](ft_strrchr.c) - searches for the last occurence of a byte in a byte stream.
* [`ft_strlcpy`](ft_strlcpy.c) - copies the string src to dst.
* [`ft_strlcat`](ft_strlcat.c) - concatenates two strings.
* [`ft_strncmp`](ft_strncmp.c) - compares the first n bytes of two byte streams.
* [`ft_memset`](ft_memset.c) - fill a byte stream with a value.
* [`ft_bzero`](ft_bzero.c) - fill a byte stream with zero.
* [`ft_memcpy`](ft_memcpy.c) - copy a byte stream (doesn't account for overlapping memory blocks).
* [`ft_memmove`](ft_memmove.c) - copy a byte stream (accounts for overlapping memory blocks).
* [`ft_memchr`](ft_memchr.c) - search for a byte in the first n bytes of a byte stream.
* [`ft_memcmp`](ft_memcp.c) - compare two byte streams.

### Functions from `<math.h>`
* [`ft_pow`](ft_pow.c) - power function.

### Nonstandard functions
* [`ft_substr`](ft_substr.c) - 
* [`ft_strjoin`](ft_strjoin.c) - 
* [`ft_strtrim`](ft_strtrim.c) - 
* [`ft_split`](ft_split.c) - 
* [`ft_itoa`](ft_itoa.c) - 
* [`ft_strmapi`](ft_strmapi.c) - 
* [`ft_striteri`](ft_striteri.c) - 
* [`ft_putchar_fd`](ft_putchar_fd.c) - 
* [`ft_putstr_fd`](ft_putstr_fd.c) - 
* [`ft_putendl_fd`](ft_putendl_fd.c) - 
* [`ft_putnbr_fd`](ft_putnbr_fd.c) - 
* [`ft_free_mat`](ft_free_mat.c) - 
* [`ft_printhex`](ft_printhex.c) - 
* [`ft_printptr`](ft_printptr.c) - 
* [`ft_putchar`](ft_putchar.c) - 
* [`ft_putendl`](ft_putendl.c) - 
* [`ft_putnbr_fd`](ft_putnbr.c) - 
* [`ft_split`](ft_split.c) - 
* [`ft_strndup`](ft_strndup.c) - 
* [`get_next_line`](get_next_line.c) - 
* [`ft_printf`](ft_printf.c) - 
