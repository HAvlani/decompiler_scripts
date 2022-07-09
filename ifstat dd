typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int ifstat()
{
    unsigned long long v1;  // rax
    unsigned int v3;  // esi
    unsigned int v4;  // edi
    unsigned long long v5;  // r12

    while (true)
    {
        process_signals();
        v5 = __fxstat(0x1, v4, v3);
        if (__errno_location() < 0)
        {
            v1 = v5;
            return v1;
        }
        v1 = v5;
        return v1;
    }
}
