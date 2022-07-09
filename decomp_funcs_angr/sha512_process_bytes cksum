typedef struct struct_0 {
    char padding_0[80];
    unsigned long long field_50;
    char field_58;
} struct_0;

typedef struct struct_2 {
    char field_0;
} struct_2;

typedef struct struct_3 {
    char field_0;
} struct_3;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

int sha512_process_bytes()
{
    BOT tmp_62;  // tmp #62
    BOT tmp_11;  // tmp #11
    BOT tmp_8;  // tmp #8
    BOT tmp_54;  // tmp #54
    uint128_t [8] v10;  // rbp
    struct_3 *|struct_1 *|unsigned long long v11;  // rsi
    struct_3 *|struct_1 * v12;  // rsi
    struct_1 *|void * v13;  // rdi
    struct_0 *v14;  // r12
    unsigned long long v15;  // r13
    unsigned long v16;  // r13
    unsigned long v17;  // r14
    struct_2 * v18;  // r14
    unsigned long long v19;  // r15
    unsigned long v20;  // d
    uint128_t v21;  // xmm0
    unsigned long long v3;  // rax
    unsigned long long v4;  // rcx
    unsigned long long v5;  // rdx
    struct_0 *v6;  // rdx
    struct_2 * v7;  // rbx
    unsigned long long v8;  // rbp

    v15 = v11;
    v14 = v6;
    v7 = v13;
    v8 = v6->field_50;
    if (v6->field_50 != 0)
    {
        v19 = v6 + 88;
        v17 = (!(0x100 - v8 <= v11)? v11 : 0x100 - v8);
        v3 = memcpy(v6 + 88 + v8, v13, (!(0x100 - v8 <= v11)? v11 : 0x100 - v8));
        v11 = v14->field_50 + v17;
        v14->field_50 = v14->field_50 + v17;
        if (v11 > 128)
        {
            sha512_process_block();
            v8 = v8 + v17 & 18446744069414584192;
            v11 = v6 + 88 + v8;
            v3 = ((long long)(((int)v14->field_50) & 127));
            v14->field_50 = ((long long)(((int)v14->field_50) & 127));
            if (!(((int)v3) < 8))
            {
                v13 = v14 + 96 & 18446744069414584312;
                v14->field_58 = v11->field_0;
                *(v19 + v3 + 8) = *(v3 + v11 + 8);
                v19 -= v14 + 96 & 18446744069414584312;
                v11 -= v19;
                tmp_62 = ((long long)(v3 + v19 >> 3));
                v3 = v3 + v19 >> 3;
                for (v4 = tmp_62; v4 != 0; v11 += v20 * 8)
                {
                    v4 -= 1;
                    v13->field_0 = v11->field_0;
                    v13 += v20 * 8;
                }
            }
            else if (!(((long long)(((char)(((int)v6->field_50) & 127)) & 4)) == 0))
            {
                v14->field_58 = v11->field_0;
                *(v6 + 88 + v3 + 4) = *(v3 + v11 + 4);
            }
            else if (((int)(((int)v6->field_50) & 127)) != 0)
            {
                v14->field_58 = v11->field_0;
                if (((long long)(v3 & 2)) != 0)
                {
                    *(v6 + 88 + v3 + 2) = *(v3 + v11 + 2);
                }
            }
        }
        v7 += v17;
        v15 -= v17;
    }
    if (v15 > 127)
    {
        if (((long long)(v7 & 7)) != 0)
        {
            v10 = v6 + 88;
            if (v15 != 128)
            {
                v19 = v15 - 129 >> 7;
                v18 = ((v15 - 129 >> 7) + 1) * 128 + v7;
                while (true)
                {
                    v21 = *(rbx<8>);
                    v7 = rbx<8> - 18446744069414584192;
                    v10[0] = v21;
                    v10[1] = *(v7 + 0x70);
                    v10[2] = *(v7 + 0x60);
                    v10[3] = *(v7 + 0x50);
                    v10[4] = *(v7 + 0x40);
                    v10[5] = *(v7 + 0x30);
                    v10[6] = *(v7 + 0x20);
                    v10[7] = *(v7 + 0x10);
                    sha512_process_block();
                    if (v7 == v18)
                    {
                        break;
                    }
                }
                v15 = v15 + (0 - v19) * 128 - 128;
                /* goto 4264180; */
            }
            else
            {
                v18 = v7;
                /* goto 4264180; */
            }
        }
        else
        {
            tmp_11 = v15;
            v15 = ((long long)(((int)v15) & 127));
            v7 += tmp_11 & 18446744069414584192;
            v3 = sha512_process_block();
        }
    }
    if (v15 <= 127 || ((long long)(v7 & 7)) == 0)
    {
        if (v15 == 0)
        {
            return v3;
        }
        v10 = v6 + 88;
        v18 = v7;
    }
    if (v15 != 0 || v15 > 127 && ((long long)(v7 & 7)) != 0)
    {
        v5 = v6->field_50;
        v12 = v10 + v14->field_50;
        if (((int)v15) < 8)
        {
            if (!(((long long)(v15 & 4)) == 0))
            {
                v12->field_0 = v18->field_0;
                *(v12 + v15 + 4) = *(v18 + v15 + 4);
            }
            else if (((int)v15) != 0)
            {
                v12->field_0 = v18->field_0;
                if (((long long)(v15 & 2)) != 0)
                {
                    *(v12 + v15 + 2) = *(v18 + v15 + 2);
                }
            }
            v16 = v15 + v5;
            if (v16 <= 127)
            {
                v14->field_50 = v16;
                return v3;
            }
            v16 -= 128;
            sha512_process_block();
            memcpy(v10, v14 + 216, v16);
            v14->field_50 = v16;
            return v3;
        }
        v13 = v12 + 8 & 18446744069414584312;
        v12->field_0 = v18->field_0;
        *(v12 + v15 + 8) = *(v18 + v15 + 8);
        tmp_8 = v12 - (v12 + 8 & 18446744069414584312);
        v12 = v18 - (v12 - (v12 + 8 & 18446744069414584312));
        tmp_54 = ((long long)(tmp_8 + v15));
        v16 = v15 + v5;
        for (v4 = tmp_54 >> 3; v4 != 0; v12 += v20 * 8)
        {
            v4 -= 1;
            v13->field_0 = v12->field_0;
            v13 += v20 * 8;
        }
        if (v16 <= 127)
        {
            v14->field_50 = v16;
            return v3;
        }
        else
        {
            v16 -= 128;
            sha512_process_block();
            memcpy(v10, v14 + 216, v16);
            v14->field_50 = v16;
            return v3;
        }
    }
}
