typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    char padding_10[8];
    unsigned long long field_18;
} struct_0;

int mpn_limb_get_str()
{
    BOT tmp_112;  // tmp #112
    BOT tmp_32;  // tmp #32
    unsigned long long v0;  // [bp-0x30]
    unsigned long v1;  // [bp-0x28]
    unsigned long long v10;  // rbx
    unsigned long long v11;  // rsi
    unsigned long long v12;  // rdi
    char v13;  // r8b
    unsigned long long v14;  // r8
    unsigned long long v15;  // r8
    unsigned long long v16;  // r8
    unsigned long long v17;  // r12
    unsigned long long v18;  // r12
    unsigned long long v19;  // r13
    unsigned long v2;  // [bp-0x20]
    unsigned long long v20;  // r13
    unsigned long long v21;  // r14
    unsigned long long v22;  // r14
    unsigned long long v23;  // r15
    unsigned long long v24;  // r15
    unsigned long long v3;  // [bp-0x18]
    unsigned long long v4;  // [bp-0x10]
    unsigned long long v5;  // [bp-0x8]
    unsigned long long v7;  // rax
    struct_0 *v8;  // rdx
    unsigned long long v9;  // rbx

    if (v11 != 0)
    {
        v5 = v24;
        v7 = 0;
        v4 = v22;
        v3 = v19;
        v2 = v18;
        v1 = &stack_base+0;
        v0 = v10;
        while (true)
        {
            v19 = ...;
            v15 = 0;
            v13 = ((char)(...));
            tmp_112 = r8<8>;
            v11 = ...;
            v14 = (0 - tmp_112 & v8->field_8) + v19;
            if (v8->field_8 <= (0 - tmp_112 & v8->field_8) + v19)
            {
                v14 -= v8->field_8;
                v11 += 1;
            }
            if ((v14 & 18446744069414584319 >> ((long long)(((char)(64 - v8->field_0)) & 63))) == 0)
            {
                v16 = v14 >> (((char)v8->field_0) & 63);
                tmp_32 = v16;
                *(v12 + v7) = tmp_32;
                v7 += 1;
                v9 = v0;
                v17 = v2;
                v20 = v3;
                v21 = v4;
                v23 = v5;
                return v7;
            }
            __assert_fail(); /* do not return */
        }
    }
    return 0;
}
