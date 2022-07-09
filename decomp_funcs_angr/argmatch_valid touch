extern unsigned int g_4129f0;
extern unsigned int g_412a05;
extern unsigned int g_412a0d;
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
    unsigned int v8;  // r8d
    unsigned long long v9;  // r14

    v9 = 0;
    v5 = v6;
    fputs_unlocked(dcgettext(0x0, &g_4129f0, 0x5), stderr);
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
                v1 = memcmp(v9, v5, ((unsigned int)v3));
                if (v1 == 0)
                {
                    __fprintf_chk(((int)stderr), 0x1, &g_412a0d, quote(), v8);
                }
            }
            if (v4 == 0 || v1 != 0)
            {
                v9 = v5;
                __fprintf_chk(((int)stderr), 0x1, &g_412a05, quote(), v8);
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
