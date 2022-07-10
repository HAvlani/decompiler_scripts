extern unsigned int g_40e152;
extern unsigned int g_40e168;
extern struct_0 interrupt_signal;

int cleanup()
{
    unsigned long long v1;  // rax
    unsigned long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long v6;  // r12
    unsigned long long v7;  // r12
    unsigned long long v8;  // r13
    unsigned long long v9;  // r13

    if (interrupt_signal == 0)
    {
        v3 = synchronize_output();
        if (((int)v3) != 0)
        {
            exit(v3); /* do not return */
        }
    }
    if (((int)v3) == 0 || interrupt_signal != 0)
    {
        v1 = close(0x0);
        if (v1 != 0)
        {
            v1 = iclose.part.0();
            if (v1 != 0)
            {
                v8 = (long long)quotearg_style();
                v6 = dcgettext(0x0, &g_40e152, 0x5);
                __errno_location();
                v3 = nl_error();
                exit(v3); /* do not return */
            }
        }
        if (v1 == 0 || v1 == 0)
        {
            v4 = close(0x1);
            if (((int)v4) != 0)
            {
                v4 = iclose.part.0();
                if (((int)v4) == 0)
                {
                    return v4;
                }
                v9 = (long long)quotearg_style();
                v7 = dcgettext(0x0, &g_40e168, 0x5);
                __errno_location();
                nl_error();
                v8 = (long long)quotearg_style();
                v6 = dcgettext(0x0, &g_40e152, 0x5);
                __errno_location();
                v3 = nl_error();
                exit(v3); /* do not return */
            }
            return v4;
        }
    }
}
