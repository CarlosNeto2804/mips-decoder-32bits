#ifndef UTILS_H_
#define UTILS_H_

	/**
	 * @brief Prints an error message and exits.
	 *
	 * @param msg Error message.
	 */
	extern void error(const char *msg);

	/**
	 * @brief Prints a debug message.
	 *
	 * @param msg Debug message.
	 */
	extern void  debug(const char *msg);

	/**
	 * @brief Converts an integer to a binary string.
	 *
	 * @param val Target value.
	 * @param str Target buffer to store resulting string.
	 *
	 * @returns A pointer to the resulting string.
	 */
	extern char *itoa2(int val, char *str, int base2);

	/**
	 * @brief Asserts a condition.
	 *
	 * @param x        Target condition.
	 * @param msg      Assert message.
	 * @param filename File name.
	 * @param linenum  Line number.
	 */
	extern void __checkfail(int x, const char *msg, const char *filename, int linenum);

	/**
	 * @see _check()
	 */
	#ifdef NDEBUG
	#define _check(x, msg) { ((void)(x)); ((void)(msg)); }
	#else
	#define _check(x, msg) __checkfail(x, msg, __FILE__, __LINE__)
	#endif

	/**
	 * @brief Asserts a condition.
	 *
	 * @param x Target condition.
	 */
	#define check(x) _check(x, "assert() failed")

#endif /* UTILS_H_ */
