extern unsigned int g_41dd75;
extern unsigned long long stderr[7];

int argmatch_valid()
{
    unsigned long long v1;  // rax
    char *v2;  // rax
    unsigned int v3;  // rdx
    unsigned long long v4;  // rbx
    void * v5;  // rbp
    void *v6;  // rsi
    unsigned long long v7[2];  // rdi
    unsigned long long v8;  // r14

    v8 = 0;
    v5 = v6;
    fputs_unlocked(dcgettext(0x0, &g_41dd75, 0x5), stderr);
    v4 = 0;
    if (v7[0] == 0)
    {
        v2 = *(stderr + 40);
        if (*(stderr + 40) < *(stderr + 48))
        {
            *(stderr + 40) = *(stderr + 40) + 1;
            *(v2) = 10;
            return v2;
        }
    }
    else
    {
        do
        {
            if (v4 != 0)
            {
                v1 = memcmp(v8, v5, ((unsigned int)v3));
                if (v1 == 0)
                {
                    quote();
                    __fprintf_chk();
                }
            }
            if (v4 == 0 || v1 != 0)
            {
                v8 = v5;
                quote();
                __fprintf_chk();
            }
            v4 += 1;
            v5 += ((unsigned int)v3);
        }
        while (v7[v4] != 0);
        v2 = *(stderr + 40);
        if (*(stderr + 40) < *(stderr + 48))
        {
            *(stderr + 40) = *(stderr + 40) + 1;
            *(v2) = 10;
            return v2;
        }
    }
}
