int diagnose_copy_fd_failure()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v1;  // [bp-0x8]
    unsigned long v5;  // rsi
    unsigned int v6;  // edi
    unsigned long v7;  // r12
    unsigned long v8;  // r13

    v1 = v8;
    v0 = v7;
    if (v6 == 1)
    {
        quotearg_style();
        v5 = "error reading %s";
        dcgettext(0x0, v5, 0x5);
        __errno_location();
    }
    else if (v6 == 2)
    {
        quotearg_n_style_colon();
        v5 = "%s: file has shrunk too much";
        dcgettext(0x0, v5, 0x5);
        __errno_location();
    }
}
