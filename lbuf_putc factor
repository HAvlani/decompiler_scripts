extern char *g_4220f8;
extern struct_0 lbuf;
extern unsigned int line_buffered.8470;

int lbuf_putc()
{
    unsigned long|unsigned int v2;  // eax
    char * v3;  // rax
    unsigned long long v4;  // rax
    char * v5;  // rax
    unsigned long long v6;  // rbx
    unsigned long long v7;  // rbp
    char v8;  // dil
    char *v9;  // r12

    v5 = g_4220f8;
    v7 = g_4220f8 + 1;
    g_4220f8 = g_4220f8 + 1;
    *(v5) = v8;
    if (v8 != 10)
    {
        return v5;
    }
    v2 = ((long long)line_buffered.8470);
    v6 = lbuf;
    if (line_buffered.8470 == -1)
    {
        v2 = isatty(0x0);
        if (v2 != 0)
        {
            line_buffered.8470 = 1;
        }
        else
        {
            v2 = ((int)(isatty(0x1) != 0));
            line_buffered.8470 = v2;
        }
    }
    if (v2 == 0 || line_buffered.8470 != -1)
    {
        if (v2 == 0)
        {
            v5 = v7 - v6;
            if (v7 - v6 <= 511)
            {
                return v5;
            }
            else
            {
                v3 = v6 + 0x200;
                do
                {
                    v9 = v3;
                    v3 -= 1;
                }
                while (*(v3) != 10);
                g_4220f8 = v9;
                lbuf_flush();
                v4 = memcpy(lbuf, g_4220f8, g_4220f8 + 1 - g_4220f8);
                g_4220f8 = g_4220f8 + 1 - g_4220f8 + v4;
                return v4;
            }
        }
    }
}
