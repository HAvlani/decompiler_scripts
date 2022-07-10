int file_name_concat()
{
    unsigned long long v2;  // rax

    v2 = mfile_name_concat();
    if (v2 != 0)
    {
        return v2;
    }
    xalloc_die(); /* do not return */
}
