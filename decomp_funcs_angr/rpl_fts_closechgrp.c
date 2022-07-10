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

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int rpl_fts_close()
{
    unsigned int v1;  // [bp+0x100008]
    unsigned long long [12]|struct_0 * v11;  // rbp
    unsigned long long v12;  // rdi
    struct_1 *v13;  // rdi
    unsigned long long [12]|unsigned long v14;  // rdi
    struct_1 *v15;  // r12
    unsigned long long v16;  // r13
    unsigned long long v3;  // rax
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax

    v15 = v13;
    v14 = v13->field_0;
    if (v14 != 0)
    {
        if (((char)(v14[11] - 0 >> 63)))
        {
            v11 = v14;
        }
        else
        {
            while (true)
            {
                v11 = v14[2];
                if (v14[2] != 0)
                {
                    rpl_free();
                    if (((char)(v11[11] - 0 >> 63)))
                    {
                        break;
                    }
                }
                else
                {
                    v11 = v14[1];
                    rpl_free();
                    if (((char)(v11[11] - 0 >> 63)))
                    {
                        break;
                    }
                }
                v14 = v11;
            }
        }
        rpl_free();
    }
    if (v15->field_8 != 0)
    {
        fts_lfree();
    }
    rpl_free();
    rpl_free();
    v3 = ((long long)v15->field_48);
    if (((long long)(((char)(v15->field_48 >> 8)) & 2)) != 0)
    {
        v14 = ((long long)v15->field_2c);
        if (((int)v15->field_2c) >= 0)
        {
            v3 = close(v14);
            if (v3 != 0)
            {
                v16 = ((long long)*(__errno_location()));
                /* goto 4218957; */
            }
        }
    }
    else if (((long long)(v3 & 4)) == 0)
    {
        v9 = fchdir(v15->field_28);
        if (v9 == 0)
        {
            v3 = close(v15->field_28);
            if (v3 != 0)
            {
                v11 = __errno_location();
            }
        }
        else
        {
            v16 = ((long long)v1);
            v11 = __errno_location();
            v3 = close(v15->field_28);
        }
        if ((((int)v16) == 0 || v9 == 0) && (v9 == 0 || v3 != 0) && (v3 != 0 || v9 != 0))
        {
            v16 = ((long long)v11->field_0);
            /* goto 4218957; */
        }
    }
    if (...)
    {
        v16 = 0;
    }
    fd_ring_clear();
    if (v15->field_50 != 0)
    {
        hash_free();
    }
    v12 = v15->field_58;
    if (!((((short)v15->field_48) & 258) != 0))
    {
        rpl_free();
    }
    else if (v12 != 0)
    {
        hash_free();
    }
    rpl_free();
    if (((int)v16) == 0)
    {
        v8 = v16;
        return v8;
    }
    *(__errno_location() + None) = ((int)v16);
    v16 = -1;
    v8 = v16;
    return v8;
}
