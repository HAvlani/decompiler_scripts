typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int print_named_ascii()
{
    unsigned int v0;  // [bp-0x54]
    unsigned long v1;  // [bp-0x50]
    unsigned int v10;  // r8d
    unsigned long long v11;  // r9
    unsigned long long v12;  // r12
    unsigned long long v13;  // r14
    unsigned long long v14;  // r15
    struct_0 *v15;  // fs
    char v2;  // [bp-0x42]
    char v3;  // [bp-0x41]
    unsigned long v4;  // [bp-0x40]
    unsigned long|unsigned long long v7;  // rdx
    unsigned long v8;  // rsi
    unsigned long v9;  // rdi

    v0 = v10;
    if (v9 > v8)
    {
        v14 = v7;
        v1 = &stack_base-66;
        v12 = v9 - v8 + v7;
        v13 = v11 * (v9 - 1);
        while (true)
        {
            v14 += 1;
            v7 = ((long long)(*(v14 + 1) & 127));
            if (((char)(*(v14 + 1) & 127)) != 127)
            {
                if (((long long)v2) <= 32)
                {
                }
                else
                {
                    v2 = v7;
                    v3 = 0;
                }
            }
            v13 -= v11;
            xprintf();
            if (v14 == v12)
            {
                break;
            }
        }
        return v4 ^ *(v15 + 0x28);
    }
    return v4 ^ *(v15 + 0x28);
}
