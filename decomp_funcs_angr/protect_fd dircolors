int protect_fd()
{
    unsigned long v1;  // rax
    unsigned long long v2;  // rax
    unsigned short v4;  // dx
    unsigned int v5;  // edi
    unsigned long long v6;  // r12

    v6 = 1;
    v1 = open("/dev/null", 0x0, v4);
    if (v5 != v1)
    {
        v6 = 0;
        if (v1 < 0)
        {
            v2 = v6;
            return v2;
        }
        close(v1);
        *(__errno_location() + None) = 9;
        return 0;
    }
    v2 = v6;
    return v2;
}
