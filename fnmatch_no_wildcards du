int fnmatch_no_wildcards()
{
    unsigned int v0;  // [bp-0x1c]
    char *v10;  // rdi
    char * v11;  // rdi
    unsigned long long v2;  // rax
    unsigned long long v4;  // rax
    unsigned int v5;  // edx
    char *v6;  // rbx
    char *v7;  // rbx
    char *v8;  // rbp
    unsigned long v9;  // rsi

    v8 = v9;
    if ((((char)v5) & 8) != 0)
    {
        if ((((char)v5) & 16) == 0)
        {
            v7 = strlen(v10);
            v2 = strncmp(v10, v9, v7);
            if (((int)v2) == 0)
            {
                v2 = ((long long)(*(v8 + v7) != 47? ((int)*(v8 + v7)) : ((int)rax<8>)));
                return v2;
            }
            return v2;
        }
        v11 = (long long)xstrdup();
        while (true)
        {
            v6 = strchr(v11, 0x2f);
            if (v6 != 0)
            {
                *(v6) = 0;
                v4 = mbscasecmp();
                if (((int)v4) > 0)
                {
                    *(v6) = 47;
                    v11 = v6 + 1;
                }
                else
                {
                    v0 = v4;
                    rpl_free();
                    return ((long long)v0);
                }
            }
            else
            {
                v4 = mbscasecmp();
                v0 = v4;
                rpl_free();
            }
        }
        return ((long long)v0);
    }
}
