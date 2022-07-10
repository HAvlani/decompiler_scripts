int restore_initial_cwd()
{
    unsigned long long v2;  // rax
    unsigned int [19]|unsigned long v4;  // rdi
    unsigned long long v5;  // r12

    v5 = ((long long)(v4[18] & 4));
    if (!((((char)v4[18]) & 4) == 0))
    {
        v5 = 0;
        fd_ring_clear();
        v2 = v5;
        return v2;
    }
    else if (((long long)(((char)(v4[18] >> 8)) & 2)) != 0)
    {
        cwd_advance_fd();
        fd_ring_clear();
        v2 = v5;
        return v2;
    }
    else
    {
        v4 = ((long long)v4[10]);
        v5 = 0;
        v5 = ((char)(fchdir(v4) != 0));
        fd_ring_clear();
        v2 = v5;
        return v2;
    }
}
