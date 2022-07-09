typedef struct struct_9 {
    char field_0;
    char padding_1[3];
    unsigned int field_4;
} struct_9;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

extern struct_4 crctab;
extern char g_406a4d;
extern char g_406b9e;
extern char g_406bad;

int cksum_slice8.part.0()
{
    BOT tmp_72;  // tmp #72
    BOT tmp_76;  // tmp #76
    BOT tmp_129;  // tmp #129
    BOT tmp_163;  // tmp #163
    BOT tmp_28;  // tmp #28
    BOT tmp_12;  // tmp #12
    BOT tmp_5;  // tmp #5
    unsigned long v0;  // [bp-0x1070]
    unsigned long v1;  // [bp-0x1068]
    unsigned long v10;  // [bp-0x20]
    unsigned long v11;  // [bp-0x18]
    unsigned long v12;  // [bp-0x10]
    unsigned long v13;  // [bp-0x8]
    unsigned long v15;  // [bp+0xefb0]
    unsigned long v16;  // [bp+0xefc0]
    unsigned long long v17;  // [bp+0xefd0]
    unsigned long v18;  // [bp+0xefd8]
    unsigned long long v19;  // [bp+0xefe0]
    unsigned long v2;  // [bp-0x1060]
    unsigned long long v20;  // [bp+0xefe8]
    unsigned long long v21;  // rax
    unsigned long long v22;  // rax
    unsigned long|unsigned long long v23;  // rdx
    unsigned long v24;  // rbx
    unsigned long long v25;  // rbx
    unsigned long long v26;  // rbx
    unsigned long v27;  // rbx
    unsigned long long v28;  // rbx
    unsigned long long v29;  // rbp
    struct_4 *v3;  // [bp-0x1058]
    struct_9 * v30;  // rsi
    unsigned long long|void * v31;  // rdi
    unsigned long long v33;  // r8
    unsigned long long v35;  // r12
    unsigned long v36;  // r12
    unsigned long v37;  // r13
    struct_9 *v38;  // r13
    unsigned long long v39;  // r13
    unsigned long v4;  // [bp-0x1050]
    unsigned long v40;  // r14
    unsigned long long v41;  // r14
    unsigned long long v42;  // r15
    void *v43;  // r15
    unsigned long v44;  // r15
    struct_4 *v45;  // fs
    char v5;  // [bp-0x1048]
    unsigned int v6;  // [bp-0x1044]
    char v7;  // [bp-0x1040]
    unsigned long v8;  // [bp-0x1030]
    unsigned long v9;  // [bp-0x30]

    v13 = v44;
    v12 = v40;
    v11 = v37;
    v10 = v36;
    rsp<8> = &stack_base-48;
    v9 = v27;
    do
    {
        rsp<8> = rsp<8> - 0x1000;
        v8 = v8;
    }
    while (rsp<8> != &stack_base-65584);
    rsp<8> = rsp<8> - 40;
    v29 = 0;
    v26 = 0;
    v4 = v23;
    v38 = v30;
    v43 = &v5;
    v16 = *(v45 + 0x28);
    while (true)
    {
        rsp<8> = rsp<8> - 8;
        v2 = &g_406a4d;
        v22 = fread_unlocked(v30, 0x1, 0x10000, v31);
        if (v22 != 0)
        {
            v29 += v22;
            if (!(((char)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, rbp<8>, rax<8>, cc_ndep<8>))))
            {
                if (v22 > 7)
                {
                    v30 = v43;
                    v31 = v43 + (v22 - 8 >> 3) * 8 + 8;
                    do
                    {
                        tmp_72 = ((long long)v5);
                        tmp_76 = ((long long)v6);
                        v30 = &v7;
                        v28 = v26 ^ ((long long)(((int)tmp_72) * 0x1000000 | ((int)tmp_72) * 0x100 & 0xff0000 | ((int)tmp_72) >> 8 & 0xff00 | ((int)tmp_72) >> 24 & 255));
                        tmp_129 = v28;
                        tmp_163 = v28;
                        v26 = ...;
                    }
                    while (v30 != v31);
                    v33 = 0 - (v22 - 8 >> 3);
                    v23 = v22 + v33 * 8 - 9;
                }
                else
                {
                    v23 = v22 - 1;
                }
                if (v22 <= 7 || ((long long)(v22 & 7)) != 0)
                {
                    v23 = rsi<8> + v23 + 1;
                    do
                    {
                        v30 = rsi<8> + 1;
                        tmp_28 = rbx<8>;
                        v24 = rbx<8> % 0x1000000;
                        tmp_12 = bl<1>;
                        v26 = tmp_28 * 0x100 ^ *(crctab + ((long long)(tmp_12 ^ v30->padding_1)) * 8);
                    }
                    while (v30 != v23);
                }
                tmp_5 = v3;
                v38->field_0 = v26;
                *(tmp_5) = v29;
                v21 = 1;
                if ((v15 ^ *(v45 + 0x28)) == 0)
                {
                    v25 = v16;
                    v35 = v17;
                    v39 = v18;
                    v41 = v19;
                    v42 = v20;
                    return v21;
                }
                rsp<8> = rsp<8> - 8;
                v0 = &g_406bad;
                __stack_chk_fail(); /* do not return */
            }
            rsp<8> = rsp<8> - 8;
            v1 = &g_406b9e;
            *(__errno_location() + None) = 75;
            v21 = 0;
            if ((v15 ^ *(v45 + 0x28)) == 0)
            {
                v25 = v16;
                v35 = v17;
                v39 = v18;
                v41 = v19;
                v42 = v20;
                return v21;
            }
            else
            {
                rsp<8> = rsp<8> - 8;
                v0 = &g_406bad;
                __stack_chk_fail(); /* do not return */
            }
        }
        tmp_5 = v3;
        v38->field_0 = v26;
        *(tmp_5) = v29;
        v21 = 1;
        if ((v15 ^ *(v45 + 0x28)) == 0)
        {
            v25 = v16;
            v35 = v17;
            v39 = v18;
            v41 = v19;
            v42 = v20;
            return v21;
        }
        else
        {
            rsp<8> = rsp<8> - 8;
            v0 = &g_406bad;
            __stack_chk_fail(); /* do not return */
        }
    }
}
