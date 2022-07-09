typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int ifd_reopen()
{
    unsigned long long v2;  // rax
    unsigned long long v3;  // r12

    while (true)
    {
        process_signals();
        v3 = (long long)fd_reopen();
        if (__errno_location() < 0)
        {
            v2 = v3;
            return v2;
        }
        v2 = v3;
        return v2;
    }
}
