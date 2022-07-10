typedef struct struct_0 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned long long field_8;
} struct_0;

int mpz_ior()
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
    unsigned long v10;  // rbp
    unsigned long|unsigned long long|char v11;  // sil
    unsigned long long v12;  // rdi
    unsigned long v13;  // rdi
    unsigned long long v14;  // r8
    unsigned long long v15;  // r9
    unsigned long long v16;  // r10
    unsigned long long v17;  // r10
    char v18;  // r11b
    unsigned long long v19;  // r11
    unsigned long long v2;  // [bp-0x50]
    unsigned long v20;  // r12
    unsigned long long v21;  // r13
    unsigned long long v22;  // r13
    unsigned long long v23;  // r14
    unsigned long long v24;  // r15
    unsigned long long v3;  // [bp-0x48]
    unsigned long long v4;  // [bp-0x40]
    unsigned long long v6;  // rax
    unsigned long long v7;  // rcx
    unsigned long long|unsigned int v8;  // edx
    unsigned long v9;  // rbx

    v17 = v11;
    tmp_64 = ((long long)*(v11 + 4));
    tmp_68 = ((long long)*(v11 + 4));
    tmp_72 = ((long long)*(v8 + 4));
    v0 = v13;
    v22 = ((long long)((((int)tmp_68) ^ ((int)(tmp_64 >> 31))) - ((int)(tmp_64 >> 31))));
    v23 = ((long long)((((int)tmp_72) ^ ((int)(((long long)*(v8 + 4)) >> 31))) - ((int)(((long long)*(v8 + 4)) >> 31))));
    if (((long long)((((int)tmp_68) ^ ((int)(tmp_64 >> 31))) - ((int)(tmp_64 >> 31)))) < ((long long)((((int)tmp_72) ^ ((int)(((long long)*(v8 + 4)) >> 31))) - ((int)(((long long)*(v8 + 4)) >> 31)))))
    {
        v17 = v8;
        v22 = ((long long)((((int)tmp_72) ^ ((int)(((long long)*(v8 + 4)) >> 31))) - ((int)(((long long)*(v8 + 4)) >> 31))));
        v8 = v11;
        v23 = ((long long)((((int)tmp_68) ^ ((int)(tmp_64 >> 31))) - ((int)(tmp_64 >> 31))));
    }
    if (v23 != 0)
    {
        v10 = ((long long)(((int)(((long long)*(v17 + 4)) >> 31)) & 1));
        v20 = ((long long)(((int)(((long long)*(v8 + 4)) >> 31)) & 1));
        v9 = ((long long)(((int)(((long long)*(v8 + 4)) >> 31)) | ((int)(((long long)*(v17 + 4)) >> 31))));
        v14 = 0 - ((long long)(((int)(((long long)*(v17 + 4)) >> 31)) & 1));
        v24 = 0 - v9;
        v15 = 0 - ((long long)(((int)(((long long)*(v8 + 4)) >> 31)) & 1));
        tmp_40 = v22;
        v21 = (0 != v20? v23 : v22);
        if (v9 + (0 != v20? v23 : tmp_40) <= ((long long)v0->field_0))
        {
            v6 = v0->field_8;
        }
        else
        {
            v4 = v8;
            v3 = v17;
            v2 = v15;
            v1 = v14;
            v6 = mpz_realloc();
            v14 = v1;
            v15 = v2;
            v17 = v3;
            v8 = v4;
        }
        v12 = *(v17 + 8);
        v16 = *(v8 + 8);
        v7 = 0;
        do
        {
            tmp_5 = (*(v12 + v7 * 8) ^ v14) + v10;
            v10 = [D] amd64g_calculate_condition(0x2<64>, 0x4<64>, Xor(Load(addr=(rdi<8> + (rcx<8> << 0x3<8>)), size=8, endness=Iend_LE), r8<8>), rbp<8>, cc_ndep<8>);
            v19 = 0;
            v11 = [D] amd64g_calculate_condition(0x2<64>, 0x4<64>, Xor(Load(addr=(r10<8> + (rcx<8> << 0x3<8>)), size=8, endness=Iend_LE), r9<8>), r12<8>, cc_ndep<8>);
            tmp_22 = (tmp_5 | (*(v16 + v7 * 8) ^ v15) + v20) ^ v24;
            v20 = [D] amd64g_calculate_condition(0x2<64>, 0x4<64>, Xor(Load(addr=(r10<8> + (rcx<8> << 0x3<8>)), size=8, endness=Iend_LE), r9<8>), r12<8>, cc_ndep<8>);
            v18 = ((char)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, t22, rbx<8>, cc_ndep<8>));
            *(v6 + v7 * 8) = tmp_22 + v9;
            v7 += 1;
            v9 = ((long long)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, t22, rbx<8>, cc_ndep<8>));
        }
        while (v23 != v7);
        if (v11 == 0)
        {
            if (v8 > v23)
            {
                do
                {
                    v11 = 0;
                    tmp_14 = ((*(v12 + v7 * 8) ^ v14) + v10 | v15) ^ v24;
                    v10 = [D] amd64g_calculate_condition(0x2<64>, 0x4<64>, Xor(Load(addr=(rdi<8> + (rcx<8> << 0x3<8>)), size=8, endness=Iend_LE), r8<8>), rbp<8>, cc_ndep<8>);
                    v11 = ((char)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, t14, rbx<8>, cc_ndep<8>));
                    *(v6 + v7 * 8) = tmp_14 + v9;
                    v7 += 1;
                    v9 = ((long long)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, t14, rbx<8>, cc_ndep<8>));
                }
                while (v8 != v7);
                if (rsi<8> != 0)
                {
                    *(v6 + v8 * 8) = 1;
                    v8 = ((int)v8) + 1;
                    v0->field_4 = (v24 != 0? 0 - v8 : ((int)rdx<8>));
                    return v0;
                }
            }
            else if (r11<8> != 0)
            {
                *(v6 + v8 * 8) = 1;
                v8 = ((int)v8) + 1;
                v0->field_4 = (v24 != 0? 0 - v8 : ((int)rdx<8>));
                return v0;
            }
            else if (v8 == 0)
            {
                v8 = 0;
                v0->field_4 = (v24 != 0? 0 - v8 : ((int)rdx<8>));
                return v0;
            }
            if ((v8 <= v23 || rsi<8> == 0) && (r11<8> == 0 || v8 > v23) && (v8 > v23 || v8 != 0))
            {
                v8 = v21;
                while (*(v6 + (v8 << 3) + 8) == 0)
                {
                    v8 -= 1;
                    v8 = 0;
                    break;
                }
                v0->field_4 = (v24 != 0? 0 - v8 : ((int)rdx<8>));
                return v0;
            }
        }
        __assert_fail(); /* do not return */
    }
}
