int blake2b_init()
{
    char v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x57]
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    unsigned long v13;  // rsi
    unsigned long long v14;  // r8
    unsigned long long v2;  // [bp-0x4f]
    char v3;  // [bp-0x47]
    unsigned long long v4;  // [bp-0x46]
    unsigned int v5;  // [bp-0x3e]
    unsigned short v6;  // [bp-0x3a]
    uint128_t v7;  // [bp-0x38]
    uint128_t v8;  // [bp-0x28]

    if (v13 - 1 <= 63)
    {
        v0 = v13;
        v6 = 0;
        v1 = 0x10100;
        v2 = 0;
        v3 = 0;
        v4 = 0;
        v5 = 0;
        v7 = 0;
        v8 = 0;
        blake2b_init0();
        v10 = 0;
        do
        {
            *(v14 + v10 * 8) = *(v14 + v10 * 8) ^ v0;
            v10 += 1;
        }
        while (v10 != 8);
        *(v14 + 232) = v13;
        v11 = 0;
        return v11;
    }
    v11 = -1;
    return v11;
}
