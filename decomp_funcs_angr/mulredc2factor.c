typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int mulredc2()
{
    BOT tmp_50;  // tmp #50
    BOT tmp_191;  // tmp #191
    BOT tmp_194;  // tmp #194
    BOT tmp_195;  // tmp #195
    BOT tmp_196;  // tmp #196
    BOT tmp_110;  // tmp #110
    unsigned long v0;  // [bp+0x8]
    unsigned long v1;  // [bp+0x10]
    char v10;  // sil
    unsigned long long v11;  // rsi
    unsigned long v12;  // rsi
    struct_0 *v13;  // rdi
    unsigned long v14;  // r8
    unsigned long v15;  // r8
    unsigned long v16;  // r9
    unsigned long long v17;  // r10
    unsigned long v18;  // r11
    unsigned long long v19;  // r12
    unsigned long long v2;  // rax
    unsigned long long v20;  // cc_dep2
    unsigned long|unsigned long long v3;  // rcx
    unsigned long v4;  // rcx
    unsigned long v5;  // rdx
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rbp
    unsigned long long v8;  // rbp
    unsigned long long v9;  // rsi

    v17 = v0;
    v8 = 0 - v1;
    if (!(!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>)))))
    {
        __assert_fail(); /* do not return */
    }
    else if (!(!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>)))))
    {
        __assert_fail(); /* do not return */
    }
    else if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>))))
    {
        tmp_50 = ((long long)(v5 * v4)) + ((long long)(((long long)(v5 * v15)) != 0)) + ((long long)((((long long)(v5 * v15)) * v8) * v17 >> 64)) + ((long long)(v5 * v15 >> 64)) + ((long long)((((long long)(v5 * v15)) * v8) * v16));
        tmp_191 = ...;
        tmp_194 = v12;
        tmp_195 = ((long long)(v12 * v15 >> 64));
        tmp_196 = ((long long)(v12 * v15));
        v11 = 0;
        v19 = tmp_196 + ((long long)(v5 * v4)) + ((long long)(((long long)(v5 * v15)) != 0)) + ((long long)((((long long)(v5 * v15)) * v8) * v17 >> 64)) + ((long long)(v5 * v15 >> 64)) + ((long long)((((long long)(v5 * v15)) * v8) * v16));
        v14 = ...;
        v7 = v19 * v8;
        v18 = ((long long)(v7 * v17 >> 64));
        v10 = ((char)(v19 != 0));
        tmp_110 = rsi<8>;
        v9 = ((long long)(v19 != 0)) + ((long long)(tmp_194 * v4)) + tmp_191 + ((long long)(v7 * v17 >> 64)) + tmp_195 + ((tmp_196 + tmp_50 <= tmp_196? 1 : 0) & 1) + ((long long)(v7 * v16));
        v3 = ...;
        v6 = v3;
        v2 = v9;
        v20 = v3;
        if (v16 < v3)
        {
            v3 = v3 - v16 - ((long long)(v2 < v17));
            v6 = v3;
            v2 -= v17;
            v13->field_0 = v6;
            return v2;
        }
        else if (!(((char)(v16 == v20))))
        {
            v13->field_0 = v6;
            return v2;
        }
        else if (v17 <= v2)
        {
            v3 = v3 - v16 - ((long long)(v2 < v17));
            v6 = v3;
            v2 -= v17;
            v13->field_0 = v6;
            return v2;
        }
        else
        {
            v13->field_0 = v6;
            return v2;
        }
    }
    else
    {
        __assert_fail(); /* do not return */
    }
}
