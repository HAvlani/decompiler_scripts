typedef struct struct_0 {
    char padding_0[28];
    unsigned int field_1c;
    char field_20;
} struct_0;

typedef struct struct_1 {
    char field_0;
} struct_1;

typedef struct struct_2 {
    char field_0;
} struct_2;

int sha1_process_bytes()
{
    BOT tmp_15;  // tmp #15
    BOT tmp_11;  // tmp #11
    unsigned long long|unsigned int v10;  // esi
    unsigned long long v11;  // rsi
    unsigned long long|void * v12;  // rdi
    unsigned long long v13;  // r8
    uint128_t [4] v14;  // r12
    unsigned long long v15;  // r12
    struct_1 * v16;  // r13
    unsigned long v17;  // r13
    struct_0 *v18;  // r14
    unsigned long long|unsigned int v19;  // r15d
    struct_2 *|unsigned long long|unsigned int v2;  // rax
    uint128_t v20;  // xmm0
    struct_2 *|unsigned long long v4;  // rcx
    unsigned long long v5;  // rcx
    struct_0 *|unsigned long long|unsigned int v6;  // rdx
    struct_1 * v7;  // rbx
    unsigned long v8;  // rbp
    unsigned long long v9;  // rbp

    v18 = v6;
    v9 = v10;
    v7 = v12;
    if (v6->field_1c != 0)
    {
        v15 = ((long long)v6->field_1c);
        v19 = v6 + 32;
        v17 = (!(128 - v15 <= v10)? v10 : 128 - v15);
        memcpy(v6 + 32 + v15, v12, (!(128 - v15 <= v10)? v10 : 128 - v15));
        v10 = ((int)(v18->field_1c + ((int)v17)));
        v18->field_1c = v18->field_1c + ((int)v17);
        if (v10 > 64)
        {
            sha1_process_block();
            v5 = ((long long)v18->field_1c);
            v2 = (v15 + v17 & 18446744069414584256) + v6 + 32;
            v6 = ((long long)(v18->field_1c & 63));
            v18->field_1c = v18->field_1c & 63;
            if (!(((int)v6) < 8))
            {
                v18->field_20 = v2->field_0;
                *(v19 + v6 + 8) = *(v2 + v6 + 8);
                v10 = v18 + 40 & 18446744069414584312;
                v2 -= v19 - (v18 + 40 & 18446744069414584312);
                v19 = ((int)(((int)(v19 - (v18 + 40 & 18446744069414584312) + v6)) & -8));
                if ((((int)(v19 - (v18 + 40 & 18446744069414584312) + v6)) & -8) >= 8)
                {
                    v19 = ((int)(v19 & -8));
                    v6 = 0;
                    do
                    {
                        v5 = v6;
                        v6 = ((long long)(((int)v6) + 8));
                        *(v10 + v5) = *(v2 + v5);
                    }
                    while (((int)v6) < v19);
                }
            }
            else if (!(((long long)(v5 & 4)) == 0))
            {
                v18->field_20 = v2->field_0;
                v2 = ((int)*(v2 + v6 + 4));
                *(v19 + v6 + 4) = *(v2 + v6 + 4);
            }
            else if (((int)v6) != 0)
            {
                v18->field_20 = v2->field_0;
                if ((((char)((int)v5)) & 2) != 0)
                {
                    v2 = ((long long)*(v2 + v6 + 2));
                    tmp_15 = v2;
                    *(v19 + v6 + 2) = tmp_15;
                }
            }
        }
        v7 = v12 + v17;
        v9 -= v17;
    }
    if (v9 > 63)
    {
        if (((long long)(v7 & 3)) != 0)
        {
            v14 = v18 + 32;
            if (v9 != 64)
            {
                v19 = v9 - 65 >> 6;
                v16 = v7 + ((v9 - 65 >> 6) + 1) * 64;
                while (true)
                {
                    v20 = *(rbx<8>);
                    v7 = rbx<8> + 64;
                    v14[0] = v20;
                    v14[1] = *(v7 + 0x30);
                    v14[2] = *(v7 + 0x20);
                    v14[3] = *(v7 + 0x10);
                    sha1_process_block();
                    if (v7 == v16)
                    {
                        break;
                    }
                }
                v9 = v9 + (0 - v19) * 64 - 64;
                /* goto 4216818; */
            }
            else
            {
                v16 = v7;
                /* goto 4216818; */
            }
        }
        else
        {
            tmp_11 = v9;
            v9 = ((long long)(((int)v9) & 63));
            v7 += tmp_11 & 18446744069414584256;
            v2 = sha1_process_block();
        }
    }
    if (v9 <= 63 || ((long long)(v7 & 3)) == 0)
    {
        if (v9 == 0)
        {
            return v2;
        }
        v14 = v18 + 32;
        v16 = v7;
    }
    if (v9 != 0 || v9 > 63 && ((long long)(v7 & 3)) != 0)
    {
        v11 = ((long long)v18->field_1c);
        v4 = v14 + ((long long)v18->field_1c);
        if (!(((int)v9) < 8))
        {
            v13 = v4 + 8 & 18446744069414584312;
            v4->field_0 = v16->field_0;
            *(v4 + v9 + 8) = *(v16 + v9 + 8);
            v4 -= v4 + 8 & 18446744069414584312;
            v2 = v16 - v4;
            v6 = ((int)(((int)(v4 + v9)) & -8));
            if ((((int)(v4 + v9)) & -8) >= 8)
            {
                v6 = ((int)(v6 & -8));
                v4 = 0;
                do
                {
                    v12 = v4;
                    v4 = ((long long)(((int)v4) + 8));
                    *(v13 + v12) = *(v2 + v12);
                }
                while (((int)v4) < v6);
            }
        }
        else if (!(((long long)(v9 & 4)) == 0))
        {
            v4->field_0 = v16->field_0;
            *(v4 + v9 + 4) = *(v16 + v9 + 4);
        }
        else if (((int)v9) != 0)
        {
            v4->field_0 = v16->field_0;
            if (((long long)(v9 & 2)) != 0)
            {
                *(v4 + v9 + 2) = *(v16 + v9 + 2);
            }
        }
        v8 = v9 + v11;
        if (v8 > 63)
        {
            v8 -= 64;
            sha1_process_block();
            v2 = memcpy(v14, v18 + 96, v8);
            v18->field_1c = ((int)v8);
            return v2;
        }
        v18->field_1c = ((int)v8);
        return v2;
    }
}
