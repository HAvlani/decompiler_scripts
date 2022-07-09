typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int g_40901c;

int finish_and_exit()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x8]
    char v10[2];  // r12
    unsigned long v5;  // rbx
    unsigned long|unsigned int v6;  // rbx
    struct_0 *v7;  // rbp
    unsigned long long v8;  // rsi
    unsigned long v9;  // r12

    v1 = v9;
    v10 = v8;
    v0 = v5;
    if (rpl_fclose() != 0)
    {
        v6 = ((long long)(((int)v10[0]) - 45));
        if (v10[0] == 45)
        {
            v6 = ((int)v10[1]);
        }
        v7 = __errno_location();
        if (v6 == 0)
        {
            error(0x1, v7->field_0, dcgettext(0x0, &g_40901c, 0x5));
        }
        else
        {
            quotearg_n_style_colon();
            error(0x1, v7->field_0, "%s");
        }
    }
    else
    {
        exit(0x0); /* do not return */
    }
}
