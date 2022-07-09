typedef struct struct_0 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned long long field_8;
} struct_0;

int mpz_and()
{
    BOT tmp_64;  // tmp #64
    BOT tmp_68;  // tmp #68
    BOT tmp_72;  // tmp #72
    BOT tmp_40;  // tmp #40
    BOT tmp_5;  // tmp #5
    BOT tmp_22;  // tmp #22
    BOT tmp_14;  // tmp #14
    struct_0 *v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    unsigned long v10;  // rbx
    unsigned long v11;  // rbp
    char|unsigned long|unsigned long long v12;  // rsi
    unsigned long v13;  // rdi
    unsigned long v14;  // rdi
    unsigned long long v15;  // r8
    unsigned long long v16;  // r9
    unsigned long v17;  // r10
    char v18;  // r11b
    unsigned long long v19;  // r11
    unsigned long long v2;  // [bp-0x50]
    unsigned long v20;  // r12
    unsigned long v21;  // r13
    unsigned long long v22;  // r13
    unsigned long long v23;  // r14
    unsigned long long v24;  // r15
    unsigned long v3;  // [bp-0x48]
    unsigned long v4;  // [bp-0x40]
    unsigned long v6;  // rax
    unsigned long v7;  // rcx
    unsigned long v8;  // rcx
    unsigned long|unsigned int v9;  // edx

    v7 = v12;
    tmp_64 = ((long long)*(v12 + 4));
    tmp_68 = ((long long)*(v12 + 4));
    tmp_72 = ((long long)*(v9 + 4));
    v0 = v14;
    v22 = ((long long)((((int)tmp_68) ^ ((int)(tmp_64 >> 31))) - ((int)(tmp_64 >> 31))));
    v23 = ((long long)((((int)tmp_72) ^ ((int)(((long long)*(v9 + 4)) >> 31))) - ((int)(((long long)*(v9 + 4)) >> 31))));
    if (((long long)((((int)tmp_68) ^ ((int)(tmp_64 >> 31))) - ((int)(tmp_64 >> 31)))) < ((long long)((((int)tmp_72) ^ ((int)(((long long)*(v9 + 4)) >> 31))) - ((int)(((long long)*(v9 + 4)) >> 31)))))
    {
        v7 = v9;
        v22 = ((long long)((((int)tmp_72) ^ ((int)(((long long)*(v9 + 4)) >> 31))) - ((int)(((long long)*(v9 + 4)) >> 31))));
        v9 = v12;
        v23 = ((long long)((((int)tmp_68) ^ ((int)(tmp_64 >> 31))) - ((int)(tmp_64 >> 31))));
    }
    if (v23 != 0)
    {
        v11 = ((long long)(((int)(((long long)*(v7 + 4)) >> 31)) & 1));
        v20 = ((long long)(((int)(((long long)*(v9 + 4)) >> 31)) & 1));
        v10 = ((long long)(((int)(((long long)*(v9 + 4)) >> 31)) & ((int)(((long long)*(v7 + 4)) >> 31))));
        v15 = 0 - ((long long)(((int)(((long long)*(v7 + 4)) >> 31)) & 1));
        v24 = 0 - v10;
        v16 = 0 - ((long long)(((int)(((long long)*(v9 + 4)) >> 31)) & 1));
        tmp_40 = v22;
        v21 = (0 == v20? v23 : v22);
        if (v10 + (0 == v20? v23 : tmp_40) <= ((long long)v0->field_0))
        {
            v6 = v0->field_8;
        }
        else
        {
            v4 = v9;
            v3 = v7;
            v2 = v16;
            v1 = v15;
            v6 = mpz_realloc();
            v15 = v1;
            v16 = v2;
            v7 = v3;
            v9 = v4;
        }
        v17 = *(v9 + 8);
        v13 = *(v7 + 8);
        v8 = 0;
        do
        {
            tmp_5 = (*(v13 + v8 * 8) ^ v15) + v11;
            v11 = [D] amd64g_calculate_condition(0x2<64>, 0x4<64>, Xor(Load(addr=(rdi<8> + (rcx<8> << 0x3<8>)), size=8, endness=Iend_LE), r8<8>), rbp<8>, cc_ndep<8>);
            v19 = 0;
            v12 = [D] amd64g_calculate_condition(0x2<64>, 0x4<64>, Xor(Load(addr=(r10<8> + (rcx<8> << 0x3<8>)), size=8, endness=Iend_LE), r9<8>), r12<8>, cc_ndep<8>);
            tmp_22 = tmp_5 & (*(v17 + v8 * 8) ^ v16) + v20 ^ v24;
            v20 = [D] amd64g_calculate_condition(0x2<64>, 0x4<64>, Xor(Load(addr=(r10<8> + (rcx<8> << 0x3<8>)), size=8, endness=Iend_LE), r9<8>), r12<8>, cc_ndep<8>);
            v18 = ((char)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, t22, rbx<8>, cc_ndep<8>));
            *(v6 + v8 * 8) = tmp_22 + v10;
            v8 += 1;
            v10 = ((long long)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, t22, rbx<8>, cc_ndep<8>));
        }
        while (v23 != v8);
        if (v12 == 0)
        {
            if (v9 > v23)
            {
                do
                {
                    v12 = 0;
                    tmp_14 = (*(v13 + v8 * 8) ^ v15) + v11 & v16 ^ v24;
                    v11 = [D] amd64g_calculate_condition(0x2<64>, 0x4<64>, Xor(Load(addr=(rdi<8> + (rcx<8> << 0x3<8>)), size=8, endness=Iend_LE), r8<8>), rbp<8>, cc_ndep<8>);
                    v12 = ((char)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, t14, rbx<8>, cc_ndep<8>));
                    *(v6 + v8 * 8) = tmp_14 + v10;
                    v8 += 1;
                    v10 = ((long long)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, t14, rbx<8>, cc_ndep<8>));
                }
                while (v9 != v8);
                if (rsi<8> != 0)
                {
                    *(v6 + v9 * 8) = 1;
                    v9 = ((int)v9) + 1;
                    v0->field_4 = (v24 != 0? 0 - v9 : ((int)rdx<8>));
                    return v0;
                }
            }
            else if (r11<8> != 0)
            {
                *(v6 + v9 * 8) = 1;
                v9 = ((int)v9) + 1;
                v0->field_4 = (v24 != 0? 0 - v9 : ((int)rdx<8>));
                return v0;
            }
            else
            {
                v9 = 0;
                v0->field_4 = (v24 != 0? 0 - v9 : ((int)rdx<8>));
                return v0;
            }
            if ((rsi<8> == 0 || v9 <= v23) && (r11<8> == 0 || v9 > v23) && (v9 > v23 || v9 != 0))
            {
                v9 = v21;
                while (true)
                {
                    v9 -= 1;
                    v9 = 0;
                    break;
                }
                v0->field_4 = (v24 != 0? 0 - v9 : ((int)rdx<8>));
                return v0;
            }
        }
        __assert_fail(); /* do not return */
    }
    v0->field_4 = 0;
    return v0;
}
