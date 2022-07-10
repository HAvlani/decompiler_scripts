int savewd_errno()
{
    unsigned int v1[2];  // rdi

    if (v1[0] != 4)
    {
        return 0;
    }
    return ((long long)v1[1]);
}
