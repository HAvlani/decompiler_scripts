int fopen_safer()
{
    unsigned int v1;  // [bp+0x100008]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    char *v4;  // rsi
    char *v5;  // rdi
    unsigned long long v6;  // r12
    unsigned int v7;  // r13d

    v6 = fopen(v5, v4);
    if (v6 != 0)
    {
        v3 = fileno(v6);
        if (v3 > 2)
        {
            v2 = v6;
            return v2;
        }
        v7 = dup_safer();
        if (v7 >= 0)
        {
            v3 = rpl_fclose();
            if (v3 == 0)
            {
                v6 = fdopen(v7, v4);
                if (v6 != 0)
                {
                    v2 = v6;
                    return v2;
                }
                else
                {
                    close(v7);
                    *(__errno_location() + None) = ((int)v1);
                    v6 = 0;
                    v2 = v6;
                    return v2;
                }
            }
            else
            {
                close(v7);
                *(__errno_location() + None) = ((int)v1);
                v6 = 0;
                v2 = v6;
                return v2;
            }
        }
        else
        {
            v6 = 0;
            rpl_fclose();
            *(__errno_location() + None) = ((int)v1);
            v2 = v6;
            return v2;
        }
    }
    v2 = v6;
    return v2;
}
