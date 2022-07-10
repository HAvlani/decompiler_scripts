extern unsigned int g_414b80;
extern unsigned int g_415160;

int create_hard_link()
{
    BOT tmp_8;  // tmp #8
    unsigned long long v0;  // [bp-0x48]
    unsigned long long v10;  // r13
    unsigned int v2;  // [bp+0x10]
    unsigned long long v4;  // rax
    unsigned long|unsigned long long v6;  // rbp
    unsigned long v7;  // rdi
    unsigned long long v8;  // r12
    unsigned long long v9;  // r13

    v0 = 18446744069414584319;
    v6 = (long long)force_linkat();
    if (((int)v6) <= 0)
    {
        v6 = v6 % 0x80000000;
        v9 = ((long long)v2);
        tmp_8 = bpl<1>;
        v9 = ((char)v2) & tmp_8;
        if (((long long)(((char)v9) & tmp_8)) == 0)
        {
            v9 = 1;
            v4 = v9;
            return v4;
        }
        v8 = (long long)quotearg_style();
        __printf_chk(0x1, dcgettext(0x0, &g_415160, 0x5));
        v4 = v9;
        return v4;
    }
    else if (v7 != 0)
    {
        v10 = (long long)quotearg_n_style();
        v8 = (long long)quotearg_n_style();
        v9 = 0;
        error(0x0, ((int)v6), dcgettext(0x0, &g_414b80, 0x5));
        rpl_free();
        v4 = v9;
        return v4;
    }
    else
    {
        subst_suffix();
        v10 = (long long)quotearg_n_style();
        v8 = (long long)quotearg_n_style();
        v9 = 0;
        error(0x0, ((int)v6), dcgettext(0x0, &g_414b80, 0x5));
        rpl_free();
        v4 = v9;
        return v4;
    }
}
