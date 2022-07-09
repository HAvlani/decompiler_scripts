typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int g_407008;
extern unsigned int g_407018;
extern struct_0 output_error;
extern struct_1 stdout;

int tee_files()
{
    unsigned long|unsigned int|char v0;  // [bp-0x2070]
    unsigned int v1;  // [bp-0x2064]
    struct_1 *v10;  // rax
    void *v13;  // rcx
    unsigned long long v14;  // rbx
    unsigned long|unsigned long long v15;  // rbp
    unsigned long long v16;  // rsi
    unsigned long long|char v17;  // dil
    unsigned long|unsigned int v18;  // r8
    struct_1 * v19;  // r12
    unsigned long long v2[2];  // [bp-0x2060]
    unsigned int v20;  // r13d
    unsigned long long|struct_1 * v21;  // r14
    unsigned long long|struct_1 * v22;  // r15
    unsigned long long v23;  // cc_dep1
    struct_1 *v3;  // [bp-0x2058]
    unsigned long v4;  // [bp-0x2050]
    char v5;  // [bp-0x2048]
    unsigned long v6;  // [bp-0x2030]
    unsigned long v7;  // [bp-0x1030]
    unsigned long|unsigned long long|struct_0 * v9;  // rax

    v7 = v7;
    v6 = v6;
    v1 = ((int)v17);
    v4 = v16;
    fadvise();
    v10 = xnmalloc();
    v2 = v10;
    v22 = v10;
    v3 = v16 - 8;
    v10->field_0 = stdout;
    *(v16 + 8) = dcgettext(0x0, &g_407008, 0x5);
    setvbuf(stdout, NULL, 0x2, 0x0);
    if (((int)v17) > 0)
    {
        v15 = v16;
        v19 = v22 + 8;
        v0 = 1;
        v21 = v16 + (v17 - 1) * 8 + 8;
        v14 = 1;
        while (true)
        {
            v19->field_0 = v17;
            v17 = (long long)fopen_safer();
            if (v17 != 0)
            {
                v15 += 8;
                setvbuf(v17, NULL, 0x2, 0x0);
                v14 += 1;
                v19 += 8;
                if (v21 == v15)
                {
                    break;
                }
            }
            else
            {
                v0 = (long long)quotearg_n_style_colon();
                v17 = 0;
                v17 = ((char)(output_error - 3 <= 1));
                v15 += 8;
                v19 += 8;
                error(rdi<4>, *(__errno_location()), "%s");
                v0 = 0;
                if (v21 == v15)
                {
                    break;
                }
            }
        }
    }
    else
    {
        v0 = 1;
        v14 = 1;
    }
    if (((int)v17) <= 0 || v14 != 0)
    {
        while (true)
        {
            v9 = read(0x0, &v5, 0x2000);
            v15 = v9;
            v23 = v9;
            if (((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, cc_dep1<8>, 0x0<64>, cc_ndep<8>)))
            {
                v9 = __errno_location();
                if (((int)v1) >= 0)
                {
                    v22 = v2;
                    v21 = v3;
                    do
                    {
                        v13 = v22->field_0;
                        if (v22->field_0 != 0)
                        {
                            v9 = fwrite_unlocked(&v5, v15, 0x1, v13);
                            if (v9 != 1)
                            {
                                v18 = ((long long)*(__errno_location()));
                                if (((int)v18) == 32 && (output_error & -3) != 1)
                                {
                                    if (rdi<8> == stdout)
                                    {
                                        clearerr_unlocked();
                                    }
                                    v22->field_0 = 0;
                                    /* goto 4205887; */
                                }
                                if ((output_error & -3) == 1 || ((int)v18) != 32)
                                {
                                    if (rdi<8> == stdout)
                                    {
                                        v0 = ((int)v18);
                                        clearerr_unlocked();
                                        v18 = ((int)v0);
                                    }
                                    v0 = v18;
                                    quotearg_n_style_colon();
                                    v17 = 0;
                                    v17 = ((char)(output_error - 3 <= 1));
                                    error(rdi<4>, v0, "%s");
                                    v22->field_0 = 0;
                                    v0 = 0;
                                }
                            }
                        }
                        v21 += 8;
                        v22 += 8;
                    }
                    while (v21 != v4 + (((long long)v1) << 3));
                }
                if (v15 == 18446744069414584319)
                {
                    error(0x0, *(__errno_location()), dcgettext(0x0, &g_407018, 0x5));
                    v0 = 0;
                }
            }
            if (v1 > 0)
            {
                break;
            }
            rpl_free();
            return ((long long)v0);
        }
    }
    v20 = ((int)v1);
    v14 = 1;
    while (true)
    {
        if (v2[v14] != 0)
        {
            v9 = rpl_fclose();
            if (v9 != 0)
            {
                v14 += 1;
                v22 = (long long)quotearg_n_style_colon();
                error(0x0, *(__errno_location()), "%s");
                v0 = 0;
                rpl_free();
                break;
            }
        }
        if (v9 == 0 || v2[v14] == 0)
        {
            v14 += 1;
            rpl_free();
            return ((long long)v0);
        }
    }
    return ((long long)v0);
}
