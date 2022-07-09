typedef struct struct_0 {
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
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

int rpl_fts_close()
{
    unsigned int v1;  // [bp+0x100008]
    struct_1 *|unsigned long long [12] v11;  // rbp
    unsigned long long [12]|unsigned long v12;  // rdi
    unsigned long long v13;  // rdi
    struct_0 *v14;  // rdi
    struct_0 *v15;  // r12
    unsigned long long v16;  // r13
    unsigned long long v2;  // rax
    unsigned long long v6;  // rax
    unsigned long long v8;  // rax

    v15 = v14;
    v12 = v14->field_0;
    if (v12 != 0)
    {
        if (((char)(v12[11] - 0 >> 63)))
        {
            v11 = v12;
        }
        else
        {
            while (true)
            {
                v11 = v12[2];
                if (v12[2] != 0)
                {
                    rpl_free();
                    if (((char)(v11[11] - 0 >> 63)))
                    {
                        break;
                    }
                }
                else
                {
                    v11 = v12[1];
                    rpl_free();
                    if (((char)(v11[11] - 0 >> 63)))
                    {
                        break;
                    }
                }
                v12 = v11;
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
    v2 = ((long long)v15->field_48);
    if (((long long)(((char)(v15->field_48 >> 8)) & 2)) != 0)
    {
        v12 = ((long long)v15->field_2c);
        if (((int)v15->field_2c) >= 0)
        {
            v2 = close(v12);
            if (v2 != 0)
            {
                v16 = ((long long)*(__errno_location()));
                /* goto 4253821; */
            }
        }
    }
    else if (((long long)(v2 & 4)) == 0)
    {
        v8 = fchdir(v15->field_28);
        if (v8 == 0)
        {
            v2 = close(v15->field_28);
            if (v2 != 0)
            {
                v11 = __errno_location();
            }
        }
        else
        {
            v16 = ((long long)v1);
            v11 = __errno_location();
            v2 = close(v15->field_28);
        }
        if ((v8 == 0 || ((int)v16) == 0) && (v8 == 0 || v2 != 0) && (v8 != 0 || v2 != 0))
        {
            v16 = ((long long)v11->field_0);
            /* goto 4253821; */
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
    v13 = v15->field_58;
    if (!((((short)v15->field_48) & 258) != 0))
    {
        rpl_free();
    }
    else if (v13 != 0)
    {
        hash_free();
    }
    rpl_free();
    if (((int)v16) == 0)
    {
        v6 = v16;
        return v6;
    }
    *(__errno_location() + None) = ((int)v16);
    v16 = -1;
    v6 = v16;
    return v6;
}
