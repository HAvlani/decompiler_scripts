typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_12 {
    unsigned long long field_0;
    char padding_8[112];
    unsigned long long field_78;
    char padding_80[52];
    unsigned int field_b4;
    char padding_b8[32];
    unsigned long long field_d8;
} struct_12;

typedef struct struct_15 {
    char field_0;
    char padding_1[9];
    char field_a;
} struct_15;

typedef struct struct_17 {
    unsigned long long field_0;
    char padding_8[172];
    unsigned int field_b4;
    char padding_b8[32];
    unsigned long long field_d8;
} struct_17;

typedef struct struct_14 {
    char field_0;
    char padding_1[9];
    char field_a;
    char padding_b[77];
    unsigned long long field_58;
    unsigned long long field_60;
} struct_14;

typedef struct struct_18 {
    uint128_t field_0;
} struct_18;

typedef struct struct_16 {
    char padding_0[88];
    unsigned long long field_58;
} struct_16;

typedef struct struct_19 {
    unsigned long long field_0;
    char padding_8[172];
    unsigned int field_b4;
} struct_19;

typedef struct struct_13 {
    char padding_0[104];
    char field_68;
} struct_13;

extern char g_40e0aa;
extern char g_40e13a;
extern char g_40e168;
extern unsigned long long g_40e1fc;
extern char g_40e295;
extern char g_40e2ac;
extern char g_40e4f8;
extern char g_40e523;
extern char g_40e59e;
extern char g_40e5fa;
extern char g_40e835;
extern char g_40e84c;
extern unsigned long long g_40e879;
extern unsigned long long g_40e8c2;
extern char g_40e940;
extern unsigned long long g_40e9a7;
extern <missing-type> g_40ea3e;

