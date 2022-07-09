int protect_fd()
{
    unsigned long long v1;  // rax
    unsigned long v3;  // rax
    unsigned short v4;  // dx
    unsigned int v5;  // edi
    unsigned long long v6;  // r12

    v6 = 1;
    v3 = open("/dev/null", 0x0, v4);
    if (v5 != v3)
    {
        v6 = 0;
        if (v3 < 0)
        {
            v1 = v6;
            return v1;
        }
        close(v3);
        *(__errno_location() + None) = 9;
        return 0;
    }
    v1 = v6;
    return v1;
}
