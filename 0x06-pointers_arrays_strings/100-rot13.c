char *rot13(char *str)
{
    char *p = str;

    while (*p) {
        if ((*p >= 'a' && *p <= 'm') || (*p >= 'A' && *p <= 'M')) {
            *p += 13;
        } else if ((*p >= 'n' && *p <= 'z') || (*p >= 'N' && *p <= 'Z')) {
            *p -= 1}
	p++;
    }

    return str;
}
