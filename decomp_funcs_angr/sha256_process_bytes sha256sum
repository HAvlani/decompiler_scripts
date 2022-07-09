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
    struct_1 *|unsigned long long|unsigned int v1;  // rax
    unsigned long long v11;  // rbp
    unsigned long long v12;  // rsi
    unsigned long long v13;  // rsi
    unsigned long long|void * v14;  // rdi
    struct_0 *v15;  // r12
    unsigned long long v16;  // r13
    unsigned long v17;  // r13
    unsigned long long|struct_2 * v18;  // r14
    unsigned long v19;  // r14
    unsigned long long|unsigned int v20;  // r15
    uint128_t v21;  // xmm0
    unsigned long long|unsigned int v3;  // rax
    struct_1 *|unsigned long long v5;  // rcx
    unsigned long long v6;  // rcx
    unsigned long long|struct_0 * v7;  // rdx
    struct_2 * v8;  // rbx
    uint128_t [4] v9;  // rbp

    v16 = v12;
    v15 = v7;
    v8 = v14;
    v11 = v7->field_28;
    if (v7->field_28 != 0)
    {
        v20 = v7 + 48;
        v19 = (!(128 - v11 <= v12)? v12 : 128 - v11);
        memcpy(v7 + 48 + v11, v14, (!(128 - v11 <= v12)? v12 : 128 - v11));
        v12 = v15->field_28 + v19;
        v15->field_28 = v15->field_28 + v19;
        if (v12 > 64)
        {
            sha256_process_block();
            v11 = v11 + v19 & 18446744069414584256;
            v1 = v7 + 48 + v11;
            v7 = ((long long)(((int)v15->field_28) & 63));
            v15->field_28 = ((long long)(((int)v15->field_28) & 63));
            if (!(((int)v7) < 8))
            {
                v12 = v15 + 56 & 18446744069414584312;
                v15->field_30 = v1->field_0;
                *(v20 + v7 + 8) = *(v7 + v1 + 8);
                v1 -= v20 - (v15 + 56 & 18446744069414584312);
                v20 = ((int)(((int)(v20 - (v15 + 56 & 18446744069414584312) + v7)) & -8));
                if ((((int)(v20 - (v15 + 56 & 18446744069414584312) + v7)) & -8) >= 8)
                {
                    v20 = ((int)(v20 & -8));
                    v7 = 0;
                    do
                    {
                        v6 = v7;
                        v7 = ((long long)(((int)v7) + 8));
                        *(v12 + v6) = *(v1 + v6);
                    }
                    while (((int)v7) < v20);
                }
            }
            else if (!(((long long)(v7 & 4)) == 0))
            {
                v15->field_30 = v1->field_0;
                v1 = ((int)*(v7 + v1 + 4));
                *(v20 + v7 + 4) = *(v7 + v1 + 4);
            }
            else if (((int)v7) != 0)
            {
                v15->field_30 = v1->field_0;
                if (((long long)(v7 & 2)) != 0)
                {
                    v1 = ((long long)*(v7 + v1 + 2));
                    tmp_15 = v1;
                    *(v20 + v7 + 2) = tmp_15;
                }
            }
        }
        v8 = v14 + v19;
        v16 -= v19;
    }
    if (v16 > 63)
    {
        if (((long long)(v8 & 3)) != 0)
        {
            v9 = v15 + 48;
            if (v16 != 64)
            {
                v20 = v16 - 65 >> 6;
                v18 = ((v16 - 65 >> 6) + 1) * 64 + v8;
                while (true)
                {
                    v21 = *(rbx<8>);
                    v8 = rbx<8> + 64;
                    v9[0] = v21;
                    v9[1] = *(v8 + 0x30);
                    v9[2] = *(v8 + 0x20);
                    v9[3] = *(v8 + 0x10);
                    sha256_process_block();
                    if (v8 == v18)
                    {
                        break;
                    }
                }
                v16 = v16 + (0 - v20) * 64 - 64;
                /* goto 4223032; */
            }
            else
            {
                v18 = v8;
                /* goto 4223032; */
            }
        }
        else
        {
            tmp_11 = v16;
            v16 = ((long long)(((int)v16) & 63));
            v8 += tmp_11 & 18446744069414584256;
            v1 = sha256_process_block();
        }
    }
    if (((long long)(v8 & 3)) == 0 || v16 <= 63)
    {
        if (v16 == 0)
        {
            return rax<8>;
        }
        v9 = v15 + 48;
        v18 = v8;
    }
    if (v16 != 0 || ((long long)(v8 & 3)) != 0 && v16 > 63)
    {
        v13 = v15->field_28;
        v3 = v16;
        v5 = v9 + v15->field_28;
        if (!(((int)v16) < 8))
        {
            v14 = v5 + 8 & 18446744069414584312;
            v5->field_0 = v18->field_0;
            *(v5 + v16 + 8) = *(v18 + v16 + 8);
            v5 -= v5 + 8 & 18446744069414584312;
            v18 -= v5;
            v3 = ((int)(((int)(v16 + v5)) & -8));
            if ((((int)(v16 + v5)) & -8) >= 8)
            {
                v3 = ((long long)(v3 & -8));
                v7 = 0;
                do
                {
                    v5 = v7;
                    v7 = ((long long)(((int)v7) + 8));
                    *(v14 + v5) = *(v18 + v5);
                }
                while (((int)v7) < ((int)v3));
            }
        }
        else if (!(((long long)(v16 & 4)) == 0))
        {
            v5->field_0 = v18->field_0;
            *(v5 + v16 + 4) = *(v18 + v16 + 4);
        }
        else if (((int)v16) != 0)
        {
            v5->field_0 = v18->field_0;
            if (((long long)(v3 & 2)) != 0)
            {
                *(v5 + v16 + 2) = *(v18 + v16 + 2);
            }
        }
        v17 = v16 + v13;
        if (v17 > 63)
        {
            v17 -= 64;
            sha256_process_block();
            v3 = memcpy(v9, v15 + 112, v17);
            v15->field_28 = v17;
            return v3;
        }
        v15->field_28 = v17;
        return v3;
    }
}
