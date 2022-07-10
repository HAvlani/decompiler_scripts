int dir_name()
{
    unsigned long long v1;  // rax

    v1 = mdir_name();
    if (v1 != 0)
    {
        return v1;
    }
    xalloc_die(); /* do not return */
}
