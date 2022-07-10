extern struct_0 check_chars;
extern char ignore_case;

int different()
{
    unsigned long v3;  // rcx
    unsigned int v4;  // rdx
    unsigned long v5;  // rdx
    void *v6;  // rsi
    void *v7;  // rdi
    unsigned long long v8;  // r8

    v8 = ((long long)ignore_case);
    ((unsigned int)v4) = (check_chars <= v5? check_chars : v5);
    if (!(((long long)ignore_case) != 0))
    {
        v8 = 1;
        if (((unsigned int)v4) != (!(check_chars <= v3)? v3 : check_chars))
        {
            return v8;
        }
        memcmp(v7, v6, ((unsigned int)v4));
        return 1;
    }
    else if (((unsigned int)v4) != (!(check_chars <= v3)? v3 : check_chars))
    {
        return v8;
    }
    else
    {
        memcasecmp();
        return ((long long)ignore_case);
    }
}
