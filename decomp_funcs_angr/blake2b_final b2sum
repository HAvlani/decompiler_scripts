typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[56];
    unsigned long long field_40;
    unsigned long long field_48;
    unsigned long long field_50;
    unsigned long long field_58;
    char padding_60[128];
    unsigned long long field_e0;
    unsigned long long field_e8;
    char field_f0;
} struct_0;

int blake2b_final()
{
    uint128_t v0;  // [bp-0x78]
    uint128_t v1;  // [bp-0x68]
    unsigned long long v10;  // rax
    unsigned long v12;  // rdx
    struct_0 * v13;  // rbx
    struct_0 *v14;  // rbp
    void *|unsigned long long v15;  // rsi
    struct_0 * v16;  // rdi
    void *v17;  // rdi
    unsigned long long v18;  // rdi
    char v19;  // cc_dep1
    uint128_t v2;  // [bp-0x58]
    uint128_t v3;  // [bp-0x48]
    unsigned long long v7;  // rax

    v0 = 0;
    v1 = 0;
    v2 = 0;
    v3 = 0;
    if (v15 != 0)
    {
        v14 = v16;
        if (v16->field_e8 <= 64)
        {
            v13 = v16->field_50;
            if (v16->field_50 == 0)
            {
                v18 = v16->field_e0;
                v10 = v18 + v14->field_40;
                v14->field_48 = v14->field_48 + ((v18 + v14->field_40 <= v18? 1 : 0) & 1);
                v19 = ((char)v14->field_f0);
                v14->field_40 = v10;
                if (v19 != 0)
                {
                    v14->field_58 = 18446744069414584319;
                }
                v14->field_50 = 18446744069414584319;
                v12 = 128 - v18;
                v17 = v18 + v14 + 96;
                memset(v17, 0x0, v12);
                blake2b_compress();
                do
                {
                    *(&stack_base-120 + v13 * 8) = *(v14 + v13 * 8);
                    v13 += 1;
                }
                while (v13 != 8);
                memcpy(v15, &stack_base-120, v14->field_e8);
                v15 = 0;
                v16 = &stack_base-120;
                *(0x40f018)();
                v7 = 0;
                return v7;
            }
            v7 = -1;
            return v7;
        }
        v7 = -1;
        return v7;
    }
    v7 = -1;
    return v7;
}
