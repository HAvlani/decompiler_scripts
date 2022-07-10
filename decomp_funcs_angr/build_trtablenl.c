typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;

typedef struct struct_15 {
    char field_0;
    char padding_1[9];
    char field_a;
} struct_15;

typedef struct struct_12 {
    char field_0;
    char padding_1[87];
    unsigned long long field_58;
    char padding_60[84];
    unsigned int field_b4;
    char padding_b8[32];
    unsigned long long field_d8;
} struct_12;

typedef struct struct_14 {
    unsigned long long field_0;
    char padding_8[172];
    unsigned int field_b4;
} struct_14;

typedef struct struct_13 {
    char padding_0[104];
    char field_68;
} struct_13;

extern char g_40983a;
extern char g_4098ca;
extern char g_4098f8;
extern unsigned long long g_40998c;
extern char g_409a25;
extern char g_409a3c;
extern unsigned long long g_409c88;
extern char g_409cb3;
extern unsigned long long g_409d2e;
extern char g_409d8a;
extern char g_409fc5;
extern char g_409fdc;
extern unsigned long long g_40a009;
extern char g_40a052;
extern char g_40a0d0;
extern unsigned long long g_40a137;
extern <missing-type> g_40a1ce;

int build_trtable()
{
    BOT tmp_5;  // tmp #5
    BOT tmp_23;  // tmp #23
    unsigned long v0;  // [bp-0x2128]
    unsigned long v1;  // [bp-0x2120]
    unsigned long long v10;  // [bp-0x20d8]
    struct_15 *v11;  // [bp-0x20d0]
    unsigned long long v12;  // [bp-0x20c8]
    unsigned long long v13;  // [bp-0x20c0]
    unsigned long long v14;  // [bp-0x20b8]
    unsigned long long|unsigned int v15;  // [bp-0x20b4]
    unsigned long v16;  // [bp-0x20b0]
    unsigned int v17;  // [bp-0x20ac]
    unsigned long long v18;  // [bp-0x20a8]
    unsigned long|unsigned long long v19;  // [bp-0x20a0]
    unsigned long|unsigned long long v2;  // [bp-0x2118]
    unsigned long long v20;  // [bp-0x2098]
    uint128_t v21;  // [bp-0x2088]
    uint128_t v22;  // [bp-0x2078]
    char|unsigned long v23;  // [bp-0x2068]
    uint128_t v25;  // [bp-0x2058]
    BOT|uint128_t|unsigned long long v26;  // [bp-0x2048]
    uint128_t v27;  // [bp-0x2038]
    unsigned long v28;  // [bp-0x2030]
    unsigned long v3;  // [bp-0x2110]
    unsigned long v30;  // [bp-0x1878]
    struct_13 *v31;  // [bp-0x1870]
    unsigned long v33;  // [bp-0x1848]
    uint128_t v34;  // [bp-0x1838]
    unsigned long v35;  // [bp-0x1080]
    struct_13 *v36;  // [bp-0x1070]
    char|unsigned long v37;  // [bp-0x1048]
    uint128_t v38;  // [bp-0x1038]
    unsigned long v39;  // [bp-0x1030]
    unsigned long long v4;  // [bp-0x2108]
    char v40;  // [bp-0x878]
    char v41;  // [bp-0x868]
    char v42;  // [bp-0x860]
    struct_6 *v43;  // [bp-0x858]
    char v44;  // [bp-0x850]
    char v45;  // [bp-0x848]
    unsigned int v46;  // [bp-0x7ac]
    unsigned long v47;  // [bp-0x30]
    unsigned long v48;  // [bp-0x20]
    unsigned long v49;  // [bp-0x18]
    char|unsigned long v5;  // [bp-0x2100]
    unsigned long long v50[13];  // [bp-0x10]
    unsigned long v51;  // [bp-0x8]
    char v53;  // [bp+0xf80]
    char v54;  // [bp+0xf88]
    uint128_t v55;  // [bp+0xfb8]
    BOT v56;  // [bp+0xfc8]
    unsigned long v57;  // [bp+0x2fc0]
    unsigned long|unsigned short|struct_6 *|char|unsigned long long v58;  // rax
    unsigned long v6;  // [bp-0x20f8]
    unsigned long long v60;  // rax
    struct_6 *|unsigned long long v61;  // rcx
    struct_6 *|unsigned long long v62;  // rdx
    unsigned long|unsigned long long v63;  // rbx
    unsigned long long v64;  // rbx
    unsigned long long v65;  // rbx
    unsigned long long v66;  // rbp
    unsigned long long v67;  // rbp
    struct_6 *|unsigned long long v68;  // rsi
    unsigned long long v69;  // rdi
    char|unsigned long long|struct_13 * v7;  // [bp-0x20f0]
    unsigned long long v70;  // rdi
    unsigned long long v71;  // rdi
    struct_6 *|unsigned long long [257]|unsigned long long v72;  // r8
    unsigned long long|struct_13 * v73;  // r9
    unsigned long long|unsigned long long [267] v74;  // r10
    unsigned long long [5]|unsigned long long v75;  // r11
    unsigned long|unsigned long long v76;  // r12
    unsigned long long v77;  // r12
    unsigned long|struct_15 *|unsigned long long [3]|unsigned long long|struct_12 * v78;  // r13
    unsigned long long v79;  // r13
    unsigned long v8;  // [bp-0x20e8]
    unsigned long long [13]|unsigned long long|struct_14 * v80;  // r14
    unsigned long long v81;  // r14
    unsigned long|unsigned long long|unsigned int v82;  // r15
    unsigned long long v83;  // r15
    struct_6 *v84;  // fs
    uint128_t v85;  // xmm1
    uint128_t v86;  // xmm2
    uint128_t v87;  // xmm3
    uint128_t v88;  // xmm4
    uint128_t v89;  // xmm6
    unsigned long long v9;  // [bp-0x20e0]

    v51 = v82;
    v50 = v80;
    v49 = v78;
    v48 = v76;
    rsp<8> = &stack_base-48;
    v47 = v63;
    do
    {
        rsp<8> = rsp<8> - 0x1000;
        v39 = v28;
    }
    while (rsp<8> != &stack_base-20528);
    rsp<8> = rsp<8> - 168;
    v19 = v68;
    v57 = *(v84 + 0x28);
    v58 = v80[2];
    v80[11] = 0;
    v80[12] = 0;
    v26 = 0;
    v27 = 0;
    if (v58 > 0)
    {
        v13 = v69;
        v76 = 0;
        v80 = v68;
        v10 = 0;
        v18 = rsp<8> + 12432;
        while (true)
        {
            v63 = v7;
            v12 = v7 * 8;
            v78 = *(*(v80 + 24) + v63 * 8) * 16 + *(v13);
            v82 = ((int)*(*(*(v80 + 24) + v63 * 8) * 16 + *(v13) + 8));
            v58 = ...;
            if (*((*(*(v80 + 24) + (v63 << 3)) << 4) + *(v13) + 8) != 1)
            {
                if (v82 == 3)
                {
                    v67 = rsp<8> + 144;
                    v61 = v78->field_0;
                    v69 = rsp<8> + 176;
                    v62 = rsp<8> + 144;
                    do
                    {
                        v26 = ((long long)v26) | v61->field_0;
                        v62 = &v26;
                        v61 += 8;
                    }
                    while (v69 != v62);
                }
                else if (v82 == 7 || v82 == 5)
                {
                    if ((((char)reg_32<4>) & 128) != 0)
                    {
                        v26 = ((long long)v26) & 18446744069414584318;
                    }
                }
                if (v82 == 5)
                {
                    v63 = v13;
                    v67 = rsp<8> + 144;
                    if (*(v13 + 180) > 1)
                    {
                        v61 = *(v63 + 120);
                        v62 = rbp<8>;
                        v69 = rsp<8> + 176;
                        do
                        {
                            v26 = ((long long)v26) | v61->field_0;
                            v62 = &v26;
                            v61 += 8;
                        }
                        while (v62 != v69);
                    }
                    else
                    {
                        v26 = 340282366920938463463374607431768211455;
                        v27 = 340282366920938463463374607431768211455;
                    }
                    v62 = *(v13 + 216);
                    if (((long long)(((char)*(v13 + 216)) & 64)) == 0)
                    {
                        v26 = ((long long)v26) & 18446744069414583295;
                    }
                }
                if (v82 == 7)
                {
                    v68 = v13;
                    v67 = rsp<8> + 144;
                    v26 = 340282366920938463463374607431768211455;
                    v62 = *(v68 + 216);
                    if (((long long)(((char)*(v13 + 216)) & 64)) == 0)
                    {
                        v26 = 18446744069414583295;
                    }
                }
            }
            else
            {
                v67 = rsp<8> + 144;
                v62 = ((long long)(((int)(((long long)v78->field_0) >> 3)) & 24));
                *(rsp<8> + 144 + v62) = *(rsp<8> + 144 + v62) | 1 << (v78->field_0 & 63);
            }
            if (...)
            {
                if (((long long)(v58 & 32)) != 0)
                {
                    v62 = ((long long)v26);
                    *(rbp<8> + None) = 0;
                    *(rbp<8> + 16) = 0;
                    tmp_5 = v62;
                    if (((long long)(tmp_5 & 4)) != 0)
                    {
                        v26 = 0x400;
                    }
                }
                if (v82 == 1 && ((long long)(v78->field_a & 64)) == 0 && ((long long)(v58 & 128)) == 0 && ((long long)(v58 & 4)) != 0 && (((long long)(v58 & 32)) == 0 || ((long long)(tmp_5 & 4)) != 0))
                {
                    /* goto 4234558; */
                }
            }
            if (...)
            {
                v72 = v13;
                if (*(v13 + 180) > 1)
                {
                    v69 = *(v72 + 120);
                    v68 = 0;
                    v61 = 0;
                    do
                    {
                        v62 = (!(*(rdi<8> + v61 * 8)) | *(v72 + v61 * 8 + 184)) & *(v67 + v61 * 8);
                        *(v67 + v61 * 8) = (!(*(rdi<8> + v61 * 8)) | *(v72 + v61 * 8 + 184)) & *(v67 + v61 * 8);
                        v61 += 1;
                        v68 |= v62;
                    }
                    while (v61 != 4);
                }
                else
                {
                    v69 = v13;
                    v68 = 0;
                    v62 = 0;
                    do
                    {
                        v61 = *(v67 + v62 * 8) & *(v69 + v62 * 8 + 184);
                        *(v67 + v62 * 8) = *(v67 + v62 * 8) & *(v69 + v62 * 8 + 184);
                        v62 += 1;
                        v68 |= v61;
                    }
                    while (v62 != 4);
                    if (v68 == 0)
                    {
                        /* goto 4233217; */
                    }
                }
            }
            if (...)
            {
                /* goto 4234558; */
            }
            if (...)
            {
                v69 = v13;
                if (*(v13 + 180) > 1)
                {
                    v68 = *(v69 + 120);
                    v61 = 0;
                    v62 = 0;
                    do
                    {
                        v58 = !(*(rdi<8> + v62 * 8 + 184) & *(rsi<8> + v62 * 8)) & *(v67 + v62 * 8);
                        *(v67 + v62 * 8) = !(*(rdi<8> + v62 * 8 + 184) & *(rsi<8> + v62 * 8)) & *(v67 + v62 * 8);
                        v62 += 1;
                        v61 |= v58;
                    }
                    while (v62 != 4);
                }
                v68 = v13;
                v61 = 0;
                v62 = 0;
                do
                {
                    v58 = !(*(rsi<8> + v62 * 8 + 184)) & *(v67 + v62 * 8);
                    *(v67 + v62 * 8) = !(*(rsi<8> + v62 * 8 + 184)) & *(v67 + v62 * 8);
                    v62 += 1;
                    v61 |= v58;
                }
                while (v62 != 4);
            }
            if (...)
            {
                v63 = 0;
                if (!(((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, r12<8>, 0x0<64>, cc_ndep<8>))))
                {
                    v11 = v78;
                    v78 = v18;
                    v14 = v80;
                    while (true)
                    {
                        v69 = v63 * 32;
                        if (...)
                        {
                            v73 = v78 + v69;
                            v61 = 0;
                            v58 = 0;
                            v68 = rsp<8> + 2192;
                            do
                            {
                                v62 = *(v67 + v58 * 8) & *(v73 + v58 * 8);
                                v33 = *(v67 + v58 * 8) & *(v73 + v58 * 8);
                                v58 += 1;
                                v61 |= v62;
                            }
                            while (v58 != 4);
                            if (v61 != 0)
                            {
                                v80 = 0;
                                v74 = 0;
                                v75 = &v37;
                                v62 = 0;
                                do
                                {
                                    v61 = !(*(v67 + v62 * 8)) & *(v73 + v62 * 8);
                                    v58 = !(*(v73 + v62 * 8)) & *(v67 + v62 * 8);
                                    v37 = !(*(v67 + v62 * 8)) & *(v73 + v62 * 8);
                                    v74 |= v61;
                                    *(v67 + v62 * 8) = v58;
                                    v62 += 1;
                                    v80 |= v58;
                                }
                                while (v62 != 4);
                                v73 = &v45;
                                if (v74 != 0)
                                {
                                    v85 = v37;
                                    v86 = v38;
                                    v16 = v73;
                                    v87 = v33;
                                    v88 = v34;
                                    v55 = v85;
                                    v56 = v86;
                                    *(v78 + v69) = v87;
                                    *(v78 + v69 + 16) = v88;
                                    rsp<8> = rsp<8> - 8;
                                    v9 = &g_409c88;
                                    v58 = re_node_set_init_copy();
                                    v76 = 1;
                                }
                                rsp<8> = rsp<8> - 8;
                                v8 = &g_409cb3;
                                v58 = re_node_set_insert();
                            }
                        }
                        if (...)
                        {
                            v63 += 1;
                        }
                        v80 = v12;
                        break;
                    }
                    if (...)
                    {
                        v63 = 0;
                    }
                }
            }
            if (...)
            {
                tmp_23 = v9;
                v89 = *((int128_t *)(((char *)&v25) + 8));
                *(rsp<8> + r12<8> * 32 + 12432) = *((int128_t *)(((char *)&v26) + -24));
                *(rsp<8> + r12<8> * 32 + 12448) = v89;
                v63 = *(*(r14<8> + 24) + tmp_23);
                v78 = rsp<8> + r12<8> * 24 + 6288;
                *(rsp<8> + r12<8> * 24 + 6288) = 1;
                *(rsp<8> + r12<8> * 24 + 6288 + 8) = 1;
                rsp<8> = rsp<8> - 8;
                v7 = &g_409d2e;
                v58 = malloc(0x8);
                v78[2] = v58;
                if (v58 != 0)
                {
                    v58->field_0 = v63;
                    v76 = r12<8> + 1;
                }
                else
                {
                    v78[1] = 0;
                    v78[0] = 0;
                    if (v76 == 0)
                    {
                        break;
                    }
                    if (v76 != 0)
                    {
                        /* goto 4234600; */
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
                v7 += 1;
                v80 = v10;
                if (!(((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, r12<8>, 0x0<64>, cc_ndep<8>))))
                {
                    v20 = 0;
                    v19 = v76 + 1;
                    rsp<8> = rsp<8> - 8;
                    v6 = &g_40983a;
                    v20 = v67;
                    v67 = malloc((v76 + 1) * 8);
                    if (v67 != 0)
                    {
                        v7 = 0;
                        v66 = 0;
                        v17 = 0;
                        v6 = rsp<8> + 76;
                        v58 = v80;
                        v80 = &v42;
                        v21 = 0;
                        v78 = v58;
                        v22 = 0;
                        while (true)
                        {
                            v19 = 0;
                            v82 = 0;
                            if (v42 <= 0 || v73 != 0)
                            {
                                v82 = &v23;
                                rsp<8> = rsp<8> - 8;
                                v5 = &g_4098f8;
                                v23 = v73;
                                v73 = (long long)re_acquire_state_context();
                                if (((char)v73->field_68) < 0 && (v15 == 0 || v73 != 0))
                                {
                                    v7 = v73;
                                    rsp<8> = rsp<8> - 8;
                                    v4 = &g_40a009;
                                    v58 = re_acquire_state_context();
                                    v73 = v6;
                                    v30 = v58;
                                    if (v58 == 0 && ((int)*((int *)(((char *)&v13) + 4))) != 0)
                                    {
                                        /* goto 4235184; */
                                    }
                                    if (((int)*((int *)(((char *)&v13) + 4))) == 0 || v58 != 0)
                                    {
                                        if (v58 == 0 || v73 != v58)
                                        {
                                            v5 = ((char)(2 <= v46? 1 : ((int)*(rsp<8> + 8))));
                                        }
                                        rsp<8> = rsp<8> - 8;
                                        v3 = &g_40a052;
                                        v58 = re_acquire_state_context();
                                        v35 = v58;
                                        if (v58 == 0 && ((int)*((int *)(((char *)&v12) + 4))) != 0)
                                        {
                                            /* goto 4235184; */
                                        }
                                    }
                                }
                                if (v15 == 0 || v73 != 0)
                                {
                                    if (((char)v73->field_68) >= 0)
                                    {
                                        v31 = v73;
                                        v36 = v73;
                                    }
                                    if ((((int)*((int *)(((char *)&v12) + 4))) == 0 || v58 != 0 || ((char)v73->field_68) >= 0) && (((int)*((int *)(((char *)&v13) + 4))) == 0 || v58 != 0 || ((char)v73->field_68) >= 0))
                                    {
                                        v62 = &v53;
                                        v61 = &v19;
                                        v58 = &v19;
                                        v68 = &v53;
                                        do
                                        {
                                            v19 |= v53;
                                            v58 = &v20;
                                            v68 = &v54;
                                        }
                                        while (v82 != v58);
                                        v66 = 1;
                                        v80 = &v45;
                                        v58 = ((char)((char)v4));
                                        v5 = v61;
                                        v80 = v78;
                                        v3 = v62;
                                        if (v58 == 0)
                                        {
                                            rsp<8> = rsp<8> - 8;
                                            v2 = &g_40998c;
                                            v74 = calloc(0x8, 0x100);
                                            *(v9 + 88) = v74;
                                            v62 = v2;
                                            v61 = v4;
                                            v65 = 0;
                                            v75 = v2;
                                            do
                                            {
                                                v58 = *(v61 + v65 * 8);
                                                v68 = 1;
                                                v72 = v65 * 0x200 + v74;
                                                if (*(v61 + (v65 << 3)) != 0)
                                                {
                                                    do
                                                    {
                                                        if (((long long)(v58 & 1)) != 0)
                                                        {
                                                            v70 = 0;
                                                            if ((v68 & v75[0]) == 0)
                                                            {
                                                                do
                                                                {
                                                                    v70 += 1;
                                                                }
                                                                while ((1 & v75[v70 * 4]) == 0);
                                                            }
                                                            if ((v68 & *(v80 + (0 << 3) + 184)) != 0)
                                                            {
                                                                v69 = *(rsp<8> + rdi<8> * 8 + 2192);
                                                                v72->field_0 = v69;
                                                            }
                                                            else
                                                            {
                                                                v69 = *(rsp<8> + rdi<8> * 8 + 144);
                                                                v72->field_0 = v69;
                                                            }
                                                        }
                                                        v68 *= 2;
                                                        v72 += 8;
                                                        v58 = v58 % 2;
                                                        v58 = v58 % 2;
                                                    }
                                                    while (!(((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, r12<8>, 0x0<64>, cc_ndep<8>))));
                                                }
                                                v65 += 1;
                                                v75 += 8;
                                            }
                                            while (v65 != 4);
                                        }
                                        else
                                        {
                                            rsp<8> = rsp<8> - 8;
                                            v2 = &g_40a137;
                                            v74 = calloc(0x8, 0x200);
                                            *(v9 + 96) = v74;
                                            v62 = v2;
                                            v61 = v4;
                                            v65 = 0;
                                            v75 = v2;
                                            do
                                            {
                                                v58 = *(v61 + v65 * 8);
                                                v68 = 1;
                                                v72 = v65 * 0x200 + v74;
                                                if (*(v61 + (v65 << 3)) != 0)
                                                {
                                                    do
                                                    {
                                                        if (((long long)(v58 & 1)) != 0)
                                                        {
                                                            v71 = 0;
                                                            if ((v68 & v75[0]) == 0)
                                                            {
                                                                do
                                                                {
                                                                    v71 += 1;
                                                                }
                                                                while ((1 & v75[v71 * 4]) == 0);
                                                            }
                                                            v73 = *(rsp<8> + v71 * 8 + 144);
                                                            v69 = *(rsp<8> + v71 * 8 + 2192);
                                                            v72[0] = v73;
                                                            v72[256] = v69;
                                                        }
                                                        v68 *= 2;
                                                        v72 += 8;
                                                        v58 = v58 % 2;
                                                        v58 = v58 % 2;
                                                    }
                                                    while (!(((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, r12<8>, 0x0<64>, cc_ndep<8>))));
                                                }
                                                v65 += 1;
                                                v75 += 8;
                                            }
                                            while (v65 != 4);
                                        }
                                        if (((long long)(((char)*((char *)(((char *)&v18) + 1))) & 4)) != 0)
                                        {
                                            v58 = 0;
                                            while (true)
                                            {
                                                if ((((short)*(rdx<8>)) & 0x400) == 0)
                                                {
                                                    v58 += 1;
                                                    v62 = rdx<8> + 32;
                                                    if (v58 == v76)
                                                    {
                                                        break;
                                                    }
                                                }
                                                else
                                                {
                                                    v58 = *(rsp<8> + v58 * 8 + 4240);
                                                    v58 = ((char)((char)v3));
                                                    v74[10] = v58;
                                                    v74[266] = v58;
                                                    break;
                                                    if (v58 == 0)
                                                    {
                                                        break;
                                                    }
                                                }
                                            }
                                        }
                                        v63 = &v40;
                                        rsp<8> = rsp<8> - 8;
                                        v1 = &g_409a25;
                                        rpl_free();
                                        v67 = v63 + v76 * 24;
                                        while (true)
                                        {
                                            v63 = &v42;
                                            rsp<8> = rsp<8> - 8;
                                            v0 = &g_409a3c;
                                            rpl_free();
                                            if (v67 == v63)
                                            {
                                                break;
                                            }
                                        }
                                        v60 = 1;
                                        if ((*(rsp<8> + 20632) ^ *(v84 + 0x28)) == 0)
                                        {
                                            v64 = *(rsp<8> + 20648);
                                            v77 = *(rsp<8> + 20648 + 8 + 8);
                                            v79 = *(rsp<8> + 20648 + 8 + 8 + 8);
                                            v81 = *(rsp<8> + 20648 + 8 + 8 + 8 + 8);
                                            v83 = *(rsp<8> + 20648 + 8 + 8 + 8 + 8 + 8);
                                            return v60;
                                        }
                                        rsp<8> = rsp<8> - 8;
                                        *(rsp<8> + None) = &g_40a1ce;
                                        __stack_chk_fail(); /* do not return */
                                    }
                                }
                            }
                            if (v42 > 0)
                            {
                                while (true)
                                {
                                    if (*(v45 + (*(v43 + (v82 << 3)) << 3)) != 18446744069414584319)
                                    {
                                        rsp<8> = rsp<8> - 8;
                                        v5 = &g_4098ca;
                                        v58 = re_node_set_merge();
                                        v15 = v58;
                                    }
                                    v82 += 1;
                                }
                                if (v58 == 0 || *(v45 + (*(v43 + (v82 << 3)) << 3)) == 18446744069414584319)
                                {
                                    v82 = &v23;
                                    rsp<8> = rsp<8> - 8;
                                    v5 = &g_4098f8;
                                    v23 = v73;
                                    v73 = (long long)re_acquire_state_context();
                                }
                            }
                            else if (v73 == 0)
                            {
                                if (v15 != 0)
                                {
                                    /* goto 4235184; */
                                }
                            }
                        }
                    }
                    else
                    {
                        v17 = 12;
                    }
                    v63 = &v41;
                    rsp<8> = rsp<8> - 8;
                    v3 = &g_409fc5;
                    rpl_free();
                    v67 = v63 + v76 * 24;
                    while (true)
                    {
                        v63 = &v44;
                        rsp<8> = rsp<8> - 8;
                        v2 = &g_409fdc;
                        rpl_free();
                        if (v67 == v63)
                        {
                            break;
                        }
                    }
                    break;
                }
                else
                {
                    if (!(((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, r12<8>, 0x0<64>, cc_ndep<8>))))
                    {
                        break;
                    }
                    if (!(((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, r12<8>, 0x0<64>, cc_ndep<8>))))
                    {
                        rsp<8> = rsp<8> - 8;
                        v6 = &g_40a0d0;
                        v60 = calloc(0x8, 0x100);
                        *(v13 + 88) = v60;
                        v60 = ((char)(v60 != 0));
                        if ((*(rsp<8> + 20632) ^ *(v84 + 0x28)) == 0)
                        {
                            v64 = *(rsp<8> + 20648);
                            v77 = *(rsp<8> + 20648 + 8 + 8);
                            v79 = *(rsp<8> + 20648 + 8 + 8 + 8);
                            v81 = *(rsp<8> + 20648 + 8 + 8 + 8 + 8);
                            v83 = *(rsp<8> + 20648 + 8 + 8 + 8 + 8 + 8);
                            return v60;
                        }
                        rsp<8> = rsp<8> - 8;
                        *(rsp<8> + None) = &g_40a1ce;
                        __stack_chk_fail(); /* do not return */
                        v60 = 0;
                        rsp<8> = rsp<8> - 8;
                        *(rsp<8> + None) = &g_40a1ce;
                        __stack_chk_fail(); /* do not return */
                        if ((*(rsp<8> + 20632) ^ *(v84 + 0x28)) == 0)
                        {
                            v64 = *(rsp<8> + 20648);
                            v77 = *(rsp<8> + 20648 + 8 + 8);
                            v79 = *(rsp<8> + 20648 + 8 + 8 + 8);
                            v81 = *(rsp<8> + 20648 + 8 + 8 + 8 + 8);
                            v83 = *(rsp<8> + 20648 + 8 + 8 + 8 + 8 + 8);
                            return v60;
                        }
                    }
                }
            }
            if (...)
            {
                v63 = 0;
                while (true)
                {
                    v63 += 1;
                    rsp<8> = rsp<8> - 8;
                    v8 = &g_409d8a;
                    rpl_free();
                    if (v76 <= v63)
                    {
                        break;
                    }
                }
                v60 = 0;
                if ((*(rsp<8> + 20632) ^ *(v84 + 0x28)) == 0)
                {
                    v64 = *(rsp<8> + 20648);
                    v77 = *(rsp<8> + 20648 + 8 + 8);
                    v79 = *(rsp<8> + 20648 + 8 + 8 + 8);
                    v81 = *(rsp<8> + 20648 + 8 + 8 + 8 + 8);
                    v83 = *(rsp<8> + 20648 + 8 + 8 + 8 + 8 + 8);
                    return v60;
                }
                rsp<8> = rsp<8> - 8;
                *(rsp<8> + None) = &g_40a1ce;
                __stack_chk_fail(); /* do not return */
            }
        }
        v60 = 0;
        if ((*(rsp<8> + 20632) ^ *(v84 + 0x28)) == 0)
        {
            v64 = *(rsp<8> + 20648);
            v77 = *(rsp<8> + 20648 + 8 + 8);
            v79 = *(rsp<8> + 20648 + 8 + 8 + 8);
            v81 = *(rsp<8> + 20648 + 8 + 8 + 8 + 8);
            v83 = *(rsp<8> + 20648 + 8 + 8 + 8 + 8 + 8);
            return v60;
        }
        rsp<8> = rsp<8> - 8;
        *(rsp<8> + None) = &g_40a1ce;
        __stack_chk_fail(); /* do not return */
    }
    rsp<8> = rsp<8> - 8;
    v6 = &g_40a0d0;
    v60 = calloc(0x8, 0x100);
    *(v13 + 88) = v60;
    v60 = ((char)(v60 != 0));
    if ((*(rsp<8> + 20632) ^ *(v84 + 0x28)) == 0)
    {
        v64 = *(rsp<8> + 20648);
        v77 = *(rsp<8> + 20648 + 8 + 8);
        v79 = *(rsp<8> + 20648 + 8 + 8 + 8);
        v81 = *(rsp<8> + 20648 + 8 + 8 + 8 + 8);
        v83 = *(rsp<8> + 20648 + 8 + 8 + 8 + 8 + 8);
        return v60;
    }
    else
    {
        rsp<8> = rsp<8> - 8;
        *(rsp<8> + None) = &g_40a1ce;
        __stack_chk_fail(); /* do not return */
    }
}
