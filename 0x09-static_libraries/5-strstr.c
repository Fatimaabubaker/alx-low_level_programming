#include <string.h>

/* strstr returns a pointer to the first occurrence of string s2 in string s1,
 * or a NULL pointer if s2 does not occur in s1.  strstr returns s1
 * if s2 points to a zero length string.
 * 
 * Algorithm: Do a strchr-like search for s2's first character in s1 and then,
 * if found, follow it with a char-by-char comparison of the remainder of
 * s2 with the appropriate part of s1.  Repeat progressively if necessary
 * until a match is found or the end of s1 is reached.
 */
char *strstr(register const char *s1, register const char *s2)
{
	register const char *p1, *p2;
    register char c;

	if (!(c = *s2++)) return (char *)s1;

	for (;;) {
        // strchr-like for loop unrolled for speed
        for (; *s1 != c; ++s1) {
            if (!*s1) return NULL;
            if (*++s1 == c) break;
            if (!*s1) return NULL;
        }
		for (p1 = ++s1, p2 = s2; (*p1 == *p2) && *p2;) ++p1, ++p2;
		if (!*p2) return (char *)--s1;
	}
}
