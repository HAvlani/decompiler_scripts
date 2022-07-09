typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int mpn_get_str_other.isra.0()
{
    BOT tmp_21;  // tmp #21
    BOT tmp_24;  // tmp #24
    unsigned long v0;  // [bp-0x98]
    unsigned long v1;  // [bp-0x90]
    unsigned long long v11;  // r9
    unsigned long long v12;  // r12
    unsigned long long v13;  // r15
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long v5;  // rcx
    struct_0 *|char [2] v6;  // rdx
    unsigned long long v7;  // rbx
    unsigned long long v8;  // rsi
    char * v9;  // rdi

    v12 = v11;
    v7 = 0;
    v0 = &stack_base-136;
    mpn_div_qr_1_invert();
    if (v11 > 1)
    {
        v13 = 0;
        v1 = &stack_base-104;
        mpn_div_qr_1_invert();
        while (true)
        {
            v12 -= (long long)mpn_div_qr_1_preinv();
            v3 = mpn_limb_get_str();
            v7 = v13 + v3;
            if (v3 < ((long long)v6->field_0))
            {
                do
                {
                    v7 += 1;
                    *(v9 + v7 + 1) = 0;
                }
                while (((long long)v6->field_0) > v7);
            }
            if (v12 == 1)
            {
                break;
            }
            v13 = rbx<8>;
        }
    }
    v4 = (long long)mpn_limb_get_str() + v7;
    if (v4 > 1)
    {
        v6 = v9 + v4 - 1;
        do
        {
            v8 = ((long long)v6[0]);
            v5 = ((long long)*(v9));
            v9 += 1;
            v6 -= 1;
            tmp_21 = v8;
            *(v9 + 0x1) = tmp_21;
            tmp_24 = v5;
            v6[1] = tmp_24;
        }
        while (v9 != v9 + (v4 - 2 >> 1) + 1);
        return v4;
    }
    return v4;
}
