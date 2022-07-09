typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[24];
    unsigned long long field_20;
    char padding_28[8];
    unsigned long long field_30;
    char field_38;
} struct_0;

int re_search_stub()
{
    BOT tmp_45;  // tmp #45
    BOT tmp_4;  // tmp #4
    BOT tmp_26;  // tmp #26
    unsigned long long v0;  // [bp-0x98]
    unsigned long|unsigned long long v1;  // [bp-0x90]
    unsigned int v10;  // [bp-0x3c]
    unsigned long long v11;  // [bp+0x8]
    unsigned int v12;  // [bp+0x10]
    unsigned long long v13;  // rax
    unsigned long long|unsigned int v14;  // rax
    unsigned long long v15;  // rax
    unsigned long long v16;  // rcx
    unsigned long|unsigned long long v17;  // rdx
    unsigned long long v18;  // rbx
    unsigned long long v19;  // rbp
    unsigned long v2;  // [bp-0x88]
    unsigned long|unsigned long long v20;  // rsi
    unsigned long long|struct_0 *|void * v21;  // rdi
    unsigned long|unsigned long long v22;  // r8
    unsigned long v23;  // r9
    unsigned long long v24;  // r12
    struct_0 *v25;  // r13
    unsigned long|unsigned long long|unsigned int v26;  // r14
    unsigned long long v27;  // r15
    unsigned long long v28;  // cc_dep1
    char v3;  // [bp-0x69]
    unsigned long v4;  // [bp-0x68]
    unsigned long|unsigned long long v5;  // [bp-0x60]
    unsigned long|unsigned long long v6;  // [bp-0x58]
    unsigned long long v7;  // [bp-0x50]
    unsigned long v8;  // [bp-0x48]
    unsigned int v9;  // [bp-0x40]

    v26 = v16 + v22;
    tmp_45 = ((long long)v12);
    v5 = v20;
    v6 = v23;
    v24 = v11;
    v9 = ((int)tmp_45);
    v4 = v21->field_0;
    if (!(!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rcx<8>, 0x0<64>, cc_ndep<8>)))))
    {
        v15 = v24;
        return v15;
    }
    else if (v16 <= v26)
    {
        v25 = v21;
        if (v16 + v22 <= v26)
        {
            if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rcx<8>, 0x0<64>, cc_ndep<8>))))
            {
            }
            else
            {
                v26 = 0;
                v3 = ((char)(0 != 0)) | ((char)(0 != 0));
                if (((long long)(((char)(0 != 0)) | ((char)(0 != 0)))) == 0)
                {
                    v10 = ((int)(((long long)v21->field_38) >> 5)) & 3;
                }
            }
        }
        if (v16 + v22 > v26 || !(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rcx<8>, 0x0<64>, cc_ndep<8>))) && v16 > v16 + v22)
        {
            v26 = v17;
        }
        if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rcx<8>, 0x0<64>, cc_ndep<8>))) || v16 + v22 > v26)
        {
            v3 = ((char)(0 != 0)) | ((char)(0 != 0));
        }
        if (((long long)(((char)(0 != 0)) | ((char)(0 != 0)))) != 0)
        {
            v7 = v16;
            pthread_mutex_lock();
            v3 = 1;
            v16 = v7;
        }
        if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rcx<8>, 0x0<64>, cc_ndep<8>))) || ((long long)(((char)(0 != 0)) | ((char)(0 != 0)))) != 0 || v16 + v22 > v26)
        {
            v10 = ((int)(((long long)v21->field_38) >> 5)) & 3;
            if (v16 < v26)
            {
                if (v21->field_20 != 0)
                {
                    if (((long long)(v21->field_38 & 8)) == 0)
                    {
                        v7 = v7;
                        rpl_re_compile_fastmap();
                        v16 = v7;
                    }
                }
            }
        }
        if (v11 != 0)
        {
            if (((long long)(v21->field_38 & 16)) == 0)
            {
                v13 = ((long long)(v21->field_38 & 6));
                v21 = v21->field_30;
                tmp_4 = v13;
                if (tmp_4 == 4)
                {
                    v20 = *(v24);
                    if (*(v24) <= v21)
                    {
                        v18 = v20;
                        if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rcx<8>, 0x0<64>, cc_ndep<8>)))
                        {
                            /* goto 4274632; */
                        }
                    }
                }
                if (tmp_4 != 4 || *(v24) > v21)
                {
                    v20 = v21 + 1;
                    v18 = v21 + 1;
                }
                if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rcx<8>, 0x0<64>, cc_ndep<8>))) || tmp_4 != 4 || *(v24) > v21)
                {
                    v21 = v20 * 16;
                    /* goto 4274233; */
                }
            }
        }
        if (v11 == 0 || ((long long)(v21->field_38 & 16)) != 0 || ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rcx<8>, 0x0<64>, cc_ndep<8>)) && tmp_4 == 4 && *(v24) <= v21)
        {
            v21 = 16;
            v20 = 1;
            v18 = 1;
            v24 = 0;
        }
        v8 = v16;
        v7 = v20;
        v19 = malloc(v21);
        if (v1 != 0)
        {
            v2 = ((long long)v10);
            v1 = v19;
            v0 = v7;
            v14 = re_search_internal();
            if (v14 != 0)
            {
            }
            else
            {
                if (v24 != 0)
                {
                    v27 = v18 + 1;
                    v14 = ((int)(((int)(((long long)v25->field_38) >> 1)) & 3));
                    if ((((char)((int)(((long long)v25->field_38) >> 1))) & 3) != 0)
                    {
                        v26 = 2;
                        if (v14 == 1)
                        {
                            v26 = 1;
                            if (*(v24) < v27)
                            {
                                v21 = *(v24 + 8);
                                v6 = v27 * 8;
                                v5 = realloc(v21, v27 * 8);
                                if (v5 != 0)
                                {
                                    v14 = realloc(*(v24 + 16), v6);
                                    if (v14 != 0)
                                    {
                                        *(v24 + 8) = v5;
                                        *(v24 + 16) = v14;
                                        *(v24) = v27;
                                    }
                                    else
                                    {
                                        v26 = 0;
                                        rpl_free();
                                        /* goto 4274541; */
                                    }
                                }
                            }
                        }
                    }
                    else
                    {
                        v5 = v27 * 8;
                        *(v24 + 8) = v26;
                        v26 = malloc(v27 * 8);
                        if (v26 != 0)
                        {
                            v14 = malloc(v5);
                            *(v24 + 16) = v14;
                            if (v14 != 0)
                            {
                                *(v24) = v27;
                                v26 = 1;
                            }
                            else
                            {
                                rpl_free();
                            }
                        }
                    }
                    if (...)
                    {
                        v26 = 0;
                        /* goto 4274541; */
                    }
                    if (...)
                    {
                        if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rcx<8>, 0x0<64>, cc_ndep<8>))))
                        {
                            v22 = *(v24 + 8);
                            v21 = *(v24 + 16);
                            v17 = v18;
                            v14 = 0;
                            v20 = v18 * 8;
                            do
                            {
                                *(v22 + v14) = *(v1 + v14 * 2);
                                *(v21 + v14) = *(v1 + v14 * 2 + 8);
                                v14 += 8;
                            }
                            while (v14 != v20);
                        }
                        else
                        {
                            v17 = 0;
                            v18 = 0;
                        }
                        if (*(v24) > v17)
                        {
                            v16 = *(v24 + 16);
                            v14 = *(v24 + 8);
                            do
                            {
                                v18 = rbx<8> + 1;
                                *(v16 + rdx<8> * 8) = 18446744069414584319;
                                *(v14 + rdx<8> * 8) = 18446744069414584319;
                                v17 = v18;
                            }
                            while (*(v24) > v18);
                        }
                    }
                    v26 = ((int)v26) * 2;
                    tmp_26 = ((int)v25->field_38);
                    v25->field_38 = ((char)(((int)v25->field_38) & -7 | v26));
                    v28 = ((long long)(((char)(tmp_26 & -7 | v26)) & 6));
                }
                if (v24 == 0 || ((char)v28) != 0)
                {
                    v24 = *(v1);
                    if (((char)v9) != 0)
                    {
                        /* goto 4274332; */
                    }
                }
            }
            rpl_free();
        }
        if (v3 != 0)
        {
            pthread_mutex_unlock();
            v15 = v24;
            return v15;
        }
        v15 = v24;
        return v15;
    }
    else
    {
        v15 = v24;
        return v15;
    }
}
