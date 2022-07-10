typedef struct struct_0 {
    char padding_0[80];
    unsigned long long field_50;
    char field_58;
} struct_0;

typedef struct struct_2 {
    char field_0;
} struct_2;

typedef struct struct_1 {
    char field_0;
} struct_1;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

int sha512_process_bytes()
{
    BOT tmp_62;  // tmp #62
    BOT tmp_11;  // tmp #11
    BOT tmp_8;  // tmp #8
    BOT tmp_54;  // tmp #54
    struct_3 *|struct_1 * v11;  // rsi
    struct_3 *|unsigned long long|struct_1 * v12;  // rsi
    struct_3 *|void * v13;  // rdi
    struct_0 *v14;  // r12
    unsigned long long v15;  // r13
    unsigned long v16;  // r13
    struct_2 * v17;  // r14
    unsigned long v18;  // r14
    unsigned long long v19;  // r15
    unsigned long v20;  // d
    uint128_t v21;  // xmm0
    unsigned long long v3;  // rax
    unsigned long long v4;  // rcx
    struct_0 *v5;  // rdx
    unsigned long long v6;  // rdx
    struct_2 * v7;  // rbx
    uint128_t [8] v8;  // rbp
    unsigned long long v9;  // rbp

    v15 = v12;
    v14 = v5;
    v7 = v13;
    v9 = v5->field_50;
    if (v5->field_50 != 0)
    {
        v19 = v5 + 88;
        v18 = (!(0x100 - v9 <= v12)? v12 : 0x100 - v9);
        v3 = memcpy(v5 + 88 + v9, v13, (!(0x100 - v9 <= v12)? v12 : 0x100 - v9));
        v12 = v14->field_50 + v18;
        v14->field_50 = v14->field_50 + v18;
        if (v12 > 128)
        {
            sha512_process_block();
            v9 = v9 + v18 & 18446744069414584192;
            v12 = v5 + 88 + v9;
            v3 = ((long long)(((int)v14->field_50) & 127));
            v14->field_50 = ((long long)(((int)v14->field_50) & 127));
            if (!(((int)v3) < 8))
            {
                v13 = v14 + 96 & 18446744069414584312;
                v14->field_58 = v12->field_0;
                *(v19 + v3 + 8) = *(v3 + v12 + 8);
                v19 -= v14 + 96 & 18446744069414584312;
                v12 -= v19;
                tmp_62 = ((long long)(v3 + v19 >> 3));
                v3 = v3 + v19 >> 3;
                for (v4 = tmp_62; v4 != 0; v12 += v20 * 8)
                {
                    v4 -= 1;
                    v13->field_0 = v12->field_0;
                    v13 += v20 * 8;
                }
            }
            else if (!(((long long)(((char)(((int)v5->field_50) & 127)) & 4)) == 0))
            {
                v14->field_58 = v12->field_0;
                *(v5 + 88 + v3 + 4) = *(v3 + v12 + 4);
            }
            else if (((int)(((int)v5->field_50) & 127)) != 0)
            {
                v14->field_58 = v12->field_0;
                if (((long long)(v3 & 2)) != 0)
                {
                    *(v5 + 88 + v3 + 2) = *(v3 + v12 + 2);
                }
            }
        }
        v7 += v18;
        v15 -= v18;
    }
    if (v15 > 127)
    {
        if (((long long)(v7 & 7)) != 0)
        {
            v8 = v5 + 88;
            if (v15 != 128)
            {
                v19 = v15 - 129 >> 7;
                v17 = ((v15 - 129 >> 7) + 1) * 128 + v7;
                while (true)
                {
                    v21 = *(rbx<8>);
                    v7 = rbx<8> - 18446744069414584192;
                    v8[0] = v21;
                    v8[1] = *(v7 + 0x70);
                    v8[2] = *(v7 + 0x60);
                    v8[3] = *(v7 + 0x50);
                    v8[4] = *(v7 + 0x40);
                    v8[5] = *(v7 + 0x30);
                    v8[6] = *(v7 + 0x20);
                    v8[7] = *(v7 + 0x10);
                    sha512_process_block();
                    if (v7 == v17)
                    {
                        break;
                    }
                }
                v15 = v15 + (0 - v19) * 128 - 128;
                /* goto 4228516; */
            }
            else
            {
                v17 = v7;
                /* goto 4228516; */
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
    if (((long long)(v7 & 7)) == 0 || v15 <= 127)
    {
        if (v15 == 0)
        {
            return v3;
        }
        v8 = v5 + 88;
        v17 = v7;
    }
    if (v15 != 0 || ((long long)(v7 & 7)) != 0 && v15 > 127)
    {
        v6 = v5->field_50;
        v11 = v8 + v14->field_50;
        if (((int)v15) < 8)
        {
            if (!(((long long)(v15 & 4)) == 0))
            {
                v11->field_0 = v17->field_0;
                *(v11 + v15 + 4) = *(v17 + v15 + 4);
            }
            else if (((int)v15) != 0)
            {
                v11->field_0 = v17->field_0;
                if (((long long)(v15 & 2)) != 0)
                {
                    *(v11 + v15 + 2) = *(v17 + v15 + 2);
                }
            }
            v16 = v15 + v6;
            if (v16 <= 127)
            {
                v14->field_50 = v16;
                return v3;
            }
            v16 -= 128;
            sha512_process_block();
            memcpy(v8, v14 + 216, v16);
            v14->field_50 = v16;
            return v3;
        }
        v13 = v11 + 8 & 18446744069414584312;
        v11->field_0 = v17->field_0;
        *(v11 + v15 + 8) = *(v17 + v15 + 8);
        tmp_8 = v11 - (v11 + 8 & 18446744069414584312);
        v11 = v17 - (v11 - (v11 + 8 & 18446744069414584312));
        tmp_54 = ((long long)(tmp_8 + v15));
        v16 = v15 + v6;
        for (v4 = tmp_54 >> 3; v4 != 0; v11 += v20 * 8)
        {
            v4 -= 1;
            v13->field_0 = v11->field_0;
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
            memcpy(v8, v14 + 216, v16);
            v14->field_50 = v16;
            return v3;
        }
    }
}
