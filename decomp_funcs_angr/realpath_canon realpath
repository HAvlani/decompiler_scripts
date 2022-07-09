extern char logical;

int realpath_canon()
{
    unsigned long long v2;  // rax
    unsigned long long v3;  // r12

    v3 = (long long)canonicalize_filename_mode();
    if (!(logical != 0))
    {
        v2 = v3;
        return v2;
    }
    else if (v3 != 0)
    {
        rpl_free();
        v3 = (long long)canonicalize_filename_mode();
        v2 = v3;
        return v2;
    }
    else
    {
        v2 = v3;
        return v2;
    }
}
