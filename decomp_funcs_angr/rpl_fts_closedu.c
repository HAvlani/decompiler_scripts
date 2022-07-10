typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
    char padding_10[24];
    unsigned int field_28;
    unsigned int field_2c;
    char padding_30[24];
    unsigned int field_48;
    char padding_4c[4];
    unsigned long long field_50;
    unsigned long long field_58;
} struct_1;

typedef struct struct_2 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
    char padding_18[64];
    unsigned long long field_58;
} struct_2;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int rpl_fts_close()
{
    unsigned long long v1;  // rax
    struct_2 *|struct_0 * v10;  // rbp
    unsigned long|struct_2 * v11;  // rdi
    unsigned long long v12;  // rdi
    struct_1 *v13;  // rdi
    struct_1 *v14;  // r12
    unsigned long long v15;  // r13
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax

    v14 = v13;
    v11 = v13->field_0;
    if (v11 != 0)
    {
        if (((char)(v11->field_58 - 0 >> 63)))
        {
            v10 = v11;
        }
        else
        {
            while (true)
            {
                v10 = v11->field_10;
                if (v11->field_10 != 0)
                {
                    rpl_free();
                    if (((char)(v10->field_58 - 0 >> 63)))
                    {
                        break;
                    }
                }
                else
                {
                    v10 = v11->field_8;
                    rpl_free();
                    if (((char)(v10->field_58 - 0 >> 63)))
                    {
                        break;
                    }
                }
                v11 = v10;
            }
        }
        rpl_free();
    }
    if (v14->field_8 != 0)
    {
        fts_lfree();
    }
    rpl_free();
    rpl_free();
    v7 = ((long long)v14->field_48);
    if (((long long)(((char)(v14->field_48 >> 8)) & 2)) != 0)
    {
        v11 = ((long long)v14->field_2c);
        if (((int)v14->field_2c) >= 0)
        {
            v7 = close(v11);
            if (v7 != 0)
            {
                v15 = ((long long)*(__errno_location()));
                /* goto 4239389; */
            }
        }
    }
    else if (((long long)(v7 & 4)) == 0)
    {
        v1 = fchdir(v14->field_28);
        if (v1 == 0)
        {
            v7 = close(v14->field_28);
            if (v7 != 0)
            {
                v10 = __errno_location();
            }
        }
        else
        {
            v15 = ((long long)v10->field_0);
            v10 = __errno_location();
            v7 = close(v14->field_28);
        }
        if ((((int)v15) == 0 || v1 == 0) && (v1 == 0 || v7 != 0) && (v1 != 0 || v7 != 0))
        {
            v15 = ((long long)v10->field_0);
            /* goto 4239389; */
        }
    }
    if (...)
    {
        v15 = 0;
    }
    fd_ring_clear();
    if (v14->field_50 != 0)
    {
        hash_free();
    }
    v12 = v14->field_58;
    if (!((((short)v14->field_48) & 258) != 0))
    {
        rpl_free();
    }
    else if (v12 != 0)
    {
        hash_free();
    }
    rpl_free();
    if (((int)v15) == 0)
    {
        v6 = v15;
        return v6;
    }
    *(__errno_location() + None) = ((int)v15);
    v15 = -1;
    v6 = v15;
    return v6;
}
