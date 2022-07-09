int xfclose()
{
    unsigned long long v1;  // rax
    unsigned long long v3;  // rax
    unsigned long v4;  // rsi
    void *v5;  // rdi

    v3 = fileno(v5);
    if (v3 != 1)
    {
        v1 = rpl_fclose();
        if (((int)v1) == 0)
        {
            return v1;
        }
        v4 = "close failed";
        dcgettext(0x0, v4, 0x5);
        sort_die(); /* do not return */
    }
    else
    {
        v1 = fflush_unlocked(v5);
        if (((int)v1) == 0)
        {
            return v1;
        }
        v4 = "fflush failed";
        dcgettext(0x0, v4, 0x5);
        sort_die(); /* do not return */
    }
}
