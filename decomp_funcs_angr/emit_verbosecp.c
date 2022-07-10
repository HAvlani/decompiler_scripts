extern unsigned int g_415152;
extern unsigned long long stdout[7];

int emit_verbose()
{
    char *v2;  // rax
    unsigned long v3;  // rdx
    unsigned long long v4;  // r12

    __printf_chk(0x1, "%s -> %s", quotearg_n_style(), quotearg_n_style());
    if (v3 != 0)
    {
        v4 = (long long)quotearg_style();
        __printf_chk(0x1, dcgettext(0x0, &g_415152, 0x5));
        v2 = *(stdout + 40);
        if (*(stdout + 40) < *(stdout + 48))
        {
            *(stdout + 40) = *(stdout + 40) + 1;
            *(v2) = 10;
            return v2;
        }
    }
    else
    {
        v2 = *(stdout + 40);
        if (*(stdout + 40) < *(stdout + 48))
        {
            *(stdout + 40) = *(stdout + 40) + 1;
            *(v2) = 10;
            return v2;
        }
    }
}
