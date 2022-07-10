typedef struct struct_4 {
    unsigned int field_0;
} struct_4;

typedef struct struct_3 {
    char padding_0[72];
    unsigned long long field_48;
} struct_3;

typedef struct struct_1 {
    char padding_0[120];
    struct struct_2 *field_78;
    char padding_80[48];
    char field_b0;
    char padding_b1[3];
    unsigned int field_b4;
} struct_1;

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
    unsigned long long field_10;
    char padding_18[8];
    char field_20;
    char padding_21[7];
    unsigned long long field_28;
    unsigned long long field_30;
    unsigned long long field_38;
    unsigned long long field_40;
    unsigned long long field_48;
} struct_0;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_5 {
    char field_0;
    char padding_1[7];
    char field_8;
} struct_5;

int sub_416098()
{
    BOT tmp_10;  // tmp #10
    BOT tmp_17;  // tmp #17
    BOT tmp_13;  // tmp #13
    BOT tmp_9;  // tmp #9
    BOT tmp_6;  // tmp #6
    BOT tmp_51;  // tmp #51
    unsigned long long v0;  // [bp-0x120]
    unsigned long v1;  // [bp-0x10]
    unsigned long long|char v10;  // [bp+0x50]
    unsigned long long|unsigned int|char|unsigned long v11;  // [bp+0x60]
    unsigned int v12;  // [bp+0x68]
    char v13;  // [bp+0x73]
    unsigned int v14;  // [bp+0x74]
    unsigned long long v15;  // [bp+0x78]
    unsigned int v16;  // [bp+0x7c]
    unsigned int v17;  // [bp+0x90]
    char *v18;  // [bp+0x98]
    unsigned int|unsigned long|struct_0 * v19;  // [bp+0xa0]
    char|struct_5 * v2;  // [bp+0x8]
    unsigned long long|char v20;  // [bp+0xa8]
    uint128_t v21;  // [bp+0xb0]
    char v22;  // [bp+0xb8]
    char v23;  // [bp+0xe0]
    unsigned long v24;  // [bp+0x108]
    unsigned long v25;  // [bp+0x118]
    unsigned long long v26;  // [bp+0x128]
    unsigned long long v27;  // [bp+0x130]
    unsigned long v28;  // [bp+0x138]
    unsigned long v29;  // [bp+0x140]
    unsigned long v3;  // [bp+0x10]
    unsigned long long|struct_4 *|struct_2 * v30;  // rax
    unsigned long long v31;  // rax
    unsigned long long v33;  // rax
    unsigned long long v35;  // rax
    unsigned long long|struct_4 *|struct_5 * v36;  // rcx
    unsigned long long v37;  // rcx
    unsigned long long v38;  // rdx
    unsigned long long|char|unsigned long v39;  // bl
    struct_1 *v4;  // [bp+0x18]
    unsigned long long v40;  // rbx
    unsigned long long v41;  // rbp
    unsigned long long v42;  // rsi
    unsigned long long|char *|void * v43;  // rdi
    unsigned long long v44;  // r9
    unsigned long long|unsigned int v45;  // r10
    unsigned int v46;  // r10d
    unsigned long long|unsigned int v47;  // r11
    unsigned long long|struct_0 * v48;  // r12
    unsigned long long v49;  // r12
    unsigned long long|struct_3 * v5;  // [bp+0x20]
    struct_2 *v50;  // r13
    unsigned long long v51;  // r13
    unsigned long long v52;  // r14
    struct_3 *v53;  // r14
    unsigned long long|struct_3 * v54;  // r15
    unsigned long long v55;  // r15
    char v56;  // cc_dep2
    unsigned long v57;  // d
    struct_2 *v58;  // fs
    uint128_t v59;  // xmm0
    unsigned long long|unsigned long v6;  // [bp+0x28]
    unsigned long long|unsigned long|uint128_t v7;  // [bp+0x30]
    struct_4 *v8;  // [bp+0x40]
    unsigned long long|unsigned long v9;  // [bp+0x48]

    v11 = v46;
    v1 = v39;
    v30 = build_charclass.isra.0();
    v8->field_0 = v30;
    v45 = ((long long)v11);
    if (v30 == 0)
    {
        while (true)
        {
            if (((char)v2) != 21 && ((char)v2) != 2)
            {
                tmp_10 = v6;
                v17 = 3;
                v18 = tmp_10;
                v30 = parse_bracket_element.constprop.0();
                if (((int)v30) == 0)
                {
                    v45 = (int)peek_token_bracket();
                    if ((((int)1) & -3) == 0)
                    {
                        /* goto ((long long)*(4319572 + 3 * 4)) + 4319572; */
                    }
                    else if (((char)v2) != 22)
                    {
                        /* goto ((long long)*(4319572 + 3 * 4)) + 4319572; */
                    }
                    else
                    {
                        v54->field_48 = v54->field_48 + ((long long)v11);
                        v11 = v45;
                        v36 = (long long)peek_token_bracket();
                        if (v22 != 2 && v22 != 21)
                        {
                            v20 = &stack_base+224;
                            v19 = 3;
                            v30 = parse_bracket_element.constprop.0();
                            if (v30 == 0)
                            {
                                v45 = (long long)peek_token_bracket();
                                if ((((int)1) & -3) != 0)
                                {
                                    v11 = ((char)(((int)3) == 3));
                                    if (((int)3) != 3)
                                    {
                                        if (((int)3) != 0)
                                        {
                                            v47 = 0;
                                            v38 = 0;
                                            v38 = ((long long)((int)v20));
                                        }
                                    }
                                    v37 = 18446744069414584319;
                                    v43 = v18;
                                    while (v37 != 0)
                                    {
                                        v37 -= 1;
                                        v56 = ((char)*(v43));
                                        v43 += v57;
                                        break;
                                    }
                                    v36 = !(rcx<8>);
                                    if (v36 - 1 <= 1)
                                    {
                                        v36 = 18446744069414584319;
                                        v43 = v20;
                                        while (v36 != 0)
                                        {
                                            v36 -= 1;
                                            v56 = ((char)*(v43));
                                            v43 += v57;
                                            break;
                                        }
                                        if (!(rcx<8>) - 1 <= 1)
                                        {
                                            v47 = ((long long)*(v18));
                                            if (((int)3) != 0)
                                            {
                                                v38 = ((int)v23);
                                            }
                                        }
                                    }
                                    if (((int)3) == 0)
                                    {
                                        v47 = ((long long)((char)v18));
                                        if ((v36 - 1 <= 1 || ((int)3) != 3) && (!(rcx<8>) - 1 <= 1 || ((int)3) != 3))
                                        {
                                            v38 = ((long long)((char)v20));
                                        }
                                    }
                                    if (v4->field_b4 > 1 && (v36 - 1 <= 1 || ((int)3) == 0) && (((int)3) == 3 || ((int)3) == 0) && (v11 == 0 || v4->field_b4 > 1) && (!(rcx<8>) - 1 <= 1 || ((int)3) != 3) && (((int)3) != 0 || v4->field_b4 > 1))
                                    {
                                        v12 = ((int)v45);
                                        v11 = ((int)r11<8>);
                                        v38 = btowc(reg_32<4>);
                                    }
                                    if (((int)3) != 3 || v36 - 1 <= 1 && !(rcx<8>) - 1 <= 1)
                                    {
                                        if (v11 == 0 && ((int)3) != 0)
                                        {
                                            v47 = ((long long)((int)v18));
                                        }
                                        if (v4->field_b4 > 1 && (((int)3) == 0 || v11 != 0))
                                        {
                                            v12 = ((int)v45);
                                            v11 = reg_32<4>;
                                            v47 = btowc(reg_104<4>);
                                        }
                                    }
                                }
                                if (False)
                                {
                                    v36 = 18446744069414584319;
                                    v43 = v20;
                                    while (v36 != 0)
                                    {
                                        v36 -= 1;
                                        v56 = ((char)*(v43));
                                        v43 += v57;
                                        break;
                                    }
                                    v47 = 0;
                                    /* goto 4285204; */
                                }
                                if (((int)3) == 3 && (((int)1) & -3) != 0 && v36 - 1 > 1 || v36 - 1 <= 1 && ((int)3) == 3 && (((int)1) & -3) != 0 && !(rcx<8>) - 1 > 1 || reg_104<4> == -1 && (((int)1) & -3) != 0 && (v36 - 1 <= 1 || ((int)3) != 3) && (!(rcx<8>) - 1 <= 1 || ((int)3) != 3) && (((int)3) != 0 || v4->field_b4 > 1) && (v11 == 0 || ((int)3) != 3 || v4->field_b4 > 1) || reg_32<4> == -1 && (((int)1) & -3) != 0 && reg_104<4> != -1 && (v36 - 1 <= 1 || ((int)3) != 3) && (!(rcx<8>) - 1 <= 1 || ((int)3) != 3) && (((int)3) != 0 || v4->field_b4 > 1) && (v11 == 0 || ((int)3) != 3 || v4->field_b4 > 1))
                                {
                                    v8->field_0 = 3;
                                    break;
                                }
                                if (...)
                                {
                                    v8->field_0 = 11;
                                    break;
                                }
                                if (...)
                                {
                                    if (v4->field_b4 > 1)
                                    {
                                        v30 = v48->field_40;
                                        if (v48->field_40 == v9)
                                        {
                                            tmp_17 = v9;
                                            v43 = v48->field_8;
                                            v16 = ((int)v45);
                                            v15 = reg_32<4>;
                                            v14 = ((int)r11<8>);
                                            v9 = tmp_17 * 2 + 1;
                                            ((unsigned int)v12) = (tmp_17 * 2 + 1) * 4;
                                            v31 = realloc(v43, (tmp_17 * 2 + 1) * 4);
                                            v11 = v31;
                                            v44 = realloc(v48->field_10, ((unsigned int)v12));
                                            if (v11 != 0)
                                            {
                                                v47 = ((int)v14);
                                                v45 = ((long long)v16);
                                                if (v6 != 0)
                                                {
                                                    v48->field_10 = v6;
                                                    v30 = v48->field_40;
                                                    v48->field_8 = v11;
                                                    /* goto 4285363; */
                                                }
                                            }
                                            if (v11 == 0 || v6 == 0)
                                            {
                                                v6 = v44;
                                                rpl_free();
                                                rpl_free();
                                                v8->field_0 = 12;
                                                break;
                                            }
                                        }
                                        if ((v48->field_40 != v9 || v11 != 0) && (v48->field_40 != v9 || v6 != 0))
                                        {
                                            v36 = v48->field_10;
                                            *(v48->field_8 + rax<8> * 4) = reg_104<4>;
                                            v48->field_40 = rax<8> + 1;
                                            *(v36 + rax<8> * 4) = ((int)rdx<8>);
                                        }
                                    }
                                    if (v4->field_b4 <= 1 || v48->field_40 != v9 || v11 != 0 && v6 != 0)
                                    {
                                        v30 = 0;
                                        do
                                        {
                                            v36 = v30;
                                            if (((unsigned int)v47) <= ((int)v30) && ((int)v38) >= ((int)v30))
                                            {
                                                *(v50 + (v30 >> 6) * 8) = *(v50 + (v30 >> 6) * 8) | 1 << (v36 & 63);
                                            }
                                            v30 += 1;
                                        }
                                        while (v30 != 0x100);
                                        v8->field_0 = 0;
                                    }
                                }
                            }
                        }
                        if (v22 == 21)
                        {
                            v54->field_48 = v54->field_48 + ((long long)(0 - v11));
                            v2 = 1;
                            /* goto ((long long)*(4319572 + 3 * 4)) + 4319572; */
                        }
                    }
                }
                if ((((char)v2) == 22 || ((int)v30) != 0) && (v22 != 2 || ((int)v30) != 0) && ((((int)1) & -3) != 0 || ((int)v30) != 0) && (v30 != 0 || ((int)v30) != 0) && (v22 != 21 || ((int)v30) != 0))
                {
                    v8->field_0 = v30;
                    break;
                }
            }
            if (((char)v2) == 21)
            {
                v54->field_48 = v54->field_48 + v45;
                if (v10 != 0)
                {
                    v30 = v5;
                    do
                    {
                        v30->field_0 = !(v30->field_0);
                        v30 += 8;
                    }
                    while (v5 + 32 != v30);
                }
                if (v4->field_b4 > 1)
                {
                    v42 = v5;
                    v30 = 0;
                    do
                    {
                        *(v42 + v30) = *(v42 + v30) & *(v4->field_78 + v30);
                        v30 += 8;
                    }
                    while (v30 != 32);
                }
                if (v48->field_30 == 0 && v48->field_38 == 0 && v48->field_28 == 0 && v48->field_40 == 0 && (((long long)(v48->field_20 & 1)) == 0 || v4->field_b4 <= 1) && (v48->field_48 == 0 || v4->field_b4 <= 1))
                {
                    free_charset();
                    tmp_17 = v5;
                    v20 = 3;
                    v19 = tmp_17;
                    v6 = (long long)create_token_tree.isra.0();
                }
                if (v48->field_30 != 0 || v48->field_38 != 0 || v48->field_28 != 0 || v48->field_40 != 0 || ((long long)(v48->field_20 & 1)) != 0 && v4->field_b4 > 1 || v48->field_48 != 0 && v4->field_b4 > 1)
                {
                    v4->field_b0 = v4->field_b0 | 2;
                    v20 = 6;
                    v19 = v48;
                    v33 = create_token_tree.isra.0();
                    v43 = v5;
                    v36 = v33;
                    v6 = v33;
                    v30 = v43;
                    if (v36 != 0)
                    {
                        while (true)
                        {
                            if (v30->field_0 == 0)
                            {
                                v30 += 8;
                                rpl_free();
                                break;
                            }
                            else
                            {
                                tmp_13 = v5;
                                v20 = 3;
                                v19 = tmp_13;
                                v38 = (long long)create_token_tree.isra.0();
                                v21 = 0;
                                v22 = 10;
                                v6 = (long long)create_token_tree.isra.0();
                                break;
                            }
                        }
                        if (v30->field_0 != 0)
                        {
                            v8->field_0 = 12;
                            break;
                        }
                        else if (v5 + 32 == v30 && v30->field_0 == 0 || v38 != 0 && v30->field_0 != 0)
                        {
                            v35 = peek_token();
                            tmp_9 = v35;
                            v30 = ((long long)v2->field_8);
                            v48 = tmp_9 + v54->field_48;
                            v54->field_48 = tmp_9 + v54->field_48;
                            tmp_6 = v30;
                        }
                    }
                }
            }
            if (((char)v2) == 2 || v22 == 2 && ((int)v30) == 0 && ((char)v2) == 22 && (((int)1) & -3) != 0 && ((char)v2) != 21)
            {
                v8->field_0 = 7;
                break;
            }
        }
        if (...)
        {
            rpl_free();
            free_charset();
        }
        else if (...)
        {
            v35 = peek_token();
            tmp_9 = v35;
            v30 = ((long long)v2->field_8);
            v48 = tmp_9 + v54->field_48;
            v54->field_48 = tmp_9 + v54->field_48;
            tmp_6 = v30;
        }
    }
    if (v8->field_0 != 0 || v30 != 0)
    {
        rpl_free();
        free_charset();
    }
    if (v8->field_0 == 0 && v30 != 0)
    {
        v6 = 0;
        /* goto 4281532; */
    }
    if (v8->field_0 != 0)
    {
        v6 = 0;
        if ((v24 ^ *(v58 + 0x28)) == 0)
        {
            v40 = v25;
            v49 = v26;
            v51 = v27;
            v52 = v28;
            v55 = v29;
            return v6;
        }
        __stack_chk_fail(); /* do not return */
    }
    if (v8->field_0 == 0 && v30 != 0 || v30 == 0 && v8->field_0 != 0)
    {
        v35 = peek_token();
        tmp_9 = v35;
        v30 = ((long long)v2->field_8);
        v48 = tmp_9 + v54->field_48;
        v54->field_48 = tmp_9 + v54->field_48;
        tmp_6 = v30;
        if ((v24 ^ *(v58 + 0x28)) == 0)
        {
            v40 = v25;
            v49 = v26;
            v51 = v27;
            v52 = v28;
            v55 = v29;
            return v6;
        }
        __stack_chk_fail(); /* do not return */
        v39 = ((char)(v2->field_8 == 18));
        v0 = 0x8c0800;
        if (!((((char)(((long long)*(&stack_base-288 + ((v30 & 63) >> 3))) >> ((long long)((char)(v30 & 63 & 7))))) & 1) == 0))
        {
            v36 = v2;
            v5 = v54;
            v59 = v36->field_0;
            while (true)
            {
                v53 = v5;
                v41 = ((long long)(v30 == 19)) * 2 - 1;
                v30 = peek_token();
                v53->field_48 = v53->field_48 + v30;
                if (v6 != 0)
                {
                    v54 = v6;
                    if (((long long)v39) == 0)
                    {
                        v9 = 0;
                    }
                    else
                    {
                        v9 = v6;
                        if (v41 != 1)
                        {
                            v30 = duplicate_tree();
                            v54 = v30;
                        }
                        else
                        {
                            v38 = v9;
                            v6 = rdx<8>;
                            /* goto 4282038; */
                        }
                    }
                    if (((long long)v39) == 0 || v41 != 1 && v30 != 0)
                    {
                        if (*(r15<8> + 48) == 17)
                        {
                            v30 = postorder();
                        }
                        v21 = 0;
                        v30 = ((long long)reg_16<4>) + 10;
                        tmp_51 = v30;
                        v22 = tmp_51;
                        v38 = (long long)create_token_tree.isra.0();
                        v39 = 2;
                        if (2 <= v41)
                        {
                            v7 = v41;
                            while (true)
                            {
                                v41 = (long long)duplicate_tree();
                                v21 = 0;
                                v22 = 16;
                                v38 = (long long)create_token_tree.isra.0();
                                v21 = 0;
                                v22 = 10;
                                v54 = (long long)create_token_tree.isra.0();
                                v39 += 1;
                                v38 = v54;
                                break;
                            }
                            if (v38 == 0 || v41 == 0 || v39 <= v7)
                            {
                                v8->field_0 = 12;
                                break;
                            }
                        }
                    }
                    if (v9 != 0 && (((long long)v39) == 0 || v41 != 1) && (((long long)v39) == 0 || v30 != 0))
                    {
                        v21 = 0;
                        v22 = 16;
                        v30 = create_token_tree.isra.0();
                        v6 = v30;
                    }
                }
                else
                {
                    v6 = 0;
                }
                v30 = ((long long)v2->field_8);
                v39 = ((char)(v2->field_8 == 18));
                v0 = 0x8c0800;
                v48 = v5->field_48;
                v59 = v2->field_0;
            }
            if (...)
            {
                v7 = xmm0<16>;
                v59 = v7;
                v39 = (long long)fetch_number();
            }
            else if (v6 == 0)
            {
                v6 = 0;
            }
            if (v30 == 23 || (v24 ^ *(v58 + 0x28)) != 0)
            {
                v7 = xmm0<16>;
                v59 = v7;
                v39 = (long long)fetch_number();
                if (v39 != 18446744069414584319)
                {
                    if (v39 != 18446744069414584318)
                    {
                        if (v2->field_8 != 24)
                        {
                            if (v2->field_8 == 1 && v2->field_0 != 44)
                            {
                                if ((((int)v3) & 0x200000) == 0)
                                {
                                    /* goto 4282720; */
                                }
                            }
                        }
                        else
                        {
                            v41 = v39;
                        }
                    }
                }
                else
                {
                    if (v2->field_8 == 1)
                    {
                        if (v2->field_0 == 44)
                        {
                            v39 = 0;
                        }
                    }
                }
            }
            if (...)
            {
                v7 = v7;
                v59 = v7;
                v41 = (long long)fetch_number();
            }
            if (...)
            {
                if ((((int)v3) & 0x200000) == 0)
                {
                    if (v2->field_8 == 2)
                    {
                        v8->field_0 = 9;
                    }
                }
            }
            if (...)
            {
                v5->field_48 = v48;
                v2->field_0 = xmm0<16>;
                v2->field_8 = 1;
                v30 = v6;
            }
            if (...)
            {
                v54 = v5;
                v54->field_48 = v54->field_48 + (long long)peek_token();
                if (v6 != 0)
                {
                    if ((rbx<8> | rbp<8>) == 0)
                    {
                        postorder();
                        if (v8->field_0 != 0)
                        {
                            postorder();
                            v6 = 0;
                            if ((v24 ^ *(v58 + 0x28)) == 0)
                            {
                                v40 = v25;
                                v49 = v26;
                                v51 = v27;
                                v52 = v28;
                                v55 = v29;
                                return v6;
                            }
                            __stack_chk_fail(); /* do not return */
                        }
                    }
                    if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rbx<8>, 0x0<64>, 0x0<64>))))
                    {
                        if (v39 != 1)
                        {
                            v7 = v39;
                            v48 = 2;
                            v10 = v41;
                            while (true)
                            {
                                v54 = (long long)duplicate_tree();
                                v21 = 0;
                                v22 = 16;
                                v30 = create_token_tree.isra.0();
                                if (v54 != 0)
                                {
                                    v48 += 1;
                                    v41 = v10;
                                    v9 = v30;
                                    break;
                                }
                                else
                                {
                                    break;
                                }
                            }
                        }
                        else
                        {
                            v9 = v6;
                        }
                    }
                    else
                    {
                        v9 = 0;
                        v54 = v6;
                    }
                }
            }
            if (...)
            {
                v8->field_0 = 15;
            }
            if ((v24 ^ *(v58 + 0x28)) != 0)
            {
                if ((v24 ^ *(v58 + 0x28)) == 0)
                {
                    v40 = v25;
                    v49 = v26;
                    v51 = v27;
                    v52 = v28;
                    v55 = v29;
                    return v6;
                }
                __stack_chk_fail(); /* do not return */
                v6 = 0;
                v8->field_0 = 13;
                if ((v24 ^ *(v58 + 0x28)) == 0)
                {
                    v40 = v25;
                    v49 = v26;
                    v51 = v27;
                    v52 = v28;
                    v55 = v29;
                    return v6;
                }
                else
                {
                    __stack_chk_fail(); /* do not return */
                }
                __stack_chk_fail(); /* do not return */
                if (v6 != 0)
                {
                    postorder();
                    v6 = 0;
                    v8->field_0 = 13;
                    if ((v24 ^ *(v58 + 0x28)) == 0)
                    {
                        v40 = v25;
                        v49 = v26;
                        v51 = v27;
                        v52 = v28;
                        v55 = v29;
                        return v6;
                    }
                    __stack_chk_fail(); /* do not return */
                }
                __stack_chk_fail(); /* do not return */
                if ((v24 ^ *(v58 + 0x28)) == 0)
                {
                    v40 = v25;
                    v49 = v26;
                    v51 = v27;
                    v52 = v28;
                    v55 = v29;
                    return v6;
                }
                v6 = 0;
                if ((v24 ^ *(v58 + 0x28)) == 0)
                {
                    v40 = v25;
                    v49 = v26;
                    v51 = v27;
                    v52 = v28;
                    v55 = v29;
                    return v6;
                }
            }
            if (...)
            {
                v8->field_0 = 10;
            }
            if (...)
            {
                postorder();
                v6 = 0;
                if ((v24 ^ *(v58 + 0x28)) == 0)
                {
                    v40 = v25;
                    v49 = v26;
                    v51 = v27;
                    v52 = v28;
                    v55 = v29;
                    return v6;
                }
                __stack_chk_fail(); /* do not return */
            }
            if (...)
            {
                if (v6 == 0)
                {
                    v6 = 0;
                    if ((v24 ^ *(v58 + 0x28)) == 0)
                    {
                        v40 = v25;
                        v49 = v26;
                        v51 = v27;
                        v52 = v28;
                        v55 = v29;
                        return v6;
                    }
                    __stack_chk_fail(); /* do not return */
                }
                postorder();
                v6 = 0;
                if ((v24 ^ *(v58 + 0x28)) == 0)
                {
                    v40 = v25;
                    v49 = v26;
                    v51 = v27;
                    v52 = v28;
                    v55 = v29;
                    return v6;
                }
                else
                {
                    __stack_chk_fail(); /* do not return */
                }
            }
        }
        else if ((v24 ^ *(v58 + 0x28)) == 0)
        {
            v40 = v25;
            v49 = v26;
            v51 = v27;
            v52 = v28;
            v55 = v29;
            return v6;
        }
        else
        {
            __stack_chk_fail(); /* do not return */
        }
    }
}
