int user_group_str()
{
    char *v3;  // rax
    unsigned long long v4;  // rax
    unsigned long|char * v5;  // rsi
    char *v6;  // rdi
    unsigned long long v7;  // r13
    unsigned long long v8;  // r13

    if (v6 != 0)
    {
        if (v5 != 0)
        {
            v7 = strlen(v6);
            strlen(v5);
            v8 = (long long)xmalloc();
            v3 = stpcpy(((int)v8), ((int)v6));
            *(v3) = 58;
            strcpy(v3 + 1, v5);
            v4 = v8;
            return v4;
        }
    }
    else
    {
        if (v5 != 0)
        {
        }
        else
        {
            v8 = 0;
            v4 = v8;
            return v4;
        }
    }
}
