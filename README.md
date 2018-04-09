# Libft project for 42 school. [![Build Status](https://travis-ci.org/IvanKozlov95/libft.svg?branch=master)](https://travis-ci.org/IvanKozlov95/libft)

### TOC

* [What is libft?](#what-is-libft)
* [What's in it?](#whats-in-it)
* [How does it work?](#how-does-it-work)
* [Example usage](#example-usage)

## What is libft?
[Libft][1] is an individual project at [42][2] that requires us to re-create some standard C library functions including some additional ones that can be used later to build a library of useful functions for the rest of the program.

Disclaimer: *Reinventing the wheel is bad, 42 makes us do this just so we can have a deeper understanding of data structures and basic algorithms. At 42 we're not allowed to use some standard libraries on our projects, so we have to keep growing this library with our own functions as we go farther in the program.*

## What is in it?

According to [project's pdf][1] there should be 4 sections:

1.  **Libc Functions:** Some of the standard C functions.
2.  **Additional functions:** Functions 42 deems will be useful for later projects.
3.  **Bonus Functions:** Functions 42 deems will be useful for linked list manipulation.
4.  **Personal Functions:** Functions I believe will be useful later.

However, I've decided reorganize and combined functions to several folders:

1. **chars:** Basic functions to work with _char_ type
2. **get_next_line:** GNL project integrated into libft for convenience. See [project page][GNL]
3. **math:** Basic math functions. (This part will be ~~probably~~ extended in the future). See [notes](#notes)
4. **memory:** Memory operations(allocation, freeing etc.)
5. **output:** Functions for printing output (except for ft_printf)
6. **ft_printf:** My implementation of printf functions. See [project page][printf]
7. **list:** Functions for manipulations with linked lists.
8. **matrix:** Functions for manipulation with generic matrix. See [notes](#notes)
9. **numbers:** Functions related to integer number types(shor, int etc.).
10. **strings:** Part of <string.h> functions and addition functions which I deemed useful to work with string.

My code is not the best, but it passed all the 42 tests successfully and I successfully used in my [other 42 projects][#Example usage]

# Notes:

- Most of the the files and function names are namespaced with an **ft** in front. It stands for Forty Two
- The project instructions require that we put all the source files in the root directory but for the sake of this Github repo, I separate them into sub folders according to classification above.
- I update this list almost every month with new personal functions. If you don't know what a function does, refer to the [Wiki][mock], where I document all my personal functions.

### How does it work?

The goal is to create a library called libft.a from the source files so I can later use that library from other projects at 42.

To create that library, after downloading/cloning this project, **cd** into the project, copy all the files from the sub folders to the root directory and finally, call make:

	git clone https://github.com/IvanKozlov95/libft
	cd libft
	make

You should see a *libft.a* file and some object files (.o).

That's it! If you're having some problems, just send me an email here: ikozlov@student.42.us.org. If you think your problem is due to my code or this README, [create a new issue][3]. I'll definitely check it out.

## Example usage

This is a list of my projects that use Libft extensively:

* [get_next_line][GNL]
* [fillit](https://github.com/IvanKozlov95/fillit)
* [filler](https://github.com/IvanKozlov95/filler)
* [ft_printf][printf]
* [lem_in](https://github.com/IvanKozlov95/lem_in)

[1]: https://github.com/IvanKozlov95/libft/blob/master/libft.en.pdf
[2]: http://42.us.org "42 USA"
[3]: https://github.com/IvanKozlov95/libft/issues/new "New issue"
[GNL]: https://github.com/IvanKozlov95/get_next_line
[printf]: https://github.com/IvanKozlov95/ft_printf
[mock]: https://www.youtube.com/watch?v=dQw4w9WgXcQ
