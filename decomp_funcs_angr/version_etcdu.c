typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int version_etc()
{
    BOT tmp_8;  // tmp #8
    unsigned int v0;  // [bp-0xb0]
    unsigned long v1;  // [bp-0xa8]
    unsigned long v10;  // r8
    unsigned long v11;  // r9
    unsigned long long v12;  // r9
    unsigned long long|unsigned int v13;  // r10d
    struct_0 *|unsigned long long v14;  // r11
    struct_0 *v15;  // fs
    unsigned long v2;  // [bp-0xa0]
    unsigned long v3;  // [bp-0x98]
    unsigned long v4;  // [bp-0x40]
    unsigned long v5;  // [bp-0x10]
    unsigned long long v6;  // [bp+0x8]
    char v7;  // [bp+0x10]
    unsigned long long v9;  // rax

    v13 = 32;
    v14 = &v6;
    v5 = v11;
    v12 = 0;
    v0 = 32;
    v1 = &v6;
    v2 = &stack_base-56;
    while (true)
    {
        if (v13 <= 47)
        {
            v13 = ((int)v13) + 8;
            v3 = v10;
            if (v10 == 0)
            {
                version_etc_arn();
                return v4 ^ *(v15 + 0x28);
            }
        }
        tmp_8 = v14;
        v14 += 8;
        v9 = v6;
        v3 = v6;
        if (v9 == 0)
        {
            version_etc_arn();
            break;
        }
        if (v13 <= 47 && v10 != 0 || v9 != 0 && v13 > 47)
        {
            v12 += 1;
            version_etc_arn();
            return v4 ^ *(v15 + 0x28);
        }
    }
    return v4 ^ *(v15 + 0x28);
}