int dir_name()
{
    unsigned long long v2;  // rax

    v2 = mdir_name();
    if (v2 != 0)
    {
        return v2;
    }
    xalloc_die(); /* do not return */
}
