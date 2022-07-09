typedef struct struct_0 {
    struct struct_1 *field_0;
    unsigned long long field_8;
    char padding_10[56];
    unsigned int field_48;
    char field_49;
} struct_0;

typedef struct struct_3 {
    unsigned long long field_0;
    unsigned long long field_8;
    char padding_10[56];
    unsigned int field_48;
    char field_49;
} struct_3;

typedef struct struct_2 {
    unsigned int field_0;
} struct_2;

int rpl_fts_children()
{
    unsigned long long v2;  // rax
    unsigned int|struct_3 * v5;  // rbx
    struct_2 *v6;  // rbp
    unsigned int v7;  // esi
    struct_0 *v8;  // rdi
    unsigned int v9;  // r12d

    v5 = v8;
    v6 = __errno_location();
    if ((v7 & -4097) == 0)
    {
        v6->field_0 = 0;
        if (!(((long long)(*(v8 + 0x49) & 32)) == 0))
        {
            return 0;
        }
        else if (v8->field_0->field_68 != 9)
        {
            v2 = 0;
            if (v8->field_0->field_68 == 1)
            {
                if (v8->field_8 != 0)
                {
                    fts_lfree();
                }
                if (v7 == 0x1000)
                {
                    v5->field_48 = v5->field_48 | 0x1000;
                }
                if (!(v8->field_0->field_58 == 0))
                {
                    v2 = fts_build();
                    v8->field_8 = v2;
                    return v2;
                }
                else if (!(*(v8->field_0->field_30) != 47))
                {
                    v2 = fts_build();
                    v8->field_8 = v2;
                    return v2;
                }
                else if (((long long)(((char)v8->field_48) & 4)) != 0)
                {
                    v2 = fts_build();
                    v8->field_8 = v2;
                    return v2;
                }
                else
                {
                    v9 = diropen.isra.0();
                    if (v9 >= 0)
                    {
                        v5->field_8 = (long long)fts_build();
                        if (!(((long long)(*(v5 + 0x49) & 2)) == 0))
                        {
                            cwd_advance_fd();
                            v2 = v5->field_8;
                            return v2;
                        }
                        else if (fchdir(v9) == 0)
                        {
                            close(v9);
                            v2 = v5->field_8;
                            return v2;
                        }
                        else
                        {
                            v5 = ((int)v6->field_0);
                            close(v9);
                            v2 = 0;
                            v6->field_0 = v5;
                            return v2;
                        }
                    }
                    v8->field_8 = 0;
                    v2 = 0;
                    return v2;
                }
            }
            return v2;
        }
        else
        {
            return v8->field_0->field_10;
        }
    }
    v6->field_0 = 22;
    return 0;
}
