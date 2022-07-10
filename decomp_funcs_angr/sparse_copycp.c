typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int g_4151a5;
extern unsigned int g_4151bc;
extern unsigned int g_4151cd;
extern unsigned int g_4151de;

int sparse_copy()
{
    BOT tmp_53;  // tmp #53
    BOT tmp_21;  // tmp #21
    BOT tmp_13;  // tmp #13
    BOT tmp_16;  // tmp #16
    BOT tmp_2;  // tmp #2
    BOT tmp_15;  // tmp #15
    BOT tmp_3;  // tmp #3
    char|unsigned long long v0;  // [bp-0xb0]
    unsigned int|char v1;  // [bp-0xa4]
    unsigned long v10;  // [bp-0x70]
    unsigned long long v11;  // [bp-0x68]
    unsigned long long v12;  // [bp-0x60]
    unsigned long v13;  // [bp-0x58]
    unsigned long long v14;  // [bp-0x50]
    char * v15;  // [bp-0x48]
    unsigned int v16;  // [bp-0x3c]
    unsigned long v17;  // [bp+0x8]
    unsigned long v18;  // [bp+0x10]
    unsigned long v19;  // [bp+0x18]
    char|unsigned long long v2;  // [bp-0xa0]
    unsigned long long v20;  // [bp+0x20]
    unsigned long long v21;  // [bp+0x28]
    unsigned long long v22;  // [bp+0x30]
    unsigned long|struct_0 *|unsigned long long v23;  // rax
    unsigned long long v24;  // rax
    unsigned long long v25;  // rcx
    unsigned long v26;  // rcx
    unsigned int|unsigned long|unsigned long long v27;  // rdx
    struct_0 *|unsigned long long v28;  // rbx
    unsigned long long v29;  // rbp
    struct_1 *v3;  // [bp-0x98]
    unsigned long long v30;  // rsi
    unsigned int v31;  // esi
    unsigned int|unsigned long long v32;  // rdi
    unsigned long long v33;  // r8
    unsigned long|unsigned long long v34;  // r9
    unsigned long long v35;  // r11
    unsigned long long v36;  // r11
    struct_0 *|unsigned long long v37;  // r12
    unsigned int|unsigned long long v38;  // r14
    unsigned long long v39;  // r15
    unsigned long v4;  // [bp-0x90]
    unsigned long|unsigned long long v40;  // cc_dep1
    unsigned long v5;  // [bp-0x88]
    unsigned int|char v6;  // [bp-0x80]
    unsigned long long v7;  // [bp-0x7a]
    char v8;  // [bp-0x79]
    struct_1 *v9;  // [bp-0x78]

    v38 = v31;
    tmp_53 = v18;
    v4 = v26;
    v25 = v22;
    v13 = tmp_53;
    *(v15) = 0;
    v23 = v20;
    v5 = v19;
    v30 = v21;
    v9 = v27;
    v12 = v33;
    v16 = ((int)v34);
    v3 = v30;
    v15 = v25;
    v8 = v34;
    v3->field_0 = 0;
    if (v33 == 0)
    {
        if (((long long)((int)v17)) != 0)
        {
            if (v20 != 0)
            {
                while (true)
                {
                    v23 = copy_file_range(v32, 0x0, v6, 0x0, ((int)(v23 <= 0x7fffffffc0000000? v23 : 0x7fffffffc0000000)), 0x0);
                    if (v23 == 0)
                    {
                        v24 = v39;
                        return v24;
                    }
                    else if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
                    {
                        v3->field_0 = v3->field_0 + v23;
                        v23 -= v23;
                        v24 = v39;
                        return v24;
                    }
                    else
                    {
                        v23 = __errno_location();
                        v25 = ((long long)v23->field_0);
                        v37 = v23;
                        v23 = ((char)(v23->field_0 == 95));
                        if (v23->field_0 <= 38)
                        {
                            v23 = ((long long)(((int)rax<8>) | ((int)(0x4004440200 >> (v25 & 63))) & 1));
                        }
                        if (((int)v25) != 1)
                        {
                            v28 = (long long)quotearg_n_style();
                            v23 = (long long)quotearg_n_style();
                            error(0x0, v37->field_0, dcgettext(0x0, &g_4151a5, 0x5));
                            v24 = v39;
                            return v24;
                        }
                        v28 = (long long)quotearg_n_style();
                        v23 = (long long)quotearg_n_style();
                        error(0x0, v37->field_0, dcgettext(0x0, &g_4151a5, 0x5));
                        v24 = v39;
                        return v24;
                    }
                }
            }
            v24 = v39;
            return v24;
        }
    }
    if (((long long)((int)v17)) == 0 || v33 != 0)
    {
        if (v20 == 0)
        {
            v24 = v39;
            return v24;
        }
    }
    if (v20 != 0)
    {
        v23 = v12;
        tmp_21 = v4;
        v10 = v23;
        v6 = v38;
        ((unsigned int)v32) = (v23 != 0? v23 : tmp_21);
        v39 = 0;
        v38 = 0;
        v14 = (v23 != 0? v23 : tmp_21);
        while (true)
        {
            v36 = v9->field_0;
            if (v9->field_0 == 0)
            {
                getpagesize();
                v36 = (long long)xalignalloc();
                v9->field_0 = v36;
            }
            tmp_13 = v10;
            tmp_16 = v4;
            v0 = v36;
            v23 = read(((unsigned int)v32), v36, (tmp_13 <= tmp_16? tmp_13 : tmp_16));
            v35 = v0;
            v40 = v23;
            v11 = v23;
            if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
            {
                v28 = __errno_location();
                v37 = (long long)quotearg_style();
                error(0x0, v28->field_0, dcgettext(0x0, &g_4151bc, 0x5));
                v24 = v39;
                return v24;
            }
            if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
            {
                v29 = v11;
                v25 = v39;
                v39 = v0;
                v28 = v14;
                v3->field_0 = v3->field_0 + v11;
                v0 = ((char)(v12 != 0));
                while (true)
                {
                    tmp_2 = v28;
                    v37 = v29;
                    tmp_15 = !(v28 <= v29);
                    v28 = (!(v28 <= v29)? v37 : v28);
                    v40 = ((long long)(((char)((tmp_15? v37 : tmp_2) != 0)) & v0));
                    v23 = ((char)((tmp_15? v37 : tmp_2) != 0)) & v0;
                    if (((char)v40) != 0)
                    {
                        v30 = v39;
                        v27 = v28;
                        while (true)
                        {
                            if (*(v30) == 0)
                            {
                                v30 += 1;
                                v27 -= 1;
                                if (v27 != 1)
                                {
                                    v2 = v35;
                                    v1 = 0;
                                    v23 = ((char)(memcmp(v39, v30, ((long long)(((int)v23) ^ ((int)v1)))) != 0));
                                }
                                else
                                {
                                    v34 = ((long long)((0 ^ 1) & ((int)v3)));
                                }
                            }
                            else
                            {
                                v23 = v23;
                                v27 = 0;
                                v23 = 0;
                            }
                            if (*(v30) != 0 || v27 != 1)
                            {
                                v34 = ((long long)(0 & v27));
                                if (v28 == v29 && ((long long)v23) != 0)
                                {
                                    if (((long long)v34) != 0)
                                    {
                                        v1 = 1;
                                        v23 = 0;
                                        /* goto 4220520; */
                                    }
                                    else
                                    {
                                        v23 = 0;
                                        break;
                                    }
                                }
                            }
                            if (((long long)v23) == 0 || v28 != v29 || *(v30) == 0 && v27 == 1)
                            {
                                v1 = 0;
                            }
                            if (((long long)v34) != 0)
                            {
                                v2 = 0;
                            }
                        }
                        if (((long long)v34) == 0 && v28 == v29 && ((long long)v23) != 0 && (((long long)(v27 & 15)) == 0 || *(v30) != 0) && (*(v30) != 0 || v27 != 1))
                        {
                            v38 += v28;
                            v34 = 0;
                            v2 = v25;
                            v1 = 1;
                        }
                        else if ((v28 == v29 || ((long long)v34) != 0) && (((long long)v34) != 0 || ((long long)v23) != 0) && (((long long)(v27 & 15)) == 0 || v27 == 1 || *(v30) != 0) && (*(v30) != 0 || v27 != 1 || ((long long)v34) != 0) && (*(v30) == 0 || ((long long)v23) == 0 || ((long long)v34) != 0 || v28 != v29) && (v27 == 1 || ((long long)v23) == 0 || ((long long)v34) != 0 || v28 != v29))
                        {
                            v7 = v34;
                            v23 = full_write();
                            v34 = ((long long)v7);
                            v25 = ((long long)v2);
                        }
                        else if ((v28 == v29 || ((long long)v34) != 0) && (((long long)v34) != 0 || ((long long)v23) != 0) && (((long long)(v27 & 15)) == 0 || v27 == 1 || *(v30) != 0) && (*(v30) != 0 || v27 != 1 || ((long long)v34) != 0) && (*(v30) == 0 || ((long long)v23) == 0 || ((long long)v34) != 0 || v28 != v29) && (v27 == 1 || ((long long)v23) == 0 || ((long long)v34) != 0 || v28 != v29))
                        {
                            v2 = r9b<1>;
                            v23 = create_hole();
                            v34 = ((long long)v2);
                        }
                        else if (((long long)(v27 & 15)) == 0 && ((long long)v23) == 0 || *(v30) == 0 && v27 == 1 || ((long long)(v27 & 15)) == 0 && v28 != v29 || ((long long)v23) == 0 && *(v30) != 0 || v28 != v29 && *(v30) != 0)
                        {
                            v38 += v28;
                        }
                    }
                    else if (v25 == 1 || v28 != v29)
                    {
                        v23 = v25;
                        if (v28 != 0)
                        {
                            /* goto 4220745; */
                        }
                    }
                    if (v28 == 0 && ((char)v40) == 0 || ((char)v40) != 0 && ((long long)v25) != 0 || ((char)v40) == 0 && v28 == v29 && v25 != 1)
                    {
                        v38 += v28;
                        v34 = 0;
                        v2 = v25;
                        v1 = 1;
                    }
                    if ((((char)v40) == 0 || ((long long)v25) != 0) && (v28 != 0 || ((char)v40) != 0) && (v25 == 1 || ((char)v40) != 0 || v28 != v29))
                    {
                        v38 += v28;
                        if (0x8000000000000000 + v38 >= v28)
                        {
                            v29 -= v28;
                            v39 += v28;
                        }
                        else
                        {
                            v37 = (long long)quotearg_style();
                            error(0x0, 0x0, dcgettext(0x0, &g_4151de, 0x5));
                            v24 = v39;
                            return v24;
                        }
                    }
                    if (((long long)v25) == 0)
                    {
                        if (v28 == 0 || v28 == v29 || ((char)v40) != 0)
                        {
                            if (v28 == 0 || v25 != 1 || ((char)v40) != 0)
                            {
                                v7 = v34;
                                v23 = full_write();
                                v34 = ((long long)v7);
                                v25 = ((long long)v2);
                                if (v38 != v23)
                                {
                                    v23 = (long long)quotearg_style();
                                    error(0x0, *(__errno_location()), dcgettext(0x0, &g_4151cd, 0x5));
                                    v24 = v39;
                                    return v24;
                                }
                            }
                        }
                    }
                    else
                    {
                        if (v28 == 0 || v28 == v29 || ((char)v40) != 0)
                        {
                            if (v28 == 0 || v25 != 1 || ((char)v40) != 0)
                            {
                                v2 = r9b<1>;
                                v23 = create_hole();
                                v34 = ((long long)v2);
                                if (((long long)v23) == 0)
                                {
                                    v24 = v39;
                                    return v24;
                                }
                            }
                        }
                    }
                    if ((v38 == v23 || ((long long)v25) != 0) && (((long long)v25) == 0 || ((long long)v23) != 0) && (v28 == 0 || v28 == v29 || ((char)v40) != 0) && (v28 == 0 || v25 != 1 || ((char)v40) != 0))
                    {
                        if (v1 == 0)
                        {
                            v29 -= v28;
                            v38 = v28;
                            v39 += v28;
                        }
                        else if (v28 != 0)
                        {
                            if (((long long)r9b<1>) != 0)
                            {
                                v38 = v28;
                                v25 = r13<8>;
                                v28 = 0;
                            }
                        }
                        else
                        {
                            if (((long long)r9b<1>) == 0)
                            {
                                v37 = 0;
                                /* goto 4220852; */
                            }
                            else
                            {
                                /* goto 4221099; */
                            }
                        }
                    }
                    if ((v38 == v23 || ((long long)v25) != 0) && (((long long)v25) == 0 || ((long long)v23) != 0) && (v28 == 0 || v28 == v29 || ((char)v40) != 0) && (v28 == 0 || v25 != 1 || ((char)v40) != 0) && v1 != 0 && v28 == 0 && ((long long)r9b<1>) == 0 || (v38 == v23 || ((long long)v25) != 0) && (((long long)v25) == 0 || ((long long)v23) != 0) && (v28 == 0 || v28 == v29 || ((char)v40) != 0) && (v28 == 0 || v25 != 1 || ((char)v40) != 0) && v1 != 0 && v28 != 0 && ((long long)r9b<1>) == 0)
                    {
                        v39 += v28;
                        v29 = r12<8> - v28;
                        v38 = 0;
                    }
                    if (...)
                    {
                        v32 = v11;
                        tmp_3 = v10;
                        v10 -= v11;
                        *(v15) = v23;
                        if (tmp_3 != v32)
                        {
                            v39 = r13<8>;
                            break;
                        }
                        else
                        {
                            v33 = r13<8>;
                            break;
                        }
                    }
                }
                if (...)
                {
                    v36 = v9->field_0;
                }
            }
            else
            {
                v33 = v39;
            }
            if (((long long)v33) != 0)
            {
                break;
            }
        }
        v24 = v39;
        return v24;
    }
}
