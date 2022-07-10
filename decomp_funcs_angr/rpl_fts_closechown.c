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
    struct_0 *|struct_2 * v10;  // rbp
    unsigned long long v11;  // rdi
    unsigned long|struct_2 * v12;  // rdi
    struct_1 *v13;  // rdi
    struct_1 *v14;  // r12
    unsigned long long v15;  // r13
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax

    v14 = v13;
    v12 = v13->field_0;
    if (v12 != 0)
    {
        if (((char)(v12->field_58 - 0 >> 63)))
        {
            v10 = v12;
        }
        else
        {
            while (true)
            {
                v10 = v12->field_10;
                if (v12->field_10 != 0)
                {
                    rpl_free();
                    if (((char)(v10->field_58 - 0 >> 63)))
                    {
                        break;
                    }
                }
                else
                {
                    v10 = v12->field_8;
                    rpl_free();
                    if (((char)(v10->field_58 - 0 >> 63)))
                    {
                        break;
                    }
                }
                v12 = v10;
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
    v2 = ((long long)v14->field_48);
    if (((long long)(((char)(v14->field_48 >> 8)) & 2)) != 0)
    {
        v12 = ((long long)v14->field_2c);
        if (((int)v14->field_2c) >= 0)
        {
            v2 = close(v12);
            if (v2 != 0)
            {
                v15 = ((long long)*(__errno_location()));
                /* goto 4219213; */
            }
        }
    }
    else if (((long long)(v2 & 4)) == 0)
    {
        v3 = fchdir(v14->field_28);
        if (v3 == 0)
        {
            v2 = close(v14->field_28);
            if (v2 != 0)
            {
                v10 = __errno_location();
            }
        }
        else
        {
            v15 = ((long long)v10->field_0);
            v10 = __errno_location();
            v2 = close(v14->field_28);
        }
        if ((((int)v15) == 0 || v3 == 0) && (v3 == 0 || v2 != 0) && (v3 != 0 || v2 != 0))
        {
            v15 = ((long long)v10->field_0);
            /* goto 4219213; */
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
    v11 = v14->field_58;
    if (!((((short)v14->field_48) & 258) != 0))
    {
        rpl_free();
    }
    else if (v11 != 0)
    {
        hash_free();
    }
    rpl_free();
    if (((int)v15) == 0)
    {
        v4 = v15;
        return v4;
    }
    *(__errno_location() + None) = ((int)v15);
    v15 = -1;
    v4 = v15;
    return v4;
}
