int fd_ring_clear()
{
    unsigned long long v1;  // rax

    while (true)
    {
        v1 = i_ring_empty();
        if (((long long)v1) == 0)
        {
            close(i_ring_pop());
        }
        else
        {
            return v1;
        }
    }
}
