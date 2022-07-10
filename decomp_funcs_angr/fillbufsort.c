typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    unsigned long long field_28;
    char field_30;
} struct_0;

typedef struct struct_3 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    char padding_28[8];
    char field_30;
} struct_3;

typedef struct struct_5 {
    unsigned int field_0;
} struct_5;

typedef struct struct_4 {
    char field_0;
    char field_1;
    char padding_2[6];
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
} struct_4;

extern char blanks;
extern char eolchar;
extern unsigned int g_416b9a;
extern struct_2 *keylist;
extern struct_1 merge_buffer_size;

int fillbuf()
{
    BOT tmp_26;  // tmp #26
    BOT tmp_6;  // tmp #6
    struct_4 * v0;  // [bp-0x88]
    unsigned long v1;  // [bp-0x80]
    struct_4 *|unsigned long long|char * v10;  // rax
    unsigned long long v11;  // rax
    struct_0 *v13;  // rax
    unsigned long long v14;  // rax
    unsigned long|unsigned long long v16;  // rdx
    unsigned long|unsigned long long v17;  // rbp
    unsigned long v18;  // rsi
    struct_0 *|unsigned long long|void * v19;  // rdi
    unsigned long|unsigned long long v2;  // [bp-0x78]
    struct_4 * v20;  // r10
    struct_4 *|unsigned long long v21;  // r12
    unsigned long|struct_4 * v22;  // r12
    unsigned long long v23;  // r12
    struct_4 * v24;  // r13
    struct_4 * v25;  // r13
    struct_4 * v27;  // r14
    struct_4 * v28;  // r14
    struct_4 * v29;  // r15
    unsigned long v3;  // [bp-0x70]
    unsigned long long v30;  // cc_dep1
    unsigned long long v31;  // cc_dep2
    struct_5 *v4;  // [bp-0x68]
    struct_3 *v5;  // [bp-0x60]
    char v6;  // [bp-0x51]
    unsigned long v7;  // [bp-0x50]
    unsigned long long v8;  // [bp-0x48]

    v5 = v19;
    v4 = v18;
    v7 = v16;
    if (v19->field_30 == 0)
    {
        v13 = v19;
        v20 = v13->field_8;
        v16 = v13->field_20;
        v29 = v13->field_0;
        v6 = eolchar;
        v1 = v13->field_28;
        if (v20 == v16)
        {
            v10 = v13->field_10;
        }
        else
        {
            v19 = v19->field_0;
            memmove(v19, v29 + v20 - v16, v16);
            v20 = v5->field_20;
            v29 = v5->field_0;
            v5->field_10 = 0;
            v5->field_8 = v20;
            v10 = 0;
        }
        v17 = merge_buffer_size - 34;
        v3 = v1 + 1;
        v23 = v5->field_18;
        while (true)
        {
            tmp_26 = r15<8> + v23;
            v21 = r15<8> + v23 - rax<8> * 32;
            v2 = tmp_26 - rax<8> * v1 - (r15<8> + r10<8>);
            if (rax<8> != 0)
            {
                v29 = r15<8> + r10<8>;
                v27 = v21;
                v24 = v27->field_8 + v27->field_0;
            }
            else
            {
                v24 = r15<8>;
                v27 = v29;
            }
            if (v2 > v3)
            {
                while (true)
                {
                    v22 = ((long long)((0 CONCAT v2 - 1) % v3));
                    v11 = fread_unlocked(r15<8>, 0x1, ((long long)((0 CONCAT v2 - 1) % (v1 + 1))), v5);
                    v2 -= v11;
                    v0 = r15<8> + v11;
                    if (v22 != v11)
                    {
                        if (((long long)(((char)v4->field_0) & 32)) != 0)
                        {
                            dcgettext(0x0, &g_416b9a, 0x5);
                            sort_die(); /* do not return */
                        }
                        else if (((long long)(((char)v4->field_0) & 16)) != 0)
                        {
                            v5->field_30 = 1;
                            if (v5->field_0 != v0)
                            {
                                v14 = 0;
                                return v14;
                                if (r13<8> != v0 && v0->field_1 != v6)
                                {
                                    v0->field_0 = v6;
                                    v0 += 1;
                                }
                            }
                        }
                    }
                    if (v22 == v11 || ((long long)(((char)v4->field_0) & 32)) == 0 && ((long long)(((char)v4->field_0) & 16)) == 0 || ((long long)(((char)v4->field_0) & 32)) == 0 && v5->field_0 != v0)
                    {
                        v10 = r13<8>;
                        v20 = ((int)r15<8>);
                        v25 = r14<8>;
                        v28 = v10;
                        v21 = v2;
                        while (true)
                        {
                            v10 = memchr(v20, ((int)eolchar), ((int)(v0 - r10<8>)));
                            if (v10 == 0)
                            {
                                break;
                            }
                            v20 = v10 + 1;
                            v25 -= 32;
                            *(v10) = 0;
                            v25->field_0 = v28;
                            v25->field_8 = v10 + 1 - v28;
                            v17 = (v17 < v10 + 1 - v28? v10 + 1 - v28 : v17);
                            v21 -= v1;
                            if (keylist != 0)
                            {
                                if (*(keylist + 16) != 18446744069414584319)
                                {
                                    v10 = limfield.isra.0();
                                }
                                v30 = *(keylist);
                                v25->field_18 = rax<8>;
                                if (v30 != 18446744069414584319)
                                {
                                    v25->field_10 = (long long)begfield.isra.0();
                                }
                                else
                                {
                                    if (*(keylist + 48) != 0 && *(blanks + ((long long)v28->field_0)) != 0)
                                    {
                                        do
                                        {
                                            v10 = ((long long)v28->field_1);
                                            v28 += 1;
                                        }
                                        while (*(v10 + 0x41d760) != 0);
                                    }
                                    v25->field_10 = v28;
                                }
                            }
                            v28 = v20;
                        }
                        tmp_6 = v28;
                        v27 = v25;
                        v2 = v21;
                        v24 = tmp_6;
                        if (v5->field_30 == 0)
                        {
                            v29 = v0;
                        }
                        else
                        {
                            v22 = v27;
                            v29 = tmp_6;
                            v27 = v0;
                            break;
                        }
                    }
                }
                if (v5->field_30 == 0)
                {
                    v22 = r14<8>;
                    v27 = v29;
                    v29 = v24;
                }
                else if (v5->field_30 != 0)
                {
                    v19 = v5->field_0;
                    v16 = v5->field_18;
                    v5->field_8 = v27 - v5->field_0;
                    v30 = v19 + v16 - v22 >> 5;
                    v31 = v19 + v16 - v22 >> 4;
                    v5->field_10 = v19 + v16 - v22 >> 5;
                    if (!(((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>))))
                    {
                        break;
                    }
                }
            }
            v22 = r14<8>;
            v27 = v29;
            v29 = v24;
            v8 = v5->field_18 >> 5;
            v29 = (long long)x2nrealloc();
            v23 = v8 * 32;
            v5->field_0 = v29;
            v20 = v5->field_8;
            v5->field_18 = v8 * 32;
            v10 = v5->field_10;
        }
        v17 += 34;
        v14 = 1;
        merge_buffer_size = v17;
        v5->field_20 = v27 - v29;
        return v14;
    }
    v14 = 0;
    return v14;
}
