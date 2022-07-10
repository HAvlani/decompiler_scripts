typedef struct struct_0 {
    char padding_0[180];
    unsigned int field_b4;
} struct_0;

int sub_4113d7()
{
    unsigned long v2;  // [bp+0x20]
    unsigned long|unsigned long long v3;  // [bp+0x28]
    uint128_t v4;  // [bp+0xb0]
    char v5;  // [bp+0xb8]
    unsigned long long v6;  // r12
    unsigned long long v7;  // r14
    unsigned long long v8[14];  // r15

    v3 = (long long)create_token_tree.isra.0();
    v7 = v3;
    v2 = &stack_base+176;
    while (true)
    {
        if (v8[13] <= v8[9])
        {
            v3 = v7;
        }
        else if (v8[9] == v8[6])
        {
            v3 = v7;
        }
        else if (*(v8[2] + (v8[9] << 2)) == -1)
        {
            v8[9] = v8[9] + (long long)peek_token();
            v6 = (long long)create_token_tree.isra.0();
            v4 = 0;
            v5 = 16;
            v7 = (long long)create_token_tree.isra.0();
        }
        else
        {
            v3 = v7;
        }
    }
}
