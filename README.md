# A printf / sprintf Implementation for Embedded Systems

This is our printf implementation.
Primarily designed for usage in embedded systems, where printf is not available due to memory issues or in avoidance of linking against libc.
Using the standard libc printf may pull **a lot** of unwanted library stuff and can bloat code size about 20k or is not 100% thread safe. In this cases the following implementation can be used.

### Supported Types

| Type   | Output |
|--------|--------|
| d or i | Signed decimal integer |
| u      | Unsigned decimal integer	|
| b      | Unsigned binary |
| o      | Unsigned octal |
| x      | Unsigned hexadecimal integer (lowercase) |
| X      | Unsigned hexadecimal integer (uppercase) |
| f or F | Decimal floating point |
| e or E | Scientific-notation (exponential) floating point |
| g or G | Scientific or decimal floating point |
| c      | Single character |
| s      | String of characters |
| p      | Pointer address |
| %      | A % followed by another % character will write a single % |

### Return Value

Upon successful return, _printf returns the number of characters written, _excluding_ the terminating null character used to end the string.
Functions `snprintf()` and `vsnprintf()` don't write more than `count` bytes, _including_ the terminating null byte ('\0').
Anyway, if the output was truncated due to this limit, the return value is the number of characters that _could_ have been written.
Notice that a value equal or larger than `count` indicates a truncation. Only when the returned value is non-negative and less than `count`,
the string has been completely written.
If any error is encountered, `-1` is returned.

If `buffer` is set to `NULL` (`nullptr`) nothing is written and just the formatted length is returned.
```C
int length = sprintf(NULL, "Hello, world"); // length is set to 12
```
