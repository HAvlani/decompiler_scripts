int fd_ring_clear()
{
    unsigned long long v2;  // rax

    while (true)
    {
        v2 = i_ring_empty();
        if (((long long)v2) == 0)
        {
            close(i_ring_pop());
        }
        else
        {
            return v2;
        }
    }
}
