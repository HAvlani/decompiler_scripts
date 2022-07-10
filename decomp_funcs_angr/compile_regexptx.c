extern unsigned int g_41db00;
extern char ignore_case;

int compile_regex()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v1;  // [bp-0x8]
    unsigned long v10;  // r13
    unsigned long long v5;  // rbp
    unsigned long long v6;  // rbp
    char *v7;  // rdi
    unsigned long long v8[7];  // rdi
    unsigned long v9;  // r12

    v1 = v10;
    v0 = v9;
    v6 = v8[0];
    v8[5] = v8 + 72;
    v8[1] = 0;
    v8[2] = 0;
    v8[6] = (ignore_case == 0? 0 : 4347072);
    v7 = v6;
    strlen(v7);
    rpl_re_compile_pattern();
    if (v10 == 0)
    {
    }
    else
    {
        v5 = (long long)quote();
        error(0x1, 0x0, dcgettext(0x0, &g_41db00, 0x5));
    }
}
