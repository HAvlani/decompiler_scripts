typedef struct struct_2 {
    unsigned short field_0;
    char padding_2[42];
    char field_2c;
} struct_2;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern struct_0 g_0;
extern unsigned long long stdout[7];
extern unsigned int userid_compare;

int users()
{
    unsigned long v0;  // [bp-0x50]
    unsigned long long v1;  // [bp-0x48]
    unsigned long long v10;  // rbp
    unsigned long long v11;  // r12
    unsigned long long v12;  // r12
    unsigned long long v13;  // r13
    unsigned int v14;  // r13d
    unsigned long long v15;  // r15
    struct_0 *v16;  // fs
    unsigned long v2;  // [bp-0x40]
    unsigned long long|char * v4;  // rax
    struct_2 *|unsigned long long v8;  // rbx
    unsigned long long v9;  // rbx

    v4 = read_utmp();
    if (v4 == 0)
    {
        v8 = v1;
        v13 = v0 - &g_0;
        v10 = (long long)xnmalloc();
        if (v0 != 0)
        {
            v11 = &g_0;
            do
            {
                if (v8->field_0 == 7 && v8->field_2c != 0)
                {
                    *(v11 + v11 * 8) = (long long)extract_trimmed_name();
                    v11 += &g_0;
                }
                v13 -= &g_0;
                v8 += 384;
            }
            while (v13 != 18446744069414584319);
            qsort(((int)v11), ((int)v11), 0x8, &userid_compare);
            if (v11 != 0)
            {
                v15 = v11 - &g_0;
                v9 = &g_0;
                do
                {
                    v14 = ((int)(&g_0 - ((int)(v9 < v15))));
                    fputs_unlocked(*(v11 + v9 * 8), stdout);
                    v13 = ((long long)((v14 & 22) + 10));
                    v4 = *(stdout + 40);
                    if (*(stdout + 40) < *(stdout + 48))
                    {
                        *(stdout + 40) = *(stdout + 40) + &g_0;
                        *(v4) = v13;
                    }
                    else
                    {
                        __overflow();
                    }
                    v9 += &g_0;
                }
                while (v9 != v11);
                v11 = v10;
                v8 = v10 + v9 * 8;
                while (true)
                {
                    v11 += 8;
                    rpl_free();
                    if (v11 == v8)
                    {
                        break;
                    }
                }
                rpl_free();
                rpl_free();
                return v2 ^ *(v16 + 0x28);
            }
            rpl_free();
            rpl_free();
            return v2 ^ *(v16 + 0x28);
        }
        qsort(((int)v11), &g_0, 0x8, &userid_compare);
        rpl_free();
        rpl_free();
        return v2 ^ *(v16 + 0x28);
    }
    v12 = (long long)quotearg_n_style_colon();
    error(&g_0, *(__errno_location()), "%s");
}
