int restore_initial_cwd()
{
    unsigned long long v3;  // rax
    unsigned long|unsigned int [19] v4;  // rdi
    unsigned long long v5;  // r12

    v5 = ((long long)(v4[18] & 4));
    if (!((((char)v4[18]) & 4) == 0))
    {
        v5 = 0;
        fd_ring_clear();
        v3 = v5;
        return v3;
    }
    else if (((long long)(((char)(v4[18] >> 8)) & 2)) != 0)
    {
        cwd_advance_fd();
        fd_ring_clear();
        v3 = v5;
        return v3;
    }
    else
    {
        v4 = ((long long)v4[10]);
        v5 = 0;
        v5 = ((char)(fchdir(v4) != 0));
        fd_ring_clear();
        v3 = v5;
        return v3;
    }
}
