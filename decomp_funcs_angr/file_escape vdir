extern char RFC3986;
extern unsigned int g_418a71;

int file_escape()
{
    unsigned long long v1;  // rax
    char * v2;  // rbx
    char *|unsigned long long v3;  // rbp
    char v4;  // sil
    char *|unsigned long v5;  // rdi
    unsigned long v6;  // r8

    v2 = v5;
    strlen(v5);
    v3 = (long long)xnmalloc();
    if (((long long)*(v5)) != 0)
    {
        while (true)
        {
            v2 += 1;
            if (v1 == 47 && ((long long)v4) != 0)
            {
                *(v3) = 47;
                v3 += 1;
                /* goto 4224247; */
            }
            if (((long long)v4) == 0 || v1 != 47)
            {
                v6 = ((long long)v1);
                if (*(RFC3986 + ((long long)v1)) != 0)
                {
                    *(v3) = v1;
                    v3 += 1;
                }
                else
                {
                    v5 = v3;
                    v3 += 3;
                    __sprintf_chk(v5, 0x1, 0xffffffff, &g_418a71, v6);
                    v1 = ((long long)*(v2));
                    *(v3) = 0;
                    return &stack_base+0;
                }
            }
            if (*(RFC3986 + ((long long)v1)) != 0 || v1 == 47 && ((long long)v4) != 0)
            {
                v1 = ((long long)*(v2));
                *(v3) = 0;
                return &stack_base+0;
            }
        }
    }
    *(v3) = 0;
    return &stack_base+0;
}
