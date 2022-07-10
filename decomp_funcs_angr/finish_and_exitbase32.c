typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int g_408004;

int finish_and_exit()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x8]
    unsigned long|unsigned int v5;  // rbx
    struct_0 *v6;  // rbp
    unsigned long v7;  // rsi
    char v8[2];  // r12
    unsigned long v9;  // r12

    v1 = v9;
    v8 = v7;
    v0 = v5;
    if (rpl_fclose() != 0)
    {
        v5 = ((int)(((int)v8[0]) - 45));
        if (v8[0] == 45)
        {
            v5 = ((long long)v8[1]);
        }
        v6 = __errno_location();
        if (v5 == 0)
        {
            error(0x1, v6->field_0, dcgettext(0x0, &g_408004, 0x5));
        }
        else
        {
            quotearg_n_style_colon();
            error(0x1, v6->field_0, "%s");
        }
    }
    else
    {
        exit(0x0); /* do not return */
    }
}