int build_trtable()
{
    BOT tmp_5;  // tmp #5
    BOT tmp_23;  // tmp #23
    unsigned long v0;  // [bp-0x1118]
    unsigned long v1;  // [bp-0x1110]
    unsigned long long v10;  // [bp-0x10c8]
    struct_12 *v11;  // [bp-0x10c0]
    unsigned long long v12;  // [bp-0x10b8]
    struct_16 *v13;  // [bp-0x10b0]
    unsigned long long v14;  // [bp-0x10a8]
    unsigned int v15;  // [bp-0x10a4]
    unsigned long v16;  // [bp-0x10a0]
    unsigned int v17;  // [bp-0x109c]
    char v19;  // [bp-0x1097]
    unsigned long long v2;  // [bp-0x1108]
    unsigned long long|unsigned long v20;  // [bp-0x1090]
    unsigned long long v21;  // [bp-0x1088]
    uint128_t v22;  // [bp-0x1078]
    uint128_t v23;  // [bp-0x1068]
    unsigned long v24;  // [bp-0x1058]
    unsigned long long|BOT|uint128_t v25;  // [bp-0x1048]
    uint128_t v26;  // [bp-0x1038]
    unsigned long v27;  // [bp-0x1030]
    char v28;  // [bp-0x1028]
    unsigned long v29;  // [bp-0x868]
    unsigned long long|unsigned long v3;  // [bp-0x1100]
    struct_13 *v30;  // [bp-0x860]
    unsigned long v32;  // [bp-0x848]
    BOT v33;  // [bp-0x838]
    unsigned long v34;  // [bp-0x70]
    struct_13 *v35;  // [bp-0x60]
    char|unsigned long v36;  // [bp-0x48]
    uint128_t v37;  // [bp-0x38]
    unsigned long v38;  // [bp-0x30]
    unsigned long v39;  // [bp-0x20]
    unsigned long long|unsigned long v4;  // [bp-0x10f8]
    unsigned long v40;  // [bp-0x18]
    unsigned long long v41[13];  // [bp-0x10]
    unsigned long v42;  // [bp-0x8]
    char v44;  // [bp+0x798]
    char v45;  // [bp+0x7b0]
    char v46;  // [bp+0x7b8]
    struct_2 *v47;  // [bp+0x7c8]
    unsigned int v48;  // [bp+0x864]
    char|unsigned long v5;  // [bp-0x10f0]
    char v50;  // [bp+0x1f90]
    char v51;  // [bp+0x1f98]
    uint128_t v52;  // [bp+0x1fb8]
    BOT v53;  // [bp+0x1fc8]
    unsigned long v54;  // [bp+0x3fc0]
    unsigned long long v56;  // rax
    unsigned long long|struct_2 * v57;  // rcx
    unsigned long long|struct_2 * v58;  // rdx
    unsigned long long v59;  // rbx
    unsigned long long|unsigned long v6;  // [bp-0x10e8]
    unsigned long long|unsigned long|struct_12 * v60;  // rbx
    unsigned long long v61;  // rbx
    unsigned long long v62;  // rbp
    unsigned long long v63;  // rbp
    unsigned long long|struct_17 *|struct_2 * v64;  // rsi
    unsigned long long|struct_17 *|struct_12 * v65;  // rdi
    unsigned long long v66;  // rdi
    unsigned long long v67;  // rdi
    unsigned long long|unsigned long long [257]|struct_12 *|struct_2 * v68;  // r8
    unsigned long long|struct_13 * v69;  // r9
    struct_13 *|char *|char v7;  // [bp-0x10e0]
    unsigned long long|unsigned long long [267] v70;  // r10
    unsigned long long|unsigned long long [5] v71;  // r11
    unsigned long long|unsigned long v72;  // r12
    unsigned long long v73;  // r12
    unsigned long long [3]|struct_18 *|struct_15 *|unsigned long long|unsigned long v74;  // r13
    unsigned long long v75;  // r13
    unsigned long long|unsigned long long [13]|struct_19 * v76;  // r14
    unsigned long long v77;  // r14
    unsigned long long v78;  // r15
    unsigned long long|unsigned int|unsigned long v79;  // r15
    unsigned long long v8;  // [bp-0x10d8]
    char|struct_2 *|unsigned long long|unsigned long|unsigned short v80;  // cc_dep1
    struct_2 *v81;  // fs
    uint128_t v82;  // xmm1
    uint128_t v83;  // xmm2
    uint128_t v84;  // xmm3
    uint128_t v85;  // xmm4
    uint128_t v86;  // xmm6
    struct_14 *v9;  // [bp-0x10d0]

    v42 = v79;
    v41 = v76;
    v40 = v74;
    v39 = v72;
    rsp<8> = &stack_base-48;
    v38 = v60;
    do
    {
        rsp<8> = rsp<8> - 0x1000;
        v27 = v27;
    }
    while (rsp<8> != &stack_base-20528);
    rsp<8> = rsp<8> - 168;
    v16 = v64;
    v54 = *(v81 + 0x28);
    v80 = v76[2];
    v76[11] = 0;
    v76[12] = 0;
    v25 = 0;
    v26 = 0;
    if (v80 > 0)
    {
        v11 = v65;
        v72 = 0;
        v76 = v64;
        v8 = 0;
        v14 = rsp<8> + 12432;
        while (true)
        {
            v60 = v8;
            v10 = v8 * 8;
            v74 = *(*(v76 + 24) + v60 * 8) * 16 + v11->field_0;
            v79 = ((int)*(*(*(v76 + 24) + v60 * 8) * 16 + v11->field_0 + 8));
            v80 = ...;
            if (*((*(*(v76 + 24) + (v60 << 3)) << 4) + v11->field_0 + 8) != 1)
            {
                if (v79 == 3)
                {
                    v63 = &v25;
                    v57 = v74->field_0;
                    v65 = &v28;
                    v58 = &v25;
                    do
                    {
                        v25 = ((long long)v25) | v57->field_0;
                        v58 = &v25;
                        v57 += 8;
                    }
                    while (v65 != v58);
                }
                else if (v79 == 7 || v79 == 5)
                {
                    if ((((char)v58) & 128) != 0)
                    {
                        v25 = ((long long)v25) & 18446744069414584318;
                    }
                }
                if (v79 == 5)
                {
                    v60 = v11;
                    v63 = &v25;
                    if (v11->field_b4 > 1)
                    {
                        v57 = v60->field_78;
                        v58 = rbp<8>;
                        v65 = &v28;
                        do
                        {
                            v25 = ((long long)v25) | v57->field_0;
                            v58 = &v25;
                            v57 += 8;
                        }
                        while (v58 != v65);
                    }
                    else
                    {
                        v25 = 340282366920938463463374607431768211455;
                        v26 = 340282366920938463463374607431768211455;
                    }
                    v58 = v11->field_d8;
                    if (((long long)(((char)v11->field_d8) & 64)) == 0)
                    {
                        v25 = ((long long)v25) & 18446744069414583295;
                    }
                }
                if (v79 == 7)
                {
                    v64 = v11;
                    v63 = &v25;
                    v25 = 340282366920938463463374607431768211455;
                    v58 = v64->field_d8;
                    if (((long long)(((char)v11->field_d8) & 64)) == 0)
                    {
                        v25 = 18446744069414583295;
                    }
                }
            }
            else
            {
                v63 = &v25;
                v58 = ((long long)(((int)(((long long)v74->field_0) >> 3)) & 24));
                *(&v25 + v58) = *(&v25 + v58) | 1 << (v74->field_0 & 63);
            }
            if (...)
            {
                if (((long long)(v80 & 32)) != 0)
                {
                    v58 = ((long long)v25);
                    *(rbp<8> + None) = 0;
                    *(rbp<8> + 16) = 0;
                    tmp_5 = v58;
                    if (((long long)(tmp_5 & 4)) != 0)
                    {
                        v25 = 0x400;
                    }
                }
                if (v79 == 1 && ((long long)(v80 & 128)) == 0 && ((long long)(v74->field_a & 64)) == 0 && ((long long)(v80 & 4)) != 0 && (((long long)(v80 & 32)) == 0 || ((long long)(tmp_5 & 4)) != 0))
                {
                    /* goto 4253102; */
                }
            }
            if (...)
            {
                v68 = v11;
                if (v11->field_b4 > 1)
                {
                    v65 = v68->field_78;
                    v64 = 0;
                    v57 = 0;
                    do
                    {
                        v58 = (!(*(rdi<8> + v57 * 8)) | v68 + v57 * 8->padding_b8) & *(v63 + v57 * 8);
                        *(v63 + v57 * 8) = (!(*(rdi<8> + v57 * 8)) | v68 + v57 * 8->padding_b8) & *(v63 + v57 * 8);
                        v57 += 1;
                        v64 |= v58;
                    }
                    while (v57 != 4);
                }
                else
                {
                    v65 = v11;
                    v64 = 0;
                    v58 = 0;
                    do
                    {
                        v57 = *(v63 + v58 * 8) & v65 + v58 * 8->padding_b8;
                        *(v63 + v58 * 8) = *(v63 + v58 * 8) & v65 + v58 * 8->padding_b8;
                        v58 += 1;
                        v64 |= v57;
                    }
                    while (v58 != 4);
                    if (v64 == 0)
                    {
                        /* goto 4251761; */
                    }
                }
            }
            if (...)
            {
                /* goto 4253102; */
            }
            if (...)
            {
                v65 = v11;
                if (v11->field_b4 > 1)
                {
                    v64 = v65->field_78;
                    v57 = 0;
                    v58 = 0;
                    do
                    {
                        v80 = !(*(rdi<8> + v58 * 8 + 184) & *(rsi<8> + v58 * 8)) & *(v63 + v58 * 8);
                        *(v63 + v58 * 8) = !(*(rdi<8> + v58 * 8 + 184) & *(rsi<8> + v58 * 8)) & *(v63 + v58 * 8);
                        v58 += 1;
                        v57 |= v80;
                    }
                    while (v58 != 4);
                }
                v64 = v11;
                v57 = 0;
                v58 = 0;
                do
                {
                    v80 = !(*(rsi<8> + v58 * 8 + 184)) & *(v63 + v58 * 8);
                    *(v63 + v58 * 8) = !(*(rsi<8> + v58 * 8 + 184)) & *(v63 + v58 * 8);
                    v58 += 1;
                    v57 |= v80;
                }
                while (v58 != 4);
            }
            if (...)
            {
                v60 = 0;
                if (!(((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, r12<8>, 0x0<64>, cc_ndep<8>))))
                {
                    v9 = v74;
                    v74 = v14;
                    v12 = v76;
                    while (true)
                    {
                        v65 = v60 * 32;
                        if (...)
                        {
                            v69 = v74 + v65;
                            v57 = 0;
                            v80 = 0;
                            v64 = rsp<8> + 2192;
                            do
                            {
                                v58 = *(v63 + v80 * 8) & *(v69 + v80 * 8);
                                v32 = *(v63 + v80 * 8) & *(v69 + v80 * 8);
                                v80 += 1;
                                v57 |= v58;
                            }
                            while (v80 != 4);
                            if (v57 != 0)
                            {
                                v76 = 0;
                                v70 = 0;
                                v71 = &v36;
                                v58 = 0;
                                do
                                {
                                    v57 = !(*(v63 + v58 * 8)) & *(v69 + v58 * 8);
                                    v80 = !(*(v69 + v58 * 8)) & *(v63 + v58 * 8);
                                    v36 = !(*(v63 + v58 * 8)) & *(v69 + v58 * 8);
                                    v70 |= v57;
                                    *(v63 + v58 * 8) = v80;
                                    v58 += 1;
                                    v76 |= v80;
                                }
                                while (v58 != 4);
                                v69 = &v46;
                                if (v70 != 0)
                                {
                                    v82 = v36;
                                    v83 = v37;
                                    v13 = v69;
                                    v84 = v32;
                                    v85 = v33;
                                    v52 = v82;
                                    v53 = v83;
                                    *(v74 + v65) = v84;
                                    *(v74 + v65 + 16) = v85;
                                    rsp<8> = rsp<8> - 8;
                                    v7 = &g_40e4f8;
                                    v80 = re_node_set_init_copy();
                                    v72 = 1;
                                }
                                rsp<8> = rsp<8> - 8;
                                v6 = &g_40e523;
                                v80 = re_node_set_insert();
                            }
                        }
                        if (...)
                        {
                            v60 += 1;
                        }
                        v76 = v10;
                        break;
                    }
                    if (...)
                    {
                        v60 = 0;
                    }
                }
            }
            if (...)
            {
                tmp_23 = v10;
                v86 = v25;
                *(rsp<8> + r12<8> * 32 + 12432) = v25;
                *(rsp<8> + r12<8> * 32 + 12448) = v86;
                v60 = *(*(v76 + 24) + tmp_23);
                v74 = rsp<8> + r12<8> * 24 + 6288;
                *(rsp<8> + r12<8> * 24 + 6288) = 1;
                *(rsp<8> + r12<8> * 24 + 6288 + 8) = 1;
                rsp<8> = rsp<8> - 8;
                v5 = &g_40e59e;
                v80 = malloc(0x8);
                v74[2] = v80;
                if (v80 != 0)
                {
                    v80->field_0 = v60;
                    v72 = r12<8> + 1;
                }
                else
                {
                    v74[1] = 0;
                    v74[0] = 0;
                    if (v72 == 0)
                    {
                        break;
                    }
                    if (v72 != 0)
                    {
                        /* goto 4253144; */
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
                v8 += 1;
                v76 = v10;
                if (!(((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, r12<8>, 0x0<64>, cc_ndep<8>))))
                {
                    v21 = 0;
                    v20 = v72 + 1;
                    rsp<8> = rsp<8> - 8;
                    v6 = &g_40e0aa;
                    v21 = v63;
                    v63 = malloc((v72 + 1) * 8);
                    if (v63 != 0)
                    {
                        v7 = 0;
                        v62 = 0;
                        v17 = 0;
                        v6 = rsp<8> + 76;
                        v80 = v76;
                        v76 = &v45;
                        v22 = 0;
                        v74 = v80;
                        v23 = 0;
                        while (true)
                        {
                            v20 = 0;
                            v79 = 0;
                            if (v45 > 0)
                            {
                                while (true)
                                {
                                    if (*(v47 + (*(v46 + (v79 << 3)) << 3)) != 18446744069414584319)
                                    {
                                        rsp<8> = rsp<8> - 8;
                                        v5 = &g_40e13a;
                                        v80 = re_node_set_merge();
                                        v15 = v80;
                                    }
                                    v79 += 1;
                                }
                                if (v80 == 0 || *(v47 + (*(v46 + (v79 << 3)) << 3)) == 18446744069414584319)
                                {
                                    v79 = rsp<8> + 144;
                                    rsp<8> = rsp<8> - 8;
                                    v5 = &g_40e168;
                                    v24 = r9<8>;
                                    r9<8> = (long long)re_acquire_state_context();
                                }
                            }
                            if (v45 <= 0 || r9<8> != 0)
                            {
                                v79 = rsp<8> + 144;
                                rsp<8> = rsp<8> - 8;
                                v5 = &g_40e168;
                                v24 = r9<8>;
                                r9<8> = (long long)re_acquire_state_context();
                                if (((int)*((int *)(((char *)&v11) + 4))) == 0 || r9<8> != 0)
                                {
                                    if (((char)v69->field_68) >= 0)
                                    {
                                        v30 = v69;
                                        v35 = v69;
                                    }
                                    else
                                    {
                                        v7 = v69;
                                        rsp<8> = rsp<8> - 8;
                                        v4 = &g_40e879;
                                        v80 = re_acquire_state_context();
                                        v69 = v3;
                                        v29 = v80;
                                        if (v80 == 0 && ((int)*((int *)(((char *)&v13) + 4))) != 0)
                                        {
                                            /* goto 4253728; */
                                        }
                                        if (((int)*((int *)(((char *)&v13) + 4))) == 0 || v80 != 0)
                                        {
                                            if (v80 == 0 || v69 != v80)
                                            {
                                                v5 = ((char)(2 <= v48? 1 : ((int)*(rsp<8> + 8))));
                                            }
                                            rsp<8> = rsp<8> - 8;
                                            v3 = &g_40e8c2;
                                            v80 = re_acquire_state_context();
                                            v34 = v80;
                                            if (v80 == 0 && ((int)*((int *)(((char *)&v12) + 4))) != 0)
                                            {
                                                /* goto 4253728; */
                                            }
                                        }
                                    }
                                    if ((((int)*((int *)(((char *)&v13) + 4))) == 0 || ((char)v69->field_68) >= 0 || v80 != 0) && (((int)*((int *)(((char *)&v12) + 4))) == 0 || v80 != 0 || ((char)v69->field_68) >= 0))
                                    {
                                        v58 = rsp<8> + 12432;
                                        v57 = rsp<8> + 112;
                                        v80 = rsp<8> + 112;
                                        v64 = &v50;
                                        do
                                        {
                                            v20 |= v50;
                                            v80 = &v21;
                                            v64 = &v51;
                                        }
                                        while (v79 != v80);
                                        v62 = 1;
                                        v76 = &v47;
                                        v80 = ((char)((char)v4));
                                        v5 = v57;
                                        v76 = v74;
                                        v3 = v58;
                                        if (v80 == 0)
                                        {
                                            rsp<8> = rsp<8> - 8;
                                            v2 = &g_40e1fc;
                                            v70 = calloc(0x8, 0x100);
                                            v9->field_58 = v70;
                                            v58 = v2;
                                            v57 = v4;
                                            v61 = 0;
                                            v71 = v2;
                                            do
                                            {
                                                v80 = *(v57 + v61 * 8);
                                                v64 = 1;
                                                v68 = v61 * 0x200 + v70;
                                                if (*(v57 + (v61 << 3)) != 0)
                                                {
                                                    do
                                                    {
                                                        if (((long long)(v80 & 1)) != 0)
                                                        {
                                                            v66 = 0;
                                                            if ((v64 & v71[0]) == 0)
                                                            {
                                                                do
                                                                {
                                                                    v66 += 1;
                                                                }
                                                                while ((1 & v71[v66 * 4]) == 0);
                                                            }
                                                            if ((v64 & *(v76 + (0 << 3) + 184)) != 0)
                                                            {
                                                                v65 = *(rsp<8> + rdi<8> * 8 + 2192);
                                                                v68->field_0 = v65;
                                                            }
                                                            else
                                                            {
                                                                v65 = *(rsp<8> + rdi<8> * 8 + 144);
                                                                v68->field_0 = v65;
                                                            }
                                                        }
                                                        v64 *= 2;
                                                        v68 += 8;
                                                        v80 = v80 % 2;
                                                        v80 = v80 % 2;
                                                    }
                                                    while (!(((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, r12<8>, 0x0<64>, cc_ndep<8>))));
                                                }
                                                v61 += 1;
                                                v71 += 8;
                                            }
                                            while (v61 != 4);
                                        }
                                        else
                                        {
                                            rsp<8> = rsp<8> - 8;
                                            v2 = &g_40e9a7;
                                            v70 = calloc(0x8, 0x200);
                                            v9->field_60 = v70;
                                            v58 = v2;
                                            v57 = v4;
                                            v61 = 0;
                                            v71 = v2;
                                            do
                                            {
                                                v80 = *(v57 + v61 * 8);
                                                v64 = 1;
                                                v68 = v61 * 0x200 + v70;
                                                if (*(v57 + (v61 << 3)) != 0)
                                                {
                                                    do
                                                    {
                                                        if (((long long)(v80 & 1)) != 0)
                                                        {
                                                            v67 = 0;
                                                            if ((v64 & v71[0]) == 0)
                                                            {
                                                                do
                                                                {
                                                                    v67 += 1;
                                                                }
                                                                while ((1 & v71[v67 * 4]) == 0);
                                                            }
                                                            v69 = *(rsp<8> + rdi<8> * 8 + 144);
                                                            v65 = *(rsp<8> + rdi<8> * 8 + 2192);
                                                            v68[0] = v69;
                                                            v68[256] = v65;
                                                        }
                                                        v64 *= 2;
                                                        v68 += 8;
                                                        v80 = v80 % 2;
                                                        v80 = v80 % 2;
                                                    }
                                                    while (!(((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, r12<8>, 0x0<64>, cc_ndep<8>))));
                                                }
                                                v61 += 1;
                                                v71 += 8;
                                            }
                                            while (v61 != 4);
                                        }
                                        if (((long long)(v19 & 4)) != 0)
                                        {
                                            v80 = 0;
                                            while (true)
                                            {
                                                if ((((short)*(rdx<8>)) & 0x400) == 0)
                                                {
                                                    v80 += 1;
                                                    v58 = rdx<8> + 32;
                                                    if (v80 == v72)
                                                    {
                                                        break;
                                                    }
                                                }
                                                else
                                                {
                                                    v80 = *(rsp<8> + v80 * 8 + 4240);
                                                    v80 = ((char)((char)v3));
                                                    v70[10] = v80;
                                                    v70[266] = v80;
                                                    break;
                                                    if (v80 == 0)
                                                    {
                                                        break;
                                                    }
                                                }
                                            }
                                        }
                                        v60 = &v44;
                                        rsp<8> = rsp<8> - 8;
                                        v1 = &g_40e295;
                                        rpl_free();
                                        v63 = v60 + v72 * 24;
                                        while (true)
                                        {
                                            v60 = &v45;
                                            rsp<8> = rsp<8> - 8;
                                            v0 = &g_40e2ac;
                                            rpl_free();
                                            if (v63 == v60)
                                            {
                                                break;
                                            }
                                        }
                                        v56 = 1;
                                        if ((*(rsp<8> + 20632) ^ *(v81 + 0x28)) == 0)
                                        {
                                            v59 = *(rsp<8> + 20648);
                                            v73 = *(rsp<8> + 20648 + 8 + 8);
                                            v75 = *(rsp<8> + 20648 + 8 + 8 + 8);
                                            v77 = *(rsp<8> + 20648 + 8 + 8 + 8 + 8);
                                            v78 = *(rsp<8> + 20648 + 8 + 8 + 8 + 8 + 8);
                                            return v56;
                                        }
                                        rsp<8> = rsp<8> - 8;
                                        *(rsp<8> + None) = &g_40ea3e;
                                        __stack_chk_fail(); /* do not return */
                                    }
                                }
                            }
                            if (r9<8> == 0 && v45 <= 0 && ((int)*((int *)(((char *)&v11) + 4))) != 0)
                            {
                                /* goto 4253728; */
                            }
                        }
                    }
                    else
                    {
                        v17 = 12;
                    }
                    v60 = &v45;
                    rsp<8> = rsp<8> - 8;
                    v4 = &g_40e835;
                    rpl_free();
                    v63 = v60 + v72 * 24;
                    while (true)
                    {
                        v60 = &v47;
                        rsp<8> = rsp<8> - 8;
                        v3 = &g_40e84c;
                        rpl_free();
                        if (v63 == v60)
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
                        v56 = 0;
                        if ((*(rsp<8> + 20632) ^ *(v81 + 0x28)) == 0)
                        {
                            v59 = *(rsp<8> + 20648);
                            v73 = *(rsp<8> + 20648 + 8 + 8);
                            v75 = *(rsp<8> + 20648 + 8 + 8 + 8);
                            v77 = *(rsp<8> + 20648 + 8 + 8 + 8 + 8);
                            v78 = *(rsp<8> + 20648 + 8 + 8 + 8 + 8 + 8);
                            return v56;
                        }
                        rsp<8> = rsp<8> - 8;
                        *(rsp<8> + None) = &g_40ea3e;
                        __stack_chk_fail(); /* do not return */
                        rsp<8> = rsp<8> - 8;
                        v6 = &g_40e940;
                        v56 = calloc(0x8, 0x100);
                        v13->field_58 = v56;
                        v56 = ((char)(v56 != 0));
                        rsp<8> = rsp<8> - 8;
                        *(rsp<8> + None) = &g_40ea3e;
                        __stack_chk_fail(); /* do not return */
                        if ((*(rsp<8> + 20632) ^ *(v81 + 0x28)) == 0)
                        {
                            v59 = *(rsp<8> + 20648);
                            v73 = *(rsp<8> + 20648 + 8 + 8);
                            v75 = *(rsp<8> + 20648 + 8 + 8 + 8);
                            v77 = *(rsp<8> + 20648 + 8 + 8 + 8 + 8);
                            v78 = *(rsp<8> + 20648 + 8 + 8 + 8 + 8 + 8);
                            return v56;
                        }
                    }
                }
            }
            if (...)
            {
                v60 = 0;
                while (true)
                {
                    v60 += 1;
                    rsp<8> = rsp<8> - 8;
                    v6 = &g_40e5fa;
                    rpl_free();
                    if (v72 <= v60)
                    {
                        break;
                    }
                }
                v56 = 0;
                if ((*(rsp<8> + 20632) ^ *(v81 + 0x28)) == 0)
                {
                    v59 = *(rsp<8> + 20648);
                    v73 = *(rsp<8> + 20648 + 8 + 8);
                    v75 = *(rsp<8> + 20648 + 8 + 8 + 8);
                    v77 = *(rsp<8> + 20648 + 8 + 8 + 8 + 8);
                    v78 = *(rsp<8> + 20648 + 8 + 8 + 8 + 8 + 8);
                    return v56;
                }
                rsp<8> = rsp<8> - 8;
                *(rsp<8> + None) = &g_40ea3e;
                __stack_chk_fail(); /* do not return */
            }
        }
        v56 = 0;
        if ((*(rsp<8> + 20632) ^ *(v81 + 0x28)) == 0)
        {
            v59 = *(rsp<8> + 20648);
            v73 = *(rsp<8> + 20648 + 8 + 8);
            v75 = *(rsp<8> + 20648 + 8 + 8 + 8);
            v77 = *(rsp<8> + 20648 + 8 + 8 + 8 + 8);
            v78 = *(rsp<8> + 20648 + 8 + 8 + 8 + 8 + 8);
            return v56;
        }
        rsp<8> = rsp<8> - 8;
        *(rsp<8> + None) = &g_40ea3e;
        __stack_chk_fail(); /* do not return */
    }
    rsp<8> = rsp<8> - 8;
    v6 = &g_40e940;
    v56 = calloc(0x8, 0x100);
    v13->field_58 = v56;
    v56 = ((char)(v56 != 0));
    if ((*(rsp<8> + 20632) ^ *(v81 + 0x28)) == 0)
    {
        v59 = *(rsp<8> + 20648);
        v73 = *(rsp<8> + 20648 + 8 + 8);
        v75 = *(rsp<8> + 20648 + 8 + 8 + 8);
        v77 = *(rsp<8> + 20648 + 8 + 8 + 8 + 8);
        v78 = *(rsp<8> + 20648 + 8 + 8 + 8 + 8 + 8);
        return v56;
    }
    else
    {
        rsp<8> = rsp<8> - 8;
        *(rsp<8> + None) = &g_40ea3e;
        __stack_chk_fail(); /* do not return */
    }
}
