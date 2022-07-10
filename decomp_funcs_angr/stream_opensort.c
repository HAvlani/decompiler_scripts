typedef struct struct_2 {
    char padding_0[24];
    unsigned int field_18;
} struct_2;

extern unsigned int g_416bc1;
extern char have_read_stdin;
extern struct_0 stdin;
extern struct_0 stdout;

int stream_open()
{
    unsigned long long v1;  // rax
    unsigned long long v10;  // r13
    struct_2 *|unsigned long long v2;  // rax
    unsigned short v4;  // dx
    char *v5;  // rsi
    unsigned long v6;  // rdi
    unsigned long|char [2] v7;  // rdi
    unsigned int v8;  // r12d
    unsigned long long v9;  // r13

    if (!(*(v5) != 114))
    {
        if (v7[0] == 45)
        {
            if (v7[1] == 0)
            {
                have_read_stdin = 1;
                v9 = stdin;
                fadvise();
                v1 = v9;
                return v1;
            }
        }
        if (v7[0] != 45 || v7[1] != 0)
        {
            v9 = 0;
            v7 = (long long)open(v7, 0x80000, v4);
            if (((int)v7) < 0)
            {
                fadvise();
                v1 = v9;
                return v1;
            }
            v9 = fdopen(v7, v5);
            fadvise();
            v1 = v9;
            return v1;
        }
    }
    else if (!(*(v5) == 119))
    {
        __assert_fail(); /* do not return */
    }
    else if (v6 != 0)
    {
        v2 = ftruncate(0x1, 0x0);
        if (v2 == 0)
        {
            return stdout;
        }
        v8 = ((int)*(__errno_location()));
        v2 = get_outstatus();
        if (v2 != 0)
        {
            v2 = ((int)(v2->field_18 & 0xf000));
            if ((((short)v2->field_18) & 0xf000) != 0x8000)
            {
                return stdout;
            }
            else
            {
                v10 = (long long)quotearg_n_style_colon();
                error(0x2, v8, dcgettext(0x0, &g_416bc1, 0x5));
            }
        }
        else
        {
            v10 = (long long)quotearg_n_style_colon();
            error(0x2, v8, dcgettext(0x0, &g_416bc1, 0x5));
        }
    }
    else
    {
        return stdout;
    }
}
