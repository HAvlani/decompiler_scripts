extern unsigned int g_41e0c4;
extern unsigned int g_41e0df;

int argmatch_invalid()
{
    unsigned long v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp-0x8]
    unsigned long v6;  // rbx
    unsigned long v7;  // r12
    unsigned long v8;  // r13

    v2 = v8;
    v1 = v7;
    v0 = v6;
    dcgettext(0x0, &g_41e0df, 0x5);
    quote_n();
    quotearg_n_style();
    if (False)
    {
        dcgettext(0x0, &g_41e0c4, 0x5);
        quote_n();
        quotearg_n_style();
    }
}