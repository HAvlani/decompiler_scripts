typedef struct struct_1 {
    char padding_0[8];
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned int field_18;
    char field_1c;
    char field_1d;
    char field_1e;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int g_40b0a1;
extern unsigned int g_40b0b2;
extern unsigned int g_40b0c8;
extern unsigned int g_40b0e3;
extern char g_40bca4;
extern unsigned long long patterns;

int do_wipefd()
{
    BOT tmp_20;  // tmp #20
    BOT tmp_24;  // tmp #24
    unsigned long long v0;  // [bp-0x158]
    unsigned long long v1;  // [bp-0x150]
    unsigned int|unsigned long v10;  // [bp-0x108]
    struct_1 *|unsigned long long v11;  // [bp-0x100]
    struct_1 *|unsigned long v12;  // [bp-0xf8]
    unsigned long v13;  // [bp-0xf0]
    unsigned long v14;  // [bp-0xe0]
    char v15;  // [bp-0xd8]
    unsigned int v16;  // [bp-0xc0]
    unsigned long long v17;  // [bp-0xa8]
    unsigned long v18;  // [bp-0xa0]
    unsigned long|unsigned long long v2;  // [bp-0x148]
    unsigned int|unsigned long|unsigned long long v20;  // rax
    struct_0 *|unsigned long long v21;  // rax
    unsigned int|unsigned long|unsigned long long v22;  // rax
    struct_1 *|unsigned long|unsigned long long v23;  // rcx
    unsigned long|unsigned long long v24;  // rdx
    struct_0 *|unsigned long long v25;  // rbx
    struct_1 *|unsigned long long v26;  // rbx
    unsigned long long v27;  // rbx
    unsigned long long v28;  // rbx
    struct_1 * v29;  // rbx
    unsigned long|unsigned long long v3;  // [bp-0x140]
    unsigned int|unsigned long long v30;  // rbp
    unsigned long long v31;  // rbp
    unsigned int|unsigned long v32;  // rbp
    unsigned long|struct_0 *|unsigned long long v33;  // rbp
    void *|unsigned long|unsigned long long v34;  // rsi
    unsigned int|unsigned long long v35;  // edi
    unsigned long v36;  // r8
    unsigned long long v37;  // r9
    void *|unsigned long long v38;  // r10
    unsigned long v39;  // r12
    void *v4;  // [bp-0x138]
    unsigned long long v40;  // r12
    unsigned long long v41;  // r12
    unsigned long long v42;  // r13
    unsigned long long v43;  // r13
    unsigned long v44;  // r13
    unsigned long|unsigned long long v45;  // r14
    struct_1 *|unsigned long long v46;  // r14
    unsigned long long v47;  // r15
    char|unsigned long long v48;  // cc_dep1
    char|unsigned long|unsigned long long v5;  // [bp-0x130]
    char v6;  // [bp-0x121]
    unsigned long long v7;  // [bp-0x120]
    unsigned long|unsigned long long v8;  // [bp-0x118]
    unsigned int|unsigned long long v9;  // [bp-0x110]

    v40 = v34;
    v30 = v35;
    v26 = v23;
    v2 = v24;
    v48 = ((char)v23->field_1c);
    v7 = 0;
    if (v48 != 0)
    {
        v7 = ((long long)v23->field_1e) + v23->field_8;
    }
    v22 = __fxstat(0x1, v35, ((int)&v15));
    if (v22 == 0)
    {
        v22 = ((long long)(v16 & 0xf000));
        if ((((short)v16) & 0xf000) == 0x2000)
        {
            v22 = isatty(v35);
            if (v22 != 0)
            {
                error(0x0, 0x0, dcgettext(0x0, &g_40b0b2, 0x5));
                v6 = 0;
                return ((long long)v6);
            }
            v22 = ((int)(v16 & 0xf000));
        }
        if (v22 == 0 || (((short)v16) & 0xf000) != 0x2000)
        {
            v6 = ((char)(v22 == 0x1000)) | ((char)(((int)v22) == 0xc000));
            if (((long long)(((char)(v22 == 0x1000)) | ((char)(((int)v22) == 0xc000)))) == 0)
            {
                if (!(((char)(v17 - 0 >> 63))) || v22 != 0x8000)
                {
                    v4 = (long long)xnmalloc();
                    v48 = v26->field_10;
                    v8 = v26->field_10;
                    if (v48 != 18446744069414584319)
                    {
                        if ((((short)v16) & 0xf000) == 0x8000)
                        {
                            tmp_20 = v18;
                            v34 = v17;
                            tmp_24 = v18 - 1;
                            v5 = v17;
                        }
                    }
                    else
                    {
                        if ((((short)v16) & 0xf000) == 0x8000)
                        {
                            v48 = ((char)v26->field_1d);
                            v8 = v17;
                            if (v48 == 0)
                            {
                                v23 = (!(*(&stack_base-160) - 1 <= 2305843009213693951)? 0x200 : *(&stack_base-160));
                                if (v5 != 0)
                                {
                                    v5 = v17;
                                }
                                if (v5 == 0 || v23 <= v5)
                                {
                                    v5 = 0;
                                }
                                if (((long long)((v17 >> 63 CONCAT v17) % (!(*(&stack_base-160) - 1 <= 2305843009213693951)? 0x200 : *(&stack_base-160)) >> 64)) != 0)
                                {
                                    v8 += (...? 9223372036854775807 - v8 : (!(*(&stack_base-160) - 1 <= 2305843009213693951)? 0x200 : *(&stack_base-160)) - ((long long)((v17 >> 63 CONCAT v17) % (!(*(&stack_base-160) - 1 <= 2305843009213693951)? 0x200 : *(&stack_base-160)) >> 64)));
                                    /* goto 4210839; */
                                }
                            }
                        }
                        else
                        {
                            v8 = (((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Call (target: 0x4026e0<64>, prototype: (int, int, int) -> None, args: [rdi<4>, 0x0<32>, 0x2<32>]), 0x0<64>, cc_ndep<8>))? v8 : lseek(v35, 0x0, 0x2));
                            /* goto 4210446; */
                        }
                    }
                    if ((((short)v16) & 0xf000) != 0x8000 || v48 == 18446744069414584319 && v48 != 0 || v48 != 18446744069414584319 && v34 >= (v8 < (!(tmp_24 <= 2305843009213693951)? 0x200 : tmp_20)? v8 : (!(tmp_24 <= 2305843009213693951)? 0x200 : tmp_20)))
                    {
                        if (v21 != 0)
                        {
                            v5 = 0;
                            /* goto 4210473; */
                        }
                        else
                        {
                            v5 = 1;
                            v37 = (long long)randint_get_source();
                        }
                    }
                    if ((((short)v16) & 0xf000) == 0x8000 && (v48 == 18446744069414584319 || v34 < (v8 < (!(tmp_24 <= 2305843009213693951)? 0x200 : tmp_20)? v8 : (!(tmp_24 <= 2305843009213693951)? 0x200 : tmp_20))) && (v48 == 0 || v48 != 18446744069414584319))
                    {
                        v21 = v26->field_8;
                        v3 = v26->field_8;
                    }
                }
                if (...)
                {
                    v21 = v26->field_8;
                    v3 = v26->field_8;
                }
                if (...)
                {
                    v45 = v3;
                    v10 = v35;
                    v20 = -2;
                    v12 = v26;
                    v38 = v4;
                    v42 = 0;
                    v33 = &patterns;
                    v11 = v40;
                    v28 = v45;
                    while (true)
                    {
                        if (((int)v20) == 0)
                        {
                            v20 = -2;
                            v33 = &g_40bca4;
                        }
                        else
                        {
                            v33 += 4;
                            if (((int)v20) >= 0)
                            {
                                v45 = v20;
                                if (v20 <= v28)
                                {
                                    v40 = v42 * 4;
                                    v34 = v33;
                                    v28 -= v42;
                                    v33 += v42 * 4;
                                    v38 = memcpy(v38, v34, v42 * 4) + v40;
                                    /* goto 4210559; */
                                }
                                else
                                {
                                    v9 = v42;
                                    v42 = v45;
                                    v45 = v28;
                                    v36 = v33;
                                    v41 = v11;
                                    v32 = ((long long)v10);
                                    v29 = v12;
                                    if (v11 <= v45 + (v45 << 1) && v45 > 1)
                                    {
                                        v10 = ((int)v10);
                                        v32 = v36;
                                        v11 = v41;
                                        v39 = v44;
                                        v12 = v29;
                                        v25 = v38;
                                        v13 = &v15;
                                        while (true)
                                        {
                                            v32 += 4;
                                            if (v45 != v39)
                                            {
                                                v47 = v39 - 1;
                                                v20 = randint_genmax();
                                            }
                                            if (v45 == v39 || v45 > v20)
                                            {
                                                v23 = v25 + 4;
                                                v25->field_0 = *(v32 + 4);
                                                v45 -= 1;
                                                if (v45 == 1)
                                                {
                                                    break;
                                                }
                                                v25 = v23;
                                                v47 = v39 - 1;
                                            }
                                            v39 = v47;
                                        }
                                        v32 = ((int)v10);
                                        v41 = v11;
                                        v29 = v12;
                                        break;
                                    }
                                    if (v45 <= 1 || v11 > v45 + (v45 << 1))
                                    {
                                        v9 += v45;
                                        break;
                                    }
                                }
                            }
                        }
                        if (((int)v20) == 0 || ((int)v20) < 0)
                        {
                            v20 = ((long long)(0 - reg_16<4>));
                            if (v20 < v28)
                            {
                                v42 += v20;
                                v28 -= v20;
                            }
                            else
                            {
                                v32 = ((long long)v10);
                                v41 = v11;
                                v44 = v42 + v28;
                                v29 = v12;
                                v9 = v44;
                                break;
                            }
                        }
                        if (v20 <= v28 || v20 < v28)
                        {
                            v20 = ((long long)*(rbp<8>));
                        }
                    }
                    v21 = v3;
                    v35 = v9;
                    v10 = v41;
                    v43 = 0;
                    v9 = v32;
                    v11 = v29;
                    v12 = &v15;
                    v27 = v4;
                    v46 = v35 - 1;
                    v31 = v35 - 1;
                    v40 = v21 - v35;
                    while (true)
                    {
                        if (v31 <= v9 - 1)
                        {
                            v31 = v31 + v3 - (v9 - 1);
                            *(v27 + v40 * 4) = *(v27 + v43 * 4);
                            v40 += 1;
                            *(v27 + v43 * 4) = -1;
                            v43 += 1;
                            if (v43 == v3)
                            {
                                break;
                            }
                        }
                        else
                        {
                            v3 -= 1;
                            v31 -= v46;
                            v21 = v27 + ((long long)randint_genmax() + v43) * 4;
                            *(v27 + v43 * 4) = v21->field_0;
                            v43 += 1;
                            v21->field_0 = v34;
                            if (v43 == v3)
                            {
                                break;
                            }
                        }
                    }
                    v30 = ((long long)v9);
                    v26 = v11;
                }
                if (...)
                {
                    v37 = (long long)randint_get_source();
                    if (v5 != 0)
                    {
                        v14 = v5;
                        v5 = 1;
                        v2 = 0;
                        /* goto 4210908; */
                    }
                    else
                    {
                        v5 = 1;
                    }
                }
                while (true)
                {
                    if (v8 != 0)
                    {
                        v14 = v8;
                        v21 = v7;
                        v8 = 0;
                        v2 = v21;
                        v24 = *(rbx<8> + 8);
                    }
                    else
                    {
                        if (*(rbx<8> + 24) != 0)
                        {
                            v21 = ftruncate(((unsigned int)v30), 0x0);
                            if ((((short)v16) & 0xf000) == 0x8000 && v21 != 0)
                            {
                                error(0x0, *(__errno_location()), dcgettext(0x0, &g_40b0e3, 0x5));
                                rpl_free();
                                return ((long long)v6);
                            }
                        }
                        if (*(rbx<8> + 24) == 0 || v21 == 0 || (((short)v16) & 0xf000) != 0x8000)
                        {
                            v6 = v5;
                            rpl_free();
                            return ((long long)v6);
                        }
                    }
                }
                v3 = &stack_base-224;
                v46 = rbx<8>;
                v26 = 0;
                v43 = v37;
                while (true)
                {
                    v26 += 1;
                    v1 = v2;
                    v0 = v26;
                    v21 = dopass();
                    if (((int)v21) != 0 && !(((char)[D] amd64g_calculate_condition(0x8<64>, 0x13<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
                    {
                        v5 = 0;
                        /* goto 4211007; */
                        rpl_free();
                        return ((long long)v6);
                    }
                    if (((int)v21) == 0 || !(((char)[D] amd64g_calculate_condition(0x8<64>, 0x13<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
                    {
                        v24 = *(v26 + 8);
                        v37 = v43;
                        v26 = v46;
                    }
                }
                error(0x0, 0x0, dcgettext(0x0, &g_40b0c8, 0x5));
                return ((long long)v6);
            }
            error(0x0, 0x0, dcgettext(0x0, &g_40b0b2, 0x5));
            v6 = 0;
            return ((long long)v6);
        }
    }
    error(0x0, *(__errno_location()), dcgettext(0x0, &g_40b0a1, 0x5));
    v6 = 0;
    return ((long long)v6);
}
