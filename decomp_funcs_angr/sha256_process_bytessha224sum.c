typedef struct struct_0 {
    char padding_0[40];
    unsigned long long field_28;
    char field_30;
} struct_0;

typedef struct struct_2 {
    char field_0;
} struct_2;

typedef struct struct_1 {
    char field_0;
} struct_1;

int sha256_process_bytes()
{
    BOT tmp_15;  // tmp #15
    BOT tmp_11;  // tmp #11
    uint128_t [4] v11;  // rbp
    unsigned long long v12;  // rsi
    unsigned long long v13;  // rsi
    void *|unsigned long long v14;  // rdi
    struct_0 *v15;  // r12
    unsigned long long v16;  // r13
    unsigned long v17;  // r13
    unsigned long v18;  // r14
    struct_2 *|unsigned long long v19;  // r14
    unsigned int|unsigned long long v2;  // eax
    unsigned int|unsigned long long v20;  // r15
    uint128_t v21;  // xmm0
    unsigned int|unsigned long long|struct_1 * v4;  // rax
    struct_1 *|unsigned long long v5;  // rcx
    unsigned long long v6;  // rcx
    struct_0 *|unsigned long long v7;  // rdx
    struct_2 * v8;  // rbx
    unsigned long long v9;  // rbp

    v16 = v12;
    v15 = v7;
    v8 = v14;
    v9 = v7->field_28;
    if (v7->field_28 != 0)
    {
        v20 = v7 + 48;
        v18 = (!(128 - v9 <= v12)? v12 : 128 - v9);
        memcpy(v7 + 48 + v9, v14, (!(128 - v9 <= v12)? v12 : 128 - v9));
        v12 = v15->field_28 + v18;
        v15->field_28 = v15->field_28 + v18;
        if (v12 > 64)
        {
            sha256_process_block();
            v9 = v9 + v18 & 18446744069414584256;
            v4 = v7 + 48 + v9;
            v7 = ((long long)(((int)v15->field_28) & 63));
            v15->field_28 = ((long long)(((int)v15->field_28) & 63));
            if (!(((int)v7) < 8))
            {
                v12 = v15 + 56 & 18446744069414584312;
                v15->field_30 = v4->field_0;
                *(v20 + v7 + 8) = *(v7 + v4 + 8);
                v4 -= v20 - (v15 + 56 & 18446744069414584312);
                v20 = ((int)(((int)(v20 - (v15 + 56 & 18446744069414584312) + v7)) & -8));
                if ((((int)(v20 - (v15 + 56 & 18446744069414584312) + v7)) & -8) >= 8)
                {
                    v20 = ((int)(v20 & -8));
                    v7 = 0;
                    do
                    {
                        v6 = v7;
                        v7 = ((long long)(((int)v7) + 8));
                        *(v12 + v6) = *(v4 + v6);
                    }
                    while (((int)v7) < v20);
                }
            }
            else if (!(((long long)(v7 & 4)) == 0))
            {
                v15->field_30 = v4->field_0;
                v4 = ((int)*(v7 + v4 + 4));
                *(v20 + v7 + 4) = *(v7 + v4 + 4);
            }
            else if (((int)v7) != 0)
            {
                v15->field_30 = v4->field_0;
                if (((long long)(v7 & 2)) != 0)
                {
                    v4 = ((long long)*(v7 + v4 + 2));
                    tmp_15 = v4;
                    *(v20 + v7 + 2) = tmp_15;
                }
            }
        }
        v8 = v14 + v18;
        v16 -= v18;
    }
    if (v16 > 63)
    {
        if (((long long)(v8 & 3)) != 0)
        {
            v11 = v15 + 48;
            if (v16 != 64)
            {
                v20 = v16 - 65 >> 6;
                v19 = ((v16 - 65 >> 6) + 1) * 64 + v8;
                while (true)
                {
                    v21 = *(rbx<8>);
                    v8 = rbx<8> + 64;
                    v11[0] = v21;
                    v11[1] = *(v8 + 0x30);
                    v11[2] = *(v8 + 0x20);
                    v11[3] = *(v8 + 0x10);
                    sha256_process_block();
                    if (v8 == v19)
                    {
                        break;
                    }
                }
                v16 = v16 + (0 - v20) * 64 - 64;
                /* goto 4223032; */
            }
            else
            {
                v19 = v8;
                /* goto 4223032; */
            }
        }
        else
        {
            tmp_11 = v16;
            v16 = ((long long)(((int)v16) & 63));
            v8 += tmp_11 & 18446744069414584256;
            v4 = sha256_process_block();
        }
    }
    if (((long long)(v8 & 3)) == 0 || v16 <= 63)
    {
        if (v16 == 0)
        {
            return v4;
        }
        v11 = v15 + 48;
        v19 = v8;
    }
    if (v16 != 0 || ((long long)(v8 & 3)) != 0 && v16 > 63)
    {
        v13 = v15->field_28;
        v2 = v16;
        v5 = v11 + v15->field_28;
        if (!(((int)v16) < 8))
        {
            v14 = v5 + 8 & 18446744069414584312;
            v5->field_0 = v19->field_0;
            *(v5 + v16 + 8) = *(v19 + v16 + 8);
            v5 -= v5 + 8 & 18446744069414584312;
            v19 -= v5;
            v2 = ((int)(((int)(v16 + v5)) & -8));
            if ((((int)(v16 + v5)) & -8) >= 8)
            {
                v2 = ((long long)(v2 & -8));
                v7 = 0;
                do
                {
                    v5 = v7;
                    v7 = ((long long)(((int)v7) + 8));
                    *(v14 + v5) = *(v19 + v5);
                }
                while (((int)v7) < ((int)v2));
            }
        }
        else if (!(((long long)(v16 & 4)) == 0))
        {
            v5->field_0 = v19->field_0;
            *(v5 + v16 + 4) = *(v19 + v16 + 4);
        }
        else if (((int)v16) != 0)
        {
            v5->field_0 = v19->field_0;
            if (((long long)(v2 & 2)) != 0)
            {
                *(v5 + v16 + 2) = *(v19 + v16 + 2);
            }
        }
        v17 = v16 + v13;
        if (v17 > 63)
        {
            v17 -= 64;
            sha256_process_block();
            v2 = memcpy(v11, v15 + 112, v17);
            v15->field_28 = v17;
            return rax<8>;
        }
        v15->field_28 = v17;
        return rax<8>;
    }
}
