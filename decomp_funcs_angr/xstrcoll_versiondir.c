int xstrcoll_version()
{
    unsigned long long v1;  // rax

    v1 = filevercmp();
    if (((int)v1) == 0)
    {
    }
    else
    {
        return v1;
    }
}
