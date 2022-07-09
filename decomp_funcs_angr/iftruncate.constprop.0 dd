typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int iftruncate.constprop.0()
{
    unsigned long long v2;  // rax
    unsigned int v3;  // edi
    unsigned long long v4;  // r12

    while (true)
    {
        process_signals();
        v4 = ftruncate(0x1, v3);
        if (__errno_location() < 0)
        {
            v2 = v4;
            return v2;
        }
        v2 = v4;
        return v2;
    }
}
