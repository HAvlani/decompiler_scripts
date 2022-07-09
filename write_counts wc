typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern char print_bytes;
extern char print_chars;
extern char print_linelength;
extern char print_lines;
extern char print_words;
extern unsigned long long stdout[7];

int write_counts()
{
    unsigned long v0;  // [bp-0x40]
    char * v10;  // rbp
    char * v11;  // rsi
    char *v12;  // r9
    unsigned long|unsigned int v13;  // r12d
    struct_0 *v14;  // fs
    char *v7;  // rax
    unsigned long long v8;  // rax

    v13 = ((int)v12);
    v10 = "%*s";
    if (print_lines != 0)
    {
        umaxtostr();
        v10 = " %*s";
        __printf_chk(0x1, "%*s");
    }
    if (print_words != 0)
    {
        umaxtostr();
        v11 = v10;
        v10 = " %*s";
        __printf_chk(0x1, v11);
    }
    if (print_chars != 0)
    {
        umaxtostr();
        v11 = v10;
        v10 = " %*s";
        __printf_chk(0x1, v11);
    }
    if (print_bytes != 0)
    {
        umaxtostr();
        v11 = v10;
        v10 = " %*s";
        __printf_chk(0x1, v11);
    }
    if (print_linelength != 0)
    {
        umaxtostr();
        __printf_chk(0x1, v10);
    }
    if (v12 != 0)
    {
        v8 = strchr(v12, 0xa);
        if (v8 != 0)
        {
            v13 = (long long)quotearg_n_style_colon();
        }
        __printf_chk(0x1, " %s", v13);
    }
    v7 = *(stdout + 40);
    if (*(stdout + 40) < *(stdout + 48))
    {
        *(stdout + 40) = *(stdout + 40) + 1;
        *(v7) = 10;
        return v0 ^ *(v14 + 0x28);
    }
    __overflow();
    return v0 ^ *(v14 + 0x28);
}
