typedef struct struct_4 {
    char padding_0[24];
    char field_18;
} struct_4;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern char abbreviate_duplicate_blocks;
extern struct_1 bytes_per_block;
extern char first.7845;
extern struct_1 n_specs;
extern char prev_pair_equal.7846;
extern struct_1 spec;
extern unsigned long long stdout[7];
extern struct_3 width_bytes;

int write_block()
{
    unsigned long v0;  // [bp-0x50]
    unsigned long long v1;  // [bp-0x48]
    unsigned long long|void * v10;  // rcx
    char *|unsigned long long|void * v11;  // rdx
    unsigned long v12;  // rdx
    unsigned long long v13;  // rbx
    unsigned long long v14;  // rbp
    struct_4 *|char * v15;  // rbp
    unsigned long long|unsigned int v16;  // rsi
    unsigned long long v17;  // rdi
    unsigned long long v18;  // r8
    unsigned long long v19;  // r9
    unsigned long v2;  // [bp-0x40]
    unsigned long|struct_1 * v20;  // r12
    unsigned long v21;  // r13
    void *v22;  // r14
    unsigned long long v23;  // cc_dep1
    char *|unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    char *v8;  // rax
    unsigned long long v9;  // rcx

    v22 = v10;
    v1 = v17;
    if (abbreviate_duplicate_blocks != 0)
    {
        if (first.7845 == 0)
        {
            if (bytes_per_block == ((unsigned int)v16))
            {
                v5 = memcmp(v11, v10, ((unsigned int)v16));
                if (((int)v5) == 0)
                {
                    if (prev_pair_equal.7846 == 0)
                    {
                        v5 = puts("*");
                        prev_pair_equal.7846 = 1;
                        first.7845 = 0;
                        return v5;
                    }
                    first.7845 = 0;
                    return v5;
                }
            }
        }
    }
    if (abbreviate_duplicate_blocks == 0 || ((int)v5) != 0 || first.7845 != 0 || bytes_per_block != ((unsigned int)v16))
    {
        prev_pair_equal.7846 = 0;
        if (n_specs != 0)
        {
            v0 = ((unsigned int)v16);
            v13 = 0;
            v2 = v10 + v0;
            do
            {
                v14 = v13 * 40;
                v9 = ((long long)*(width_bytes + ((long long)*(spec + v13 * 40 + 4)) * 4));
                v21 = ((long long)((0 CONCAT bytes_per_block) % ((long long)*(width_bytes + ((long long)*(spec + v13 * 40 + 4)) * 4))));
                v12 = ((long long)(...));
                v20 = ((long long)((0 CONCAT bytes_per_block - v0) % ((long long)*(width_bytes + ((long long)*(spec + v13 * 40 + 4)) * 4))));
                if (v13 == 0)
                {
                    v17 = v1;
                    v16 = 0;
                    *(0x412200)();
                }
                else
                {
                    __printf_chk(0x1, "%*s");
                }
                v16 = v20;
                v17 = v21;
                v11 = v22;
                v19 = ((long long)*(spec + v14 + 32));
                v18 = ((long long)*(spec + v14 + 28));
                v10 = spec + v14 + 16;
                *(spec + v14 + 8)();
                v15 = v14 + spec;
                if (v15->field_18 != 0)
                {
                    __printf_chk(0x1, "%*s");
                    fwrite_unlocked("  >", 0x1, 0x3, stdout);
                    if (v0 != 0)
                    {
                        v15 = v11;
                        v20 = __ctype_b_loc();
                        do
                        {
                            v10 = ((long long)*(v15));
                            v15 += 1;
                            v6 = v10;
                            v23 = ((long long)(*(v20->field_0 + v6 * 2 + 1) & 64));
                            if (((char)v23) == 0)
                            {
                                v6 = 46;
                            }
                            v11 = *(stdout + 40);
                            if (*(stdout + 40) < *(stdout + 48))
                            {
                                *(stdout + 40) = *(stdout + 40) + 1;
                                *(v11) = v6;
                            }
                            else
                            {
                                __overflow();
                            }
                        }
                        while (v15 != v2);
                    }
                    v8 = *(stdout + 40);
                    if (*(stdout + 40) < *(stdout + 48))
                    {
                        *(stdout + 40) = *(stdout + 40) + 1;
                        *(v8) = 60;
                    }
                    else
                    {
                        __overflow();
                    }
                }
                v5 = *(stdout + 40);
                if (*(stdout + 40) < *(stdout + 48))
                {
                    *(stdout + 40) = *(stdout + 40) + 1;
                    *(v5) = 10;
                }
                else
                {
                    v5 = __overflow();
                }
                v13 = 1;
            }
            while (n_specs > 1);
            first.7845 = 0;
            return v5;
        }
        first.7845 = 0;
        return v5;
    }
}
