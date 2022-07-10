extern unsigned int g_40e1c0;
extern unsigned long long oc;
extern struct_0 output_blocksize;
extern struct_0 w_bytes;
extern struct_0 w_full;
extern struct_0 w_partial;

int write_output()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v6;  // rbx
    unsigned long long v7;  // rbx
    unsigned long long v8;  // r12
    unsigned long long v9;  // r13

    w_bytes = w_bytes + v6;
    if (output_blocksize == v6)
    {
        oc = 0;
        w_full = w_full + 1;
        return v0;
    }
    v6 = iwrite.constprop.0();
    v9 = (long long)quotearg_style();
    v8 = dcgettext(0x0, &g_40e1c0, 0x5);
    __errno_location();
    nl_error();
    if (v7 != 0)
    {
        w_partial = w_partial + 1;
        quit.constprop.0(); /* do not return */
    }
    else
    {
        quit.constprop.0(); /* do not return */
    }
}
