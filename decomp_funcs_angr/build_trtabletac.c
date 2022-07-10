typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_14 {
    char field_0;
    char padding_1[9];
    char field_a;
} struct_14;

typedef struct struct_12 {
    char field_0;
    char padding_1[87];
    unsigned long long field_58;
    char padding_60[84];
    unsigned int field_b4;
    char padding_b8[32];
    unsigned long long field_d8;
} struct_12;

typedef struct struct_15 {
    unsigned long long field_0;
    char padding_8[172];
    unsigned int field_b4;
} struct_15;

typedef struct struct_13 {
    char padding_0[104];
    char field_68;
} struct_13;

extern char g_40998a;
extern char g_409a1a;
extern char g_409a48;
extern unsigned long long g_409adc;
extern char g_409b75;
extern char g_409b8c;
extern unsigned long long g_409dd8;
extern char g_409e03;
extern unsigned long long g_409e7e;
extern char g_409eda;
extern <missing-type> g_40a115;
extern <missing-type> g_40a12c;
extern unsigned long long g_40a159;
extern char g_40a1a2;
extern char g_40a220;
extern unsigned long long g_40a287;
extern <missing-type> g_40a31e;

int build_trtable()
{
    BOT tmp_5;  // tmp #5
    BOT tmp_23;  // tmp #23
    unsigned long v0;  // [bp-0x1130]
    unsigned long v1;  // [bp-0x1128]
    unsigned long long v10;  // [bp-0x10e0]
    unsigned long long v11;  // [bp-0x10d8]
    struct_14 *v12;  // [bp-0x10d0]
    unsigned long long v13;  // [bp-0x10c8]
    unsigned long|unsigned long long v14;  // [bp-0x10c0]
    unsigned long long v15;  // [bp-0x10b8]
    unsigned int v16;  // [bp-0x10b4]
    unsigned long v17;  // [bp-0x10b0]
    unsigned int v18;  // [bp-0x10ac]
    unsigned long|unsigned long long v19;  // [bp-0x10a8]
    unsigned long long v2;  // [bp-0x1120]
    unsigned long|unsigned long long v20;  // [bp-0x10a0]
    unsigned long long v21;  // [bp-0x1098]
    uint128_t v22;  // [bp-0x1088]
    uint128_t v23;  // [bp-0x1078]
    unsigned long v24;  // [bp-0x1070]
    BOT v26;  // [bp-0x1058]
    unsigned long|BOT|uint128_t|unsigned long long v27;  // [bp-0x1048]
    uint128_t v28;  // [bp-0x1038]
    unsigned long v29;  // [bp-0x1030]
    unsigned long v3;  // [bp-0x1118]
    unsigned long v31;  // [bp-0x880]
    struct_13 *v32;  // [bp-0x878]
    unsigned long v34;  // [bp-0x848]
    uint128_t v35;  // [bp-0x838]
    unsigned long v36;  // [bp-0x88]
    struct_13 *v37;  // [bp-0x78]
    char|unsigned long v38;  // [bp-0x48]
    uint128_t v39;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x1110]
    unsigned long v40;  // [bp-0x30]
    unsigned long v41;  // [bp-0x20]
    unsigned long v42;  // [bp-0x18]
    unsigned long long v43[13];  // [bp-0x10]
    unsigned long v44;  // [bp-0x8]
    char v46;  // [bp+0x780]
    char v47;  // [bp+0x798]
    char v48;  // [bp+0x7a0]
    struct_2 *v49;  // [bp+0x7a8]
    char|unsigned long v5;  // [bp-0x1108]
    char v50;  // [bp+0x7b8]
    unsigned int v51;  // [bp+0x854]
    char v52;  // [bp+0x1f78]
    char v53;  // [bp+0x1f80]
    uint128_t v54;  // [bp+0x1fb8]
    BOT v55;  // [bp+0x1fc8]
    unsigned long v56;  // [bp+0x3fc0]
    unsigned long long v57;  // al
    unsigned long long|struct_2 * v59;  // rcx
    unsigned long v6;  // [bp-0x1100]
    struct_2 *|unsigned long long v60;  // rdx
    unsigned long long v61;  // rbx
    unsigned long|unsigned long long v62;  // rbx
    unsigned long long v63;  // rbx
    unsigned long long v64;  // rbp
    unsigned long long v65;  // rbp
    unsigned long long|struct_2 * v66;  // rsi
    unsigned long long v67;  // rdi
    unsigned long long v68;  // rdi
    unsigned long long v69;  // rdi
    struct_13 *|unsigned long v7;  // [bp-0x10f8]
    unsigned long long|unsigned long long [257]|struct_2 * v70;  // r8
    struct_13 *|unsigned long long v71;  // r9
    unsigned long long [267]|unsigned long long v72;  // r10
    unsigned long long [5]|unsigned long long v73;  // r11
    unsigned long long v74;  // r12
    unsigned long|unsigned long long v75;  // r12
    struct_14 *|unsigned long long|unsigned long|struct_12 *|unsigned long long [3] v76;  // r13
    unsigned long long v77;  // r13
    unsigned long long [13]|struct_15 *|unsigned long long v78;  // r14
    unsigned long long v79;  // r14
    char|unsigned long long v8;  // [bp-0x10f0]
    unsigned int|unsigned long|unsigned long long v80;  // r15
    unsigned long long v81;  // r15
    unsigned long long|char|unsigned long|unsigned short|struct_2 * v82;  // cc_dep1
    struct_2 *v83;  // fs
    uint128_t v84;  // xmm1
    uint128_t v85;  // xmm2
    uint128_t v86;  // xmm3
    uint128_t v87;  // xmm4
    BOT v88;  // xmm6
    unsigned long long [13]|unsigned long v9;  // [bp-0x10e8]

    v44 = v80;
    v43 = v78;
    v42 = v76;
    v41 = v75;
    rsp<8> = &stack_base-48;
    v40 = v62;
    do
    {
        rsp<8> = rsp<8> - 0x1000;
        v29 = v29;
    }
    while (rsp<8> != &stack_base-20528);
    rsp<8> = rsp<8> - 168;
    v20 = v66;
    v56 = *(v83 + 0x28);
    v82 = v78[2];
    v78[11] = 0;
    v78[12] = 0;
    v27 = 0;
    v28 = 0;
    if (v82 > 0)
    {
        v14 = v68;
        v75 = 0;
        v78 = v66;
        v11 = 0;
        v19 = rsp<8> + 12432;
        while (true)
        {
            v62 = v11;
            v13 = v11 * 8;
            v76 = *(*(v78 + 24) + v62 * 8) * 16 + *(v11);
            v80 = ((int)*(*(*(v78 + 24) + v62 * 8) * 16 + *(v11) + 8));
            v82 = ...;
            if (*((*(*(v78 + 24) + (v62 << 3)) << 4) + *(v11) + 8) != 1)
            {
                if (v80 == 3)
                {
                    v64 = rsp<8> + 144;
                    v59 = v76->field_0;
                    v68 = rsp<8> + 176;
                    v60 = rsp<8> + 144;
                    do
                    {
                        v27 = ((long long)v27) | v59->field_0;
                        v60 = &v27;
                        v59 += 8;
                    }
                    while (v68 != v60);
                }
                else if (v80 == 5 || v80 == 7)
                {
                    if ((((char)reg_32<4>) & 128) != 0)
                    {
                        v27 &= 18446744069414584318;
                    }
                }
                if (v80 == 5)
                {
                    v62 = v11;
                    v64 = rsp<8> + 144;
                    if (*(v11 + 180) > 1)
                    {
                        v59 = *(v62 + 120);
                        v60 = rbp<8>;
                        v68 = rsp<8> + 176;
                        do
                        {
                            v27 = ((long long)v27) | v59->field_0;
                            v60 = &v27;
                            v59 += 8;
                        }
                        while (v60 != v68);
                    }
                    else
                    {
                        v27 = 340282366920938463463374607431768211455;
                        v28 = 340282366920938463463374607431768211455;
                    }
                    v60 = *(v11 + 216);
                    if (((long long)(((char)*(v11 + 216)) & 64)) == 0)
                    {
                        v27 = ((long long)*((long long *)(((char *)&v27) + -24))) & 18446744069414583295;
                    }
                }
                if (v80 == 7)
                {
                    v66 = v11;
                    v64 = rsp<8> + 144;
                    v27 = 340282366920938463463374607431768211455;
                    v60 = *(v66 + 216);
                    if (((long long)(((char)*(v11 + 216)) & 64)) == 0)
                    {
                        v27 = 18446744069414583295;
                    }
                }
            }
            else
            {
                v64 = rsp<8> + 144;
                v60 = ((long long)(((int)(((long long)v76->field_0) >> 3)) & 24));
                *(rsp<8> + 144 + v60) = *(rsp<8> + 144 + v60) | 1 << (v76->field_0 & 63);
            }
            if (...)
            {
                if (((long long)(v82 & 32)) != 0)
                {
                    v60 = ((long long)*((long long *)(((char *)&v27) + -24)));
                    *(v64) = 0;
                    *(v64 + 16) = 0;
                    tmp_5 = v60;
                    if (((long long)(tmp_5 & 4)) != 0)
                    {
                        v27 = 0x400;
                    }
                }
                if (((long long)(v76->field_a & 64)) == 0 && v80 == 1 && ((long long)(v82 & 128)) == 0 && ((long long)(v82 & 4)) != 0 && (((long long)(v82 & 32)) == 0 || ((long long)(tmp_5 & 4)) != 0))
                {
                    /* goto 4234894; */
                }
            }
            if (...)
            {
                v70 = v11;
                if (*(v11 + 180) > 1)
                {
                    v68 = *(v70 + 120);
                    v66 = 0;
                    v59 = 0;
                    do
                    {
                        v60 = (!(*(rdi<8> + v59 * 8)) | *(v70 + v59 * 8 + 184)) & *(v64 + v59 * 8);
                        *(v64 + v59 * 8) = (!(*(rdi<8> + v59 * 8)) | *(v70 + v59 * 8 + 184)) & *(v64 + v59 * 8);
                        v59 += 1;
                        v66 |= v60;
                    }
                    while (v59 != 4);
                }
                else
                {
                    v68 = v11;
                    v66 = 0;
                    v60 = 0;
                    do
                    {
                        v59 = *(v64 + v60 * 8) & *(v68 + v60 * 8 + 184);
                        *(v64 + v60 * 8) = *(v64 + v60 * 8) & *(v68 + v60 * 8 + 184);
                        v60 += 1;
                        v66 |= v59;
                    }
                    while (v60 != 4);
                    if (v66 == 0)
                    {
                        /* goto 4233553; */
                    }
                }
            }
            if (...)
            {
                /* goto 4234894; */
            }
            if (...)
            {
                v68 = v11;
                if (*(v11 + 180) > 1)
                {
                    v66 = *(v68 + 120);
                    v59 = 0;
                    v60 = 0;
                    do
                    {
                        v82 = !(*(rdi<8> + v60 * 8 + 184) & *(rsi<8> + v60 * 8)) & *(v64 + v60 * 8);
                        *(v64 + v60 * 8) = !(*(rdi<8> + v60 * 8 + 184) & *(rsi<8> + v60 * 8)) & *(v64 + v60 * 8);
                        v60 += 1;
                        v59 |= v82;
                    }
                    while (v60 != 4);
                }
                v66 = v11;
                v59 = 0;
                v60 = 0;
                do
                {
                    v82 = !(*(rsi<8> + v60 * 8 + 184)) & *(v64 + v60 * 8);
                    *(v64 + v60 * 8) = !(*(rsi<8> + v60 * 8 + 184)) & *(v64 + v60 * 8);
                    v60 += 1;
                    v59 |= v82;
                }
                while (v60 != 4);
            }
            if (...)
            {
                v62 = 0;
                if (!(((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, r12<8>, 0x0<64>, cc_ndep<8>))))
                {
                    v12 = v76;
                    v76 = v19;
                    v15 = v78;
                    while (true)
                    {
                        v68 = v62 * 32;
                        if (...)
                        {
                            v71 = v76 + v68;
                            v59 = 0;
                            v82 = 0;
                            v66 = rsp<8> + 2192;
                            do
                            {
                                v60 = *(v64 + v82 * 8) & *(v71 + v82 * 8);
                                v34 = *(v64 + v82 * 8) & *(v71 + v82 * 8);
                                v82 += 1;
                                v59 |= v60;
                            }
                            while (v82 != 4);
                            if (v59 != 0)
                            {
                                v78 = 0;
                                v72 = 0;
                                v73 = &v38;
                                v60 = 0;
                                do
                                {
                                    v59 = !(*(v64 + v60 * 8)) & *(v71 + v60 * 8);
                                    v82 = !(*(v71 + v60 * 8)) & *(v64 + v60 * 8);
                                    v38 = !(*(v64 + v60 * 8)) & *(v71 + v60 * 8);
                                    v72 |= v59;
                                    *(v64 + v60 * 8) = v82;
                                    v60 += 1;
                                    v78 |= v82;
                                }
                                while (v60 != 4);
                                v71 = &v50;
                                if (v72 != 0)
                                {
                                    v84 = v38;
                                    v85 = v39;
                                    v17 = v71;
                                    v86 = v34;
                                    v87 = v35;
                                    v54 = v84;
                                    v55 = v85;
                                    *(v76 + v68) = v86;
                                    *(v76 + v68 + 16) = v87;
                                    rsp<8> = rsp<8> - 8;
                                    v10 = &g_409dd8;
                                    v82 = re_node_set_init_copy();
                                    v75 = 1;
                                }
                                rsp<8> = rsp<8> - 8;
                                v9 = &g_409e03;
                                v82 = re_node_set_insert();
                            }
                        }
                        if (...)
                        {
                            v62 += 1;
                        }
                        v78 = v13;
                        break;
                    }
                    if (v59 != 0)
                    {
                        v62 = 0;
                    }
                }
            }
            if (...)
            {
                tmp_23 = v11;
                v88 = v27;
                *(rsp<8> + r12<8> * 32 + 12432) = *((int128_t *)(((char *)&v26) + -8));
                *(rsp<8> + r12<8> * 32 + 12448) = v88;
                v62 = *(*(r14<8> + 24) + tmp_23);
                v76 = rsp<8> + r12<8> * 24 + 6288;
                *(rsp<8> + r12<8> * 24 + 6288) = 1;
                *(rsp<8> + r12<8> * 24 + 6288 + 8) = 1;
                rsp<8> = rsp<8> - 8;
                v8 = &g_409e7e;
                v82 = malloc(0x8);
                v76[2] = v82;
                if (v82 != 0)
                {
                    v82->field_0 = v62;
                    v75 = r12<8> + 1;
                }
                else
                {
                    v76[1] = 0;
                    v76[0] = 0;
                    if (v75 == 0)
                    {
                        break;
                    }
                    if (v75 != 0)
                    {
                        /* goto 4234936; */
                    }
                }
            }
            if (...)
            {
                *(v64) = 0;
                *(v64 + 16) = 0;
            }
            if (...)
            {
                v8 += 1;
                v78 = v11;
                if (!(((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, r12<8>, 0x0<64>, cc_ndep<8>))))
                {
                    v21 = 0;
                    v20 = v75 + 1;
                    rsp<8> = rsp<8> - 8;
                    v7 = &g_40998a;
                    v21 = v64;
                    v64 = malloc((v75 + 1) * 8);
                    if (v64 != 0)
                    {
                        v8 = 0;
                        v65 = 0;
                        v18 = 0;
                        v7 = rsp<8> + 76;
                        v82 = v78;
                        v78 = &v48;
                        v22 = 0;
                        v76 = v82;
                        v23 = 0;
                        while (true)
                        {
                            v20 = 0;
                            v80 = 0;
                            if (v48 > 0)
                            {
                                while (true)
                                {
                                    if (*(v50 + (*(v49 + (v80 << 3)) << 3)) != 18446744069414584319)
                                    {
                                        rsp<8> = rsp<8> - 8;
                                        v6 = &g_409a1a;
                                        v82 = re_node_set_merge();
                                        v16 = v82;
                                    }
                                    v80 += 1;
                                }
                                if (*(v50 + (*(v49 + (v80 << 3)) << 3)) == 18446744069414584319 || v82 == 0)
                                {
                                    v80 = rsp<8> + 144;
                                    rsp<8> = rsp<8> - 8;
                                    v5 = &g_409a48;
                                    v24 = r9<8>;
                                    r9<8> = (long long)re_acquire_state_context();
                                }
                            }
                            if (v48 <= 0 || r9<8> != 0)
                            {
                                v80 = rsp<8> + 144;
                                rsp<8> = rsp<8> - 8;
                                v5 = &g_409a48;
                                v24 = r9<8>;
                                r9<8> = (long long)re_acquire_state_context();
                                if (((int)*((int *)(((char *)&v14) + 4))) == 0 || r9<8> != 0)
                                {
                                    if (((char)v71->field_68) >= 0)
                                    {
                                        v32 = v71;
                                        v37 = v71;
                                    }
                                    else
                                    {
                                        v7 = v71;
                                        rsp<8> = rsp<8> - 8;
                                        v4 = &g_40a159;
                                        v82 = re_acquire_state_context();
                                        v71 = v6;
                                        v31 = v82;
                                        if (v82 == 0 && ((int)*((int *)(((char *)&v13) + 4))) != 0)
                                        {
                                            /* goto 0x40a100; */
                                        }
                                        if (((int)*((int *)(((char *)&v13) + 4))) == 0 || v82 != 0)
                                        {
                                            if (v82 == 0 || v71 != v82)
                                            {
                                                v5 = ((char)(2 <= v51? 1 : ((int)*(rsp<8> + 8))));
                                            }
                                            rsp<8> = rsp<8> - 8;
                                            v3 = &g_40a1a2;
                                            v82 = re_acquire_state_context();
                                            v36 = v82;
                                            if (v82 == 0 && ((int)*((int *)(((char *)&v12) + 4))) != 0)
                                            {
                                                /* goto 0x40a100; */
                                            }
                                        }
                                    }
                                    if ((((int)*((int *)(((char *)&v12) + 4))) == 0 || ((char)v71->field_68) >= 0 || v82 != 0) && (((int)*((int *)(((char *)&v13) + 4))) == 0 || ((char)v71->field_68) >= 0 || v82 != 0))
                                    {
                                        v60 = &v52;
                                        v59 = &v19;
                                        v82 = &v19;
                                        v66 = &v52;
                                        do
                                        {
                                            v19 |= v52;
                                            v82 = &v20;
                                            v66 = &v53;
                                        }
                                        while (v80 != v82);
                                        v65 = 1;
                                        v78 = &v50;
                                        v82 = ((char)((char)v4));
                                        v5 = v59;
                                        v78 = v76;
                                        v3 = v60;
                                        if (v82 == 0)
                                        {
                                            rsp<8> = rsp<8> - 8;
                                            v2 = &g_409adc;
                                            v72 = calloc(0x8, 0x100);
                                            v9[11] = v72;
                                            v60 = v2;
                                            v59 = v4;
                                            v61 = 0;
                                            v73 = v2;
                                            do
                                            {
                                                v82 = *(v59 + v61 * 8);
                                                v66 = 1;
                                                v70 = v61 * 0x200 + v72;
                                                if (*(v59 + (v61 << 3)) != 0)
                                                {
                                                    do
                                                    {
                                                        if (((long long)(v82 & 1)) != 0)
                                                        {
                                                            v69 = 0;
                                                            if ((v66 & v73[0]) == 0)
                                                            {
                                                                do
                                                                {
                                                                    v69 += 1;
                                                                }
                                                                while ((1 & v73[v69 * 4]) == 0);
                                                            }
                                                            if ((v66 & *(v78 + (0 << 3) + 184)) != 0)
                                                            {
                                                                v68 = *(rsp<8> + rdi<8> * 8 + 2192);
                                                                v70->field_0 = v68;
                                                            }
                                                            else
                                                            {
                                                                v68 = *(rsp<8> + rdi<8> * 8 + 144);
                                                                v70->field_0 = v68;
                                                            }
                                                        }
                                                        v66 *= 2;
                                                        v70 += 8;
                                                        v82 = v82 % 2;
                                                        v82 = v82 % 2;
                                                    }
                                                    while (!(((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, r12<8>, 0x0<64>, cc_ndep<8>))));
                                                }
                                                v61 += 1;
                                                v73 += 8;
                                            }
                                            while (v61 != 4);
                                        }
                                        else
                                        {
                                            rsp<8> = rsp<8> - 8;
                                            v2 = &g_40a287;
                                            v72 = calloc(0x8, 0x200);
                                            v9[12] = v72;
                                            v60 = v2;
                                            v59 = v4;
                                            v61 = 0;
                                            v73 = v2;
                                            do
                                            {
                                                v82 = *(v59 + v61 * 8);
                                                v66 = 1;
                                                v70 = v61 * 0x200 + v72;
                                                if (*(v59 + (v61 << 3)) != 0)
                                                {
                                                    do
                                                    {
                                                        if (((long long)(v82 & 1)) != 0)
                                                        {
                                                            v67 = 0;
                                                            if ((v66 & v73[0]) == 0)
                                                            {
                                                                do
                                                                {
                                                                    v67 += 1;
                                                                }
                                                                while ((1 & v73[v67 * 4]) == 0);
                                                            }
                                                            v71 = *(rsp<8> + rdi<8> * 8 + 144);
                                                            v68 = *(rsp<8> + rdi<8> * 8 + 2192);
                                                            v70[0] = v71;
                                                            v70[256] = v68;
                                                        }
                                                        v66 *= 2;
                                                        v70 += 8;
                                                        v82 = v82 % 2;
                                                        v82 = v82 % 2;
                                                    }
                                                    while (!(((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, r12<8>, 0x0<64>, cc_ndep<8>))));
                                                }
                                                v61 += 1;
                                                v73 += 8;
                                            }
                                            while (v61 != 4);
                                        }
                                        if (((long long)(((char)*((char *)(((char *)&v17) + 1))) & 4)) != 0)
                                        {
                                            v82 = 0;
                                            while (true)
                                            {
                                                if ((((short)*(rdx<8>)) & 0x400) == 0)
                                                {
                                                    v82 += 1;
                                                    v60 = rdx<8> + 32;
                                                    if (v82 == v75)
                                                    {
                                                        break;
                                                    }
                                                }
                                                else
                                                {
                                                    v82 = *(rsp<8> + v82 * 8 + 4240);
                                                    v82 = ((char)((char)v3));
                                                    v72[10] = v82;
                                                    v72[266] = v82;
                                                    break;
                                                    if (v82 == 0)
                                                    {
                                                        break;
                                                    }
                                                }
                                            }
                                        }
                                        v62 = &v46;
                                        rsp<8> = rsp<8> - 8;
                                        v1 = &g_409b75;
                                        rpl_free();
                                        v64 = v62 + v75 * 24;
                                        while (true)
                                        {
                                            v62 = &v47;
                                            rsp<8> = rsp<8> - 8;
                                            v0 = &g_409b8c;
                                            rpl_free();
                                            if (v64 == v62)
                                            {
                                                break;
                                            }
                                        }
                                        v57 = 1;
                                        if ((*(rsp<8> + 20632) ^ *(v83 + 0x28)) == 0)
                                        {
                                            v63 = *(rsp<8> + 20648);
                                            v74 = *(rsp<8> + 20648 + 8 + 8);
                                            v77 = *(rsp<8> + 20648 + 8 + 8 + 8);
                                            v79 = *(rsp<8> + 20648 + 8 + 8 + 8 + 8);
                                            v81 = *(rsp<8> + 20648 + 8 + 8 + 8 + 8 + 8);
                                            return v57;
                                        }
                                        rsp<8> = rsp<8> - 8;
                                        *(rsp<8> + None) = &g_40a31e;
                                        __stack_chk_fail(); /* do not return */
                                    }
                                }
                            }
                            if (r9<8> == 0 && v48 <= 0 && ((int)*((int *)(((char *)&v14) + 4))) != 0)
                            {
                                /* goto 0x40a100; */
                            }
                        }
                    }
                    else
                    {
                        v18 = 12;
                    }
                    v62 = rsp<8> + 6304;
                    rsp<8> = rsp<8> - 8;
                    *(rsp<8> + None) = &g_40a115;
                    rpl_free();
                    v64 = v62 + v75 * 24;
                    while (true)
                    {
                        v62 += 24;
                        rsp<8> = rsp<8> - 8;
                        *(rsp<8> + None) = &g_40a12c;
                        rpl_free();
                        if (v64 == v62)
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
                        v7 = &g_40a220;
                        v57 = calloc(0x8, 0x100);
                        *(v14 + 88) = v57;
                        v57 = ((char)(v57 != 0));
                        if ((*(rsp<8> + 20632) ^ *(v83 + 0x28)) == 0)
                        {
                            v63 = *(rsp<8> + 20648);
                            v74 = *(rsp<8> + 20648 + 8 + 8);
                            v77 = *(rsp<8> + 20648 + 8 + 8 + 8);
                            v79 = *(rsp<8> + 20648 + 8 + 8 + 8 + 8);
                            v81 = *(rsp<8> + 20648 + 8 + 8 + 8 + 8 + 8);
                            return v57;
                        }
                        rsp<8> = rsp<8> - 8;
                        *(rsp<8> + None) = &g_40a31e;
                        __stack_chk_fail(); /* do not return */
                        v57 = 0;
                        rsp<8> = rsp<8> - 8;
                        *(rsp<8> + None) = &g_40a31e;
                        __stack_chk_fail(); /* do not return */
                        if ((*(rsp<8> + 20632) ^ *(v83 + 0x28)) == 0)
                        {
                            v63 = *(rsp<8> + 20648);
                            v74 = *(rsp<8> + 20648 + 8 + 8);
                            v77 = *(rsp<8> + 20648 + 8 + 8 + 8);
                            v79 = *(rsp<8> + 20648 + 8 + 8 + 8 + 8);
                            v81 = *(rsp<8> + 20648 + 8 + 8 + 8 + 8 + 8);
                            return v57;
                        }
                    }
                }
            }
            if (...)
            {
                v62 = 0;
                while (true)
                {
                    v62 += 1;
                    rsp<8> = rsp<8> - 8;
                    v9 = &g_409eda;
                    rpl_free();
                    if (v75 <= v62)
                    {
                        break;
                    }
                }
                v57 = 0;
                if ((*(rsp<8> + 20632) ^ *(v83 + 0x28)) == 0)
                {
                    v63 = *(rsp<8> + 20648);
                    v74 = *(rsp<8> + 20648 + 8 + 8);
                    v77 = *(rsp<8> + 20648 + 8 + 8 + 8);
                    v79 = *(rsp<8> + 20648 + 8 + 8 + 8 + 8);
                    v81 = *(rsp<8> + 20648 + 8 + 8 + 8 + 8 + 8);
                    return v57;
                }
                rsp<8> = rsp<8> - 8;
                *(rsp<8> + None) = &g_40a31e;
                __stack_chk_fail(); /* do not return */
            }
        }
        v57 = 0;
        if ((*(rsp<8> + 20632) ^ *(v83 + 0x28)) == 0)
        {
            v63 = *(rsp<8> + 20648);
            v74 = *(rsp<8> + 20648 + 8 + 8);
            v77 = *(rsp<8> + 20648 + 8 + 8 + 8);
            v79 = *(rsp<8> + 20648 + 8 + 8 + 8 + 8);
            v81 = *(rsp<8> + 20648 + 8 + 8 + 8 + 8 + 8);
            return v57;
        }
        rsp<8> = rsp<8> - 8;
        *(rsp<8> + None) = &g_40a31e;
        __stack_chk_fail(); /* do not return */
    }
    rsp<8> = rsp<8> - 8;
    v7 = &g_40a220;
    v57 = calloc(0x8, 0x100);
    *(v14 + 88) = v57;
    v57 = ((char)(v57 != 0));
    if ((*(rsp<8> + 20632) ^ *(v83 + 0x28)) == 0)
    {
        v63 = *(rsp<8> + 20648);
        v74 = *(rsp<8> + 20648 + 8 + 8);
        v77 = *(rsp<8> + 20648 + 8 + 8 + 8);
        v79 = *(rsp<8> + 20648 + 8 + 8 + 8 + 8);
        v81 = *(rsp<8> + 20648 + 8 + 8 + 8 + 8 + 8);
        return v57;
    }
    else
    {
        rsp<8> = rsp<8> - 8;
        *(rsp<8> + None) = &g_40a31e;
        __stack_chk_fail(); /* do not return */
    }
}
