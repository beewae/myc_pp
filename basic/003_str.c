#include <stdio.h>
#include <string.h>

int main() {
  char as[32], bs[32];
  char ch = 33;
  char *pc;
  for (int i=0; i<12; ++i) { as[i] = 46; bs[i] = 46; }
  as[6] = 32;
  as[12] = 0;
  printf("%zu", strlen(as));
}

//1. char vs. string
//2. pc = *memchr(as, ch, strlen(as)); // pc-> as[6]
//3. ret = memcmp(as, bs, 10); // ret <= (<0)
//4. memcpy(as, bs+5, 5);
//5. memmove(as, bs+5, 5)
//6. *memset(as, '$', 5); // as = [$$$$$.......\0]
//7. strcat(as, 'hello'); // as = [......!.....hello\0]
//8. strncat(as, 'hello'); // as = [......!.....hello\0]
//9. pc = strchr(as, '!'); // pc->as[6]
//10. int strcmp(const char *str1, const char *str2)
//20. int strncmp(const char *str1, const char *str2, size_t n)
//21. int strcoll(const char *str1, const char *str2)
//22. char *strcpy(char *dest, const char *src)
//23. char *strncpy(char *dest, const char *src, size_t n)
//24. size_t strcspn(const char *str1, const char *str2)
//25. char *strerror(int errnum)
//26. strlen(as); // 12
//27. char *strpbrk(const char *str1, const char *str2)
//28. char *strrchr(const char *str, int c)
//29. size_t strspn(const char *str1, const char *str2)
//30. char *strstr(const char *haystack, const char *needle)
//31. char *strtok(char *str, const char *delim)
//32. size_t strxfrm(char *dest, const char *src, size_t n)
