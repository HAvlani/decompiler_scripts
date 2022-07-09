typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int blake2b_init_key()
{
    char v0;  // [bp-0xe8]
    char v1;  // [bp-0xe7]
    unsigned long long v12;  // rax
    unsigned long long v14;  // rax
    unsigned long|unsigned long long v16;  // rcx
    unsigned long long v18;  // rbp
    unsigned long|unsigned long long v19;  // rsi
    unsigned long long v2;  // [bp-0xe6]
    unsigned long long v20;  // rdi
    unsigned long long v21;  // rdi
    struct_0 * v22;  // rdi
    unsigned long v23;  // d
    unsigned long long v3;  // [bp-0xde]
    unsigned long long v4;  // [bp-0xd6]
    unsigned int v5;  // [bp-0xce]
    unsigned short v6;  // [bp-0xca]
    uint128_t v7;  // [bp-0xc8]
    uint128_t v8;  // [bp-0xb8]
    unsigned long long|char v9;  // [bp-0xa8]

    if (!(v19 - 1 <= 63))
    {
        v14 = -1;
        return v14;
    }
    else if (!(v16 - 1 <= 63))
    {
        v14 = -1;
        return v14;
    }
    else if (128 != 0)
    {
        v18 = v21;
        v0 = v19;
        v6 = 0;
        v1 = v16;
        v2 = 257;
        v3 = 0;
        v4 = 0;
        v5 = 0;
        v7 = 0;
        v8 = 0;
        blake2b_init0();
        v12 = 0;
        do
        {
            *(v18 + v12 * 8) = *(v18 + v12 * 8) ^ *((long long *)(((char *)&v2) + -2));
            v12 += 1;
        }
        while (v12 != 8);
        v16 = 16;
        v22 = &v9;
        for (*(v18 + 232) = v19; v16 != 0; v22 += v23 * 8)
        {
            v16 -= 1;
            v9 = 0;
        }
        __memcpy_chk(((int)&v9));
        blake2b_update.part.0();
        v19 = 0;
        v20 = &v9;
        *(0x40f018)();
        v14 = 0;
        return v14;
    }
    else
    {
        v14 = -1;
        return v14;
    }
}
