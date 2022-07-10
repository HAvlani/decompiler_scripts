typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_10 {
    uint128_t field_0;
    char padding_10[72];
    unsigned long long field_58;
} struct_10;

typedef struct struct_11 {
    char padding_0[88];
    unsigned long long field_58;
} struct_11;

typedef struct struct_13 {
    unsigned long long field_0;
    char padding_8[172];
    unsigned int field_b4;
} struct_13;

typedef struct struct_12 {
    char padding_0[104];
    char field_68;
} struct_12;

extern char g_40abfa;
extern char g_40ac8a;
extern char g_40acb8;
extern unsigned long long g_40ad4c;
extern char g_40ade5;
extern char g_40adfc;
extern unsigned long long g_40b048;
extern char g_40b073;
extern unsigned long long g_40b0ee;
extern char g_40b14a;
extern char g_40b385;
extern char g_40b39c;
extern char g_40b3c9;
extern char g_40b412;
extern char g_40b490;
extern unsigned long long g_40b4f7;
extern char g_40b58e;

int build_trtable()
{
    BOT tmp_5;  // tmp #5
    BOT tmp_23;  // tmp #23
    unsigned long v0;  // [bp-0x1108]
    unsigned long v1;  // [bp-0x1100]
    unsigned long long v10[4];  // [bp-0x10b8]
    struct_11 *v11;  // [bp-0x10b0]
    unsigned long|unsigned long long v12;  // [bp-0x10a8]
    unsigned int v13;  // [bp-0x10a4]
    unsigned long long v14[4];  // [bp-0x10a0]
    unsigned int v15;  // [bp-0x109c]
    unsigned long|unsigned long long v16;  // [bp-0x1090]
    unsigned long|unsigned long long v17;  // [bp-0x1088]
    unsigned long long|char v18;  // [bp-0x1080]
    uint128_t v19;  // [bp-0x1078]
    unsigned long|unsigned long long v2;  // [bp-0x10f8]
    uint128_t v20;  // [bp-0x1068]
    struct_11 *|char v21;  // [bp-0x1058]
    unsigned long|BOT|uint128_t|unsigned long long v23;  // [bp-0x1048]
    uint128_t v24;  // [bp-0x1038]
    unsigned long v25;  // [bp-0x1030]
    unsigned long v27;  // [bp-0x868]
    struct_12 *v28;  // [bp-0x860]
    unsigned long|char v29;  // [bp-0x848]
    unsigned long|char v3;  // [bp-0x10f0]
    uint128_t v30;  // [bp-0x838]
    unsigned long v31;  // [bp-0x70]
    struct_12 *v32;  // [bp-0x60]
    unsigned long|char v33;  // [bp-0x48]
    BOT v34;  // [bp-0x38]
    unsigned long v35;  // [bp-0x30]
    unsigned long v36;  // [bp-0x20]
    unsigned long v37;  // [bp-0x18]
    unsigned long long v38[13];  // [bp-0x10]
    unsigned long v39;  // [bp-0x8]
    unsigned long|unsigned long long v4;  // [bp-0x10e8]
    char v41;  // [bp+0x7a8]
    char v42;  // [bp+0x7b0]
    char v43;  // [bp+0x7b8]
    char v44;  // [bp+0x7c0]
    struct_2 *v45;  // [bp+0x7c8]
    char v46;  // [bp+0x7d0]
    unsigned int v47;  // [bp+0x864]
    char v48;  // [bp+0x1fa0]
    char v49;  // [bp+0x1fa8]
    unsigned long|struct_12 *|unsigned long long|char v5;  // [bp-0x10e0]
    uint128_t v50;  // [bp+0x1fb8]
    BOT v51;  // [bp+0x1fc8]
    unsigned long v52;  // [bp+0x3fb8]
    unsigned long v53;  // [bp+0x3fc0]
    unsigned long v54;  // [bp+0x3fc8]
    unsigned long long v55;  // [bp+0x3fd8]
    unsigned long long v56;  // [bp+0x3fe0]
    unsigned long v57;  // [bp+0x3fe8]
    unsigned long long v58;  // [bp+0x3ff0]
    char|struct_2 *|unsigned long long|unsigned long|unsigned short v59;  // rax
    unsigned long long v6;  // [bp-0x10d8]
    unsigned long long v61;  // al
    unsigned long long|struct_2 * v62;  // rcx
    unsigned long long|struct_2 * v63;  // rdx
    unsigned long long v64;  // rbx
    unsigned long|unsigned long long v65;  // rbx
    unsigned long long v66;  // rbx
    unsigned long long v67;  // rbp
    unsigned long long v68;  // rbp
    unsigned long long|struct_2 * v69;  // rsi
    unsigned long long v7;  // [bp-0x10d0]
    unsigned long long v70;  // rdi
    unsigned long long v71;  // rdi
    unsigned long long v72;  // rdi
    unsigned long long|struct_2 *|unsigned long long [257] v73;  // r8
    struct_12 *|struct_11 *|unsigned long long v74;  // r9
    unsigned long long [267]|unsigned long long v75;  // r10
    unsigned long long|unsigned long long [5] v76;  // r11
    unsigned long long v77;  // r12
    unsigned long|unsigned long long v78;  // r12
    unsigned long|unsigned long long [3]|unsigned long long|struct_10 * v79;  // r13
    unsigned long long v8;  // [bp-0x10c8]
    unsigned long long v80;  // r13
    struct_13 *|unsigned long long|unsigned long long [13]|unsigned long long [4] v81;  // r14
    unsigned long long v82;  // r14
    unsigned long long v83;  // r15
    unsigned long|unsigned long long|unsigned int v84;  // r15
    struct_2 *v85;  // fs
    uint128_t v86;  // xmm1
    uint128_t v87;  // xmm2
    uint128_t v88;  // xmm3
    uint128_t v89;  // xmm4
    unsigned long long v9;  // [bp-0x10c0]
    uint128_t v90;  // xmm6

    v39 = v84;
    v38 = v81;
    v37 = v79;
    v36 = v78;
    rsp<8> = &stack_base-48;
    v35 = v65;
    do
    {
        rsp<8> = rsp<8> - 0x1000;
        v25 = v25;
    }
    while (rsp<8> != &stack_base-20528);
    rsp<8> = rsp<8> - 168;
    v14 = v69;
    v53 = *(v85 + 0x28);
    v59 = v81[2];
    v81[11] = 0;
    v81[12] = 0;
    v23 = 0;
    v24 = 0;
    if (v59 > 0)
    {
        v9 = v70;
        v78 = 0;
        v81 = v69;
        v6 = 0;
        v12 = rsp<8> + 12432;
        while (true)
        {
            v65 = v5;
            v8 = v5 * 8;
            v79 = *(v81[3] + v65 * 8) * 16 + *(v8);
            v84 = ((int)*(*(v81[3] + v65 * 8) * 16 + *(v8) + 8));
            v59 = ...;
            if (*((*(v81[3] + (v65 << 3)) << 4) + *(v8) + 8) != 1)
            {
                if (v84 == 3)
                {
                    v68 = rsp<8> + 144;
                    v62 = *(v79);
                    v70 = rsp<8> + 176;
                    v63 = rsp<8> + 144;
                    do
                    {
                        v23 = ((long long)v23) | v62->field_0;
                        v63 = &v23;
                        v62 += 8;
                    }
                    while (v70 != v63);
                }
                else if (v84 == 5 || v84 == 7)
                {
                    if ((((char)reg_32<4>) & 128) != 0)
                    {
                        v23 &= 18446744069414584318;
                    }
                }
                if (v84 == 5)
                {
                    v65 = v8;
                    v68 = rsp<8> + 144;
                    if (*(v8 + 180) > 1)
                    {
                        v62 = *(v65 + 120);
                        v63 = rbp<8>;
                        v70 = rsp<8> + 176;
                        do
                        {
                            v23 = ((long long)v23) | v62->field_0;
                            v63 = &v23;
                            v62 += 8;
                        }
                        while (v63 != v70);
                    }
                    else
                    {
                        v23 = 340282366920938463463374607431768211455;
                        v24 = 340282366920938463463374607431768211455;
                    }
                    v63 = *(v8 + 216);
                    if (((long long)(((char)*(v8 + 216)) & 64)) == 0)
                    {
                        v23 &= 18446744069414583295;
                    }
                }
                if (v84 == 7)
                {
                    v69 = v8;
                    v68 = rsp<8> + 144;
                    v23 = 340282366920938463463374607431768211455;
                    v63 = *(v69 + 216);
                    if (((long long)(((char)*(v8 + 216)) & 64)) == 0)
                    {
                        v23 = 18446744069414583295;
                    }
                }
            }
            else
            {
                v68 = rsp<8> + 144;
                v63 = ((long long)(((int)(((long long)*(v79)) >> 3)) & 24));
                *(rsp<8> + 144 + v63) = *(rsp<8> + 144 + v63) | 1 << (*(v79) & 63);
            }
            if (...)
            {
                if (((long long)(v59 & 32)) != 0)
                {
                    v63 = ((long long)*((long long *)(((char *)&v23) + -8)));
                    *(rbp<8> + None) = 0;
                    *(rbp<8> + 16) = 0;
                    tmp_5 = v63;
                    if (((long long)(tmp_5 & 4)) != 0)
                    {
                        v23 = 0x400;
                    }
                }
                if (v84 == 1 && ((long long)(*(v79 + 10) & 64)) == 0 && ((long long)(v59 & 128)) == 0 && ((long long)(v59 & 4)) != 0 && (((long long)(v59 & 32)) == 0 || ((long long)(tmp_5 & 4)) != 0))
                {
                    /* goto 4239614; */
                }
            }
            if (...)
            {
                v73 = v8;
                if (*(v8 + 180) > 1)
                {
                    v70 = *(v73 + 120);
                    v69 = 0;
                    v62 = 0;
                    do
                    {
                        v63 = (!(*(rdi<8> + v62 * 8)) | *(v73 + v62 * 8 + 184)) & *(v68 + v62 * 8);
                        *(v68 + v62 * 8) = (!(*(rdi<8> + v62 * 8)) | *(v73 + v62 * 8 + 184)) & *(v68 + v62 * 8);
                        v62 += 1;
                        v69 |= v63;
                    }
                    while (v62 != 4);
                }
                else
                {
                    v70 = v8;
                    v69 = 0;
                    v63 = 0;
                    do
                    {
                        v62 = *(v68 + v63 * 8) & *(v70 + v63 * 8 + 184);
                        *(v68 + v63 * 8) = *(v68 + v63 * 8) & *(v70 + v63 * 8 + 184);
                        v63 += 1;
                        v69 |= v62;
                    }
                    while (v63 != 4);
                    if (v69 == 0)
                    {
                        /* goto 4238273; */
                    }
                }
            }
            if (...)
            {
                /* goto 4239614; */
            }
            if (...)
            {
                v70 = v8;
                if (*(v8 + 180) > 1)
                {
                    v69 = *(v70 + 120);
                    v62 = 0;
                    v63 = 0;
                    do
                    {
                        v59 = !(*(rdi<8> + v63 * 8 + 184) & *(rsi<8> + v63 * 8)) & *(v68 + v63 * 8);
                        *(v68 + v63 * 8) = !(*(rdi<8> + v63 * 8 + 184) & *(rsi<8> + v63 * 8)) & *(v68 + v63 * 8);
                        v63 += 1;
                        v62 |= v59;
                    }
                    while (v63 != 4);
                }
                v69 = v8;
                v62 = 0;
                v63 = 0;
                do
                {
                    v59 = !(*(rsi<8> + v63 * 8 + 184)) & *(v68 + v63 * 8);
                    *(v68 + v63 * 8) = !(*(rsi<8> + v63 * 8 + 184)) & *(v68 + v63 * 8);
                    v63 += 1;
                    v62 |= v59;
                }
                while (v63 != 4);
            }
            if (...)
            {
                v65 = 0;
                if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, r12<8>, 0x0<64>, cc_ndep<8>))))
                {
                    v7 = v79;
                    v79 = v12;
                    v10 = v81;
                    while (true)
                    {
                        v70 = v65 * 32;
                        if (...)
                        {
                            v74 = v79 + v70;
                            v62 = 0;
                            v59 = 0;
                            v69 = &v29;
                            do
                            {
                                v63 = *(v68 + v59 * 8) & *(v74 + v59 * 8);
                                v29 = *(v68 + v59 * 8) & *(v74 + v59 * 8);
                                v59 += 1;
                                v62 |= v63;
                            }
                            while (v59 != 4);
                            if (v62 != 0)
                            {
                                v81 = 0;
                                v75 = 0;
                                v76 = &v33;
                                v63 = 0;
                                do
                                {
                                    v62 = !(*(v68 + v63 * 8)) & *(v74 + v63 * 8);
                                    v59 = !(*(v74 + v63 * 8)) & *(v68 + v63 * 8);
                                    v33 = !(*(v68 + v63 * 8)) & *(v74 + v63 * 8);
                                    v75 |= v62;
                                    *(v68 + v63 * 8) = v59;
                                    v63 += 1;
                                    v81 |= v59;
                                }
                                while (v63 != 4);
                                v74 = &v43;
                                if (v75 != 0)
                                {
                                    v86 = v33;
                                    v87 = v34;
                                    v11 = v74;
                                    v88 = v29;
                                    v89 = v30;
                                    v50 = v86;
                                    v51 = v87;
                                    *(v79 + v70) = v88;
                                    v79 + v70->padding_10 = v89;
                                    rsp<8> = rsp<8> - 8;
                                    v5 = &g_40b048;
                                    v59 = re_node_set_init_copy();
                                    v78 = 1;
                                }
                                rsp<8> = rsp<8> - 8;
                                v4 = &g_40b073;
                                v59 = re_node_set_insert();
                            }
                        }
                        if (...)
                        {
                            v65 += 1;
                        }
                        v81 = v10;
                        break;
                    }
                    if (...)
                    {
                        v65 = 0;
                    }
                }
            }
            if (...)
            {
                tmp_23 = v8;
                v90 = v24;
                *(rsp<8> + r12<8> * 32 + 12432) = v23;
                *(rsp<8> + r12<8> * 32 + 12448) = v90;
                v65 = *(*(r14<8> + 24) + tmp_23);
                v79 = rsp<8> + r12<8> * 24 + 6288;
                *(rsp<8> + r12<8> * 24 + 6288) = 1;
                *(rsp<8> + r12<8> * 24 + 6288 + 8) = 1;
                rsp<8> = rsp<8> - 8;
                v5 = &g_40b0ee;
                v59 = malloc(0x8);
                v79[2] = v59;
                if (v59 != 0)
                {
                    v59->field_0 = v65;
                    v78 = r12<8> + 1;
                }
                else
                {
                    v79[1] = 0;
                    v79[0] = 0;
                    if (v78 != 0)
                    {
                        /* goto 4239656; */
                    }
                    else
                    {
                        v61 = 0;
                        if ((v52 ^ *(v85 + 0x28)) == 0)
                        {
                            v66 = v54;
                            v77 = v55;
                            v80 = v56;
                            v82 = v57;
                            v83 = v58;
                            return v61;
                        }
                        rsp<8> = rsp<8> - 8;
                        v4 = &g_40b58e;
                        __stack_chk_fail(); /* do not return */
                    }
                }
            }
            if (...)
            {
                *(rbp<8> + None) = 0;
                *(rbp<8> + 16) = 0;
            }
            if (...)
            {
                v5 += 1;
                v81 = v8;
                if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, r12<8>, 0x0<64>, cc_ndep<8>))))
                {
                    v17 = 0;
                    v16 = v78 + 1;
                    rsp<8> = rsp<8> - 8;
                    v4 = &g_40abfa;
                    v17 = v68;
                    v68 = malloc((v78 + 1) * 8);
                    if (v68 != 0)
                    {
                        v5 = 0;
                        v67 = 0;
                        v15 = 0;
                        v4 = rsp<8> + 76;
                        v59 = v81;
                        v81 = &v42;
                        v19 = 0;
                        v79 = v59;
                        v20 = 0;
                        while (true)
                        {
                            v16 = 0;
                            v84 = 0;
                            if (v42 <= 0 || v74 != 0)
                            {
                                v84 = &v21;
                                rsp<8> = rsp<8> - 8;
                                v3 = &g_40acb8;
                                v21 = v74;
                                v74 = (long long)re_acquire_state_context();
                                if (((int)*((int *)(((char *)&v12) + 4))) == 0 || v74 != 0)
                                {
                                    if (((char)v74->field_68) >= 0)
                                    {
                                        v28 = v74;
                                        v32 = v74;
                                    }
                                    else
                                    {
                                        v5 = v74;
                                        rsp<8> = rsp<8> - 8;
                                        v2 = &g_40b3c9;
                                        v59 = re_acquire_state_context();
                                        v74 = v4;
                                        v27 = v59;
                                        if (v59 == 0 && ((int)*((int *)(((char *)&v11) + 4))) != 0)
                                        {
                                            /* goto 4240240; */
                                        }
                                        if (((int)*((int *)(((char *)&v11) + 4))) == 0 || v59 != 0)
                                        {
                                            if (v59 == 0 || v74 != v59)
                                            {
                                                v3 = ((char)(2 <= v47? 1 : ((int)*(rsp<8> + 8))));
                                            }
                                            rsp<8> = rsp<8> - 8;
                                            v1 = &g_40b412;
                                            v59 = re_acquire_state_context();
                                            v31 = v59;
                                            if (v59 == 0 && ((int)*((int *)(((char *)&v10) + 4))) != 0)
                                            {
                                                /* goto 4240240; */
                                            }
                                        }
                                    }
                                    if ((((int)*((int *)(((char *)&v10) + 4))) == 0 || v59 != 0 || ((char)v74->field_68) >= 0) && (((int)*((int *)(((char *)&v11) + 4))) == 0 || v59 != 0 || ((char)v74->field_68) >= 0))
                                    {
                                        v63 = &v48;
                                        v62 = &v18;
                                        v59 = &v18;
                                        v69 = &v48;
                                        do
                                        {
                                            v18 |= v48;
                                            v59 = &v19;
                                            v69 = &v49;
                                        }
                                        while (v84 != v59);
                                        v67 = 1;
                                        v81 = &v45;
                                        v59 = ((char)((char)v4));
                                        v5 = v62;
                                        v81 = v79;
                                        v3 = v63;
                                        if (v59 == 0)
                                        {
                                            rsp<8> = rsp<8> - 8;
                                            v2 = &g_40ad4c;
                                            v75 = calloc(0x8, 0x100);
                                            *(v9 + 88) = v75;
                                            v63 = v2;
                                            v62 = v4;
                                            v64 = 0;
                                            v76 = v2;
                                            do
                                            {
                                                v59 = *(v62 + v64 * 8);
                                                v69 = 1;
                                                v73 = v64 * 0x200 + v75;
                                                if (*(v62 + (v64 << 3)) != 0)
                                                {
                                                    do
                                                    {
                                                        if (((long long)(v59 & 1)) != 0)
                                                        {
                                                            v72 = 0;
                                                            if ((v69 & v76[0]) == 0)
                                                            {
                                                                do
                                                                {
                                                                    v72 += 1;
                                                                }
                                                                while ((1 & v76[v72 * 4]) == 0);
                                                            }
                                                            if ((v69 & *(v81 + (0 << 3) + 184)) != 0)
                                                            {
                                                                v70 = *(rsp<8> + rdi<8> * 8 + 2192);
                                                                v73->field_0 = v70;
                                                            }
                                                            else
                                                            {
                                                                v70 = *(rsp<8> + rdi<8> * 8 + 144);
                                                                v73->field_0 = v70;
                                                            }
                                                        }
                                                        v69 *= 2;
                                                        v73 += 8;
                                                        v59 = v59 % 2;
                                                        v59 = v59 % 2;
                                                    }
                                                    while (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, r12<8>, 0x0<64>, cc_ndep<8>))));
                                                }
                                                v64 += 1;
                                                v76 += 8;
                                            }
                                            while (v64 != 4);
                                        }
                                        else
                                        {
                                            rsp<8> = rsp<8> - 8;
                                            v2 = &g_40b4f7;
                                            v75 = calloc(0x8, 0x200);
                                            *(v9 + 96) = v75;
                                            v63 = v2;
                                            v62 = v4;
                                            v64 = 0;
                                            v76 = v2;
                                            do
                                            {
                                                v59 = *(v62 + v64 * 8);
                                                v69 = 1;
                                                v73 = v64 * 0x200 + v75;
                                                if (*(v62 + (v64 << 3)) != 0)
                                                {
                                                    do
                                                    {
                                                        if (((long long)(v59 & 1)) != 0)
                                                        {
                                                            v71 = 0;
                                                            if ((v69 & v76[0]) == 0)
                                                            {
                                                                do
                                                                {
                                                                    v71 += 1;
                                                                }
                                                                while ((1 & v76[v71 * 4]) == 0);
                                                            }
                                                            v74 = *(rsp<8> + rdi<8> * 8 + 144);
                                                            v70 = *(rsp<8> + rdi<8> * 8 + 2192);
                                                            v73[0] = v74;
                                                            v73[256] = v70;
                                                        }
                                                        v69 *= 2;
                                                        v73 += 8;
                                                        v59 = v59 % 2;
                                                        v59 = v59 % 2;
                                                    }
                                                    while (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, r12<8>, 0x0<64>, cc_ndep<8>))));
                                                }
                                                v64 += 1;
                                                v76 += 8;
                                            }
                                            while (v64 != 4);
                                        }
                                        if (((long long)(((char)*((char *)(((char *)&v17) + 1))) & 4)) != 0)
                                        {
                                            v59 = 0;
                                            while (true)
                                            {
                                                if ((((short)*(rdx<8>)) & 0x400) == 0)
                                                {
                                                    v59 += 1;
                                                    v63 = rdx<8> + 32;
                                                    if (v59 == v78)
                                                    {
                                                        break;
                                                    }
                                                }
                                                else
                                                {
                                                    v59 = *(rsp<8> + v59 * 8 + 4240);
                                                    v59 = ((char)((char)v3));
                                                    v75[10] = v59;
                                                    v75[266] = v59;
                                                    break;
                                                    if (v59 == 0)
                                                    {
                                                        break;
                                                    }
                                                }
                                            }
                                        }
                                        v65 = &v41;
                                        rsp<8> = rsp<8> - 8;
                                        v1 = &g_40ade5;
                                        rpl_free();
                                        v68 = v65 + v78 * 24;
                                        while (true)
                                        {
                                            v65 = &v44;
                                            rsp<8> = rsp<8> - 8;
                                            v0 = &g_40adfc;
                                            rpl_free();
                                            if (v68 == v65)
                                            {
                                                break;
                                            }
                                        }
                                        v61 = 1;
                                        if ((v52 ^ *(v85 + 0x28)) == 0)
                                        {
                                            v66 = v54;
                                            v77 = v55;
                                            v80 = v56;
                                            v82 = v57;
                                            v83 = v58;
                                            return v61;
                                        }
                                        rsp<8> = rsp<8> - 8;
                                        v4 = &g_40b58e;
                                        __stack_chk_fail(); /* do not return */
                                    }
                                }
                            }
                            if (v42 > 0)
                            {
                                while (true)
                                {
                                    if (*(v45 + (*(v43 + (v84 << 3)) << 3)) != 18446744069414584319)
                                    {
                                        rsp<8> = rsp<8> - 8;
                                        v3 = &g_40ac8a;
                                        v59 = re_node_set_merge();
                                        v13 = v59;
                                    }
                                    v84 += 1;
                                }
                                if (*(v45 + (*(v43 + (v84 << 3)) << 3)) == 18446744069414584319 || v59 == 0)
                                {
                                    v84 = &v21;
                                    rsp<8> = rsp<8> - 8;
                                    v3 = &g_40acb8;
                                    v21 = v74;
                                    v74 = (long long)re_acquire_state_context();
                                }
                            }
                            else if (v74 == 0)
                            {
                                if (((int)*((int *)(((char *)&v12) + 4))) != 0)
                                {
                                    /* goto 4240240; */
                                }
                            }
                        }
                    }
                    else
                    {
                        v15 = 12;
                    }
                    v65 = &v43;
                    rsp<8> = rsp<8> - 8;
                    v3 = &g_40b385;
                    rpl_free();
                    v68 = v65 + v78 * 24;
                    while (true)
                    {
                        v65 = &v46;
                        rsp<8> = rsp<8> - 8;
                        v2 = &g_40b39c;
                        rpl_free();
                        if (v68 == v65)
                        {
                            break;
                        }
                    }
                    v61 = 0;
                }
                else if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, r12<8>, 0x0<64>, cc_ndep<8>))))
                {
                    v61 = 0;
                    if ((v52 ^ *(v85 + 0x28)) == 0)
                    {
                        v66 = v54;
                        v77 = v55;
                        v80 = v56;
                        v82 = v57;
                        v83 = v58;
                        return v61;
                    }
                    rsp<8> = rsp<8> - 8;
                    v4 = &g_40b58e;
                    __stack_chk_fail(); /* do not return */
                    rsp<8> = rsp<8> - 8;
                    v4 = &g_40b490;
                    v61 = calloc(0x8, 0x100);
                    v11->field_58 = v61;
                    v61 = ((char)(v61 != 0));
                    rsp<8> = rsp<8> - 8;
                    v4 = &g_40b58e;
                    __stack_chk_fail(); /* do not return */
                    if ((v52 ^ *(v85 + 0x28)) == 0)
                    {
                        v66 = v54;
                        v77 = v55;
                        v80 = v56;
                        v82 = v57;
                        v83 = v58;
                        return v61;
                    }
                }
            }
            if (...)
            {
                v65 = 0;
                while (true)
                {
                    v65 += 1;
                    rsp<8> = rsp<8> - 8;
                    v4 = &g_40b14a;
                    rpl_free();
                    if (v78 <= v65)
                    {
                        break;
                    }
                }
                v61 = 0;
                if ((v52 ^ *(v85 + 0x28)) == 0)
                {
                    v66 = v54;
                    v77 = v55;
                    v80 = v56;
                    v82 = v57;
                    v83 = v58;
                    return v61;
                }
                rsp<8> = rsp<8> - 8;
                v4 = &g_40b58e;
                __stack_chk_fail(); /* do not return */
            }
        }
        if ((v52 ^ *(v85 + 0x28)) == 0)
        {
            v66 = v54;
            v77 = v55;
            v80 = v56;
            v82 = v57;
            v83 = v58;
            return v61;
        }
        rsp<8> = rsp<8> - 8;
        v4 = &g_40b58e;
        __stack_chk_fail(); /* do not return */
    }
    rsp<8> = rsp<8> - 8;
    v4 = &g_40b490;
    v61 = calloc(0x8, 0x100);
    v11->field_58 = v61;
    v61 = ((char)(v61 != 0));
    if ((v52 ^ *(v85 + 0x28)) == 0)
    {
        v66 = v54;
        v77 = v55;
        v80 = v56;
        v82 = v57;
        v83 = v58;
        return v61;
    }
    else
    {
        rsp<8> = rsp<8> - 8;
        v4 = &g_40b58e;
        __stack_chk_fail(); /* do not return */
    }
}
