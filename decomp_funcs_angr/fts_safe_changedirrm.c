typedef struct struct_2 {
    char padding_0[72];
    unsigned int field_48;
} struct_2;

typedef struct struct_0 {
    char field_0;
    char field_1;
    char field_2;
} struct_0;

int fts_safe_changedir()
{
    char v0;  // [bp-0xd9]
    char v1;  // [bp-0xd8]
    struct_2 *v10;  // rdi
    unsigned long|unsigned int v11;  // r13d
    struct_2 *v12;  // r14
    unsigned long|unsigned long long|unsigned int v13;  // r15
    unsigned long v2;  // [bp-0xd0]
    unsigned long|unsigned long long|unsigned int v4;  // rax
    unsigned long long|struct_0 * v5;  // rcx
    unsigned long v6;  // rdx
    struct_0 *v7;  // rbx
    unsigned long long|unsigned int v8;  // rbp
    unsigned long long v9[16];  // rsi

    v12 = v10;
    v11 = v6;
    v7 = v5;
    v8 = ((long long)v10->field_48);
    if (v5 != 0)
    {
        v4 = ((long long)v5->field_0);
        if (v5->field_0 == 46)
        {
            if (v5->field_1 == 46)
            {
                if (v5->field_2 == 0)
                {
                    if (((int)(v10->field_48 & 4)) == 0)
                    {
                        if (!(((int)v6) < 0))
                        {
                            v13 = v6;
                            v5 = 1;
                            if (((long long)(((char)v10->field_48) & 2)) != 0)
                            {
                                /* goto 4216768; */
                            }
                        }
                        else if ((((short)((int)v10->field_48)) & 0x200) != 0)
                        {
                            v5 = (long long)i_ring_empty();
                            if (((long long)v5) == 0)
                            {
                                v8 = ((long long)v10->field_48);
                                v13 = i_ring_pop();
                                if (v13 < 0)
                                {
                                    /* goto 4216984; */
                                }
                                else
                                {
                                    v11 = v13;
                                    v5 = 1;
                                    if (((long long)(((char)v10->field_48) & 2)) != 0)
                                    {
                                        /* goto 4216768; */
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (v5 == 0 || v5->field_1 != 46 || v5->field_2 != 0 || v5->field_0 != 46)
    {
        if (((int)(v10->field_48 & 4)) == 0)
        {
            if (((int)v6) >= 0)
            {
                v13 = v6;
                v5 = 0;
            }
            else
            {
                v5 = 0;
                /* goto 4216711; */
            }
        }
    }
    if (((int)(v10->field_48 & 4)) != 0)
    {
        if (!((((short)v10->field_48) & 0x200) != 0))
        {
            return v9;
        }
        else if (((int)v6) < 0)
        {
            return v9;
        }
        else
        {
            close(((int)v6));
            return v9;
        }
    }
    if (...)
    {
        v5 = 1;
    }
    if (...)
    {
        v0 = v5;
        v13 = (long long)diropen.isra.0();
        if (((int)v13) >= 0)
        {
            v8 = ((long long)v12->field_48);
            v5 = ((long long)v0);
            if (((long long)(((char)v12->field_48) & 2)) != 0)
            {
                /* goto 4216768; */
            }
        }
        else
        {
            return v9;
        }
    }
    if (...)
    {
        if (v7 != 0)
        {
            v4 = ((int)v7->field_0);
        }
    }
    if (...)
    {
        v0 = v5;
        v4 = __fxstat(0x1, v13, ((int)&v1));
        if (v4 == 0)
        {
            if (v9[14] == v1)
            {
                if (v9[15] == v2)
                {
                    v8 = ((int)v10->field_48);
                }
            }
        }
    }
    if (...)
    {
        *(__errno_location() + None) = 2;
    }
    if (...)
    {
        if ((((short)v8) & 0x200) == 0)
        {
            fchdir(v13);
            if (v11 >= 0)
            {
                return v9;
            }
            v8 = ((int)v7->field_0);
            close(v13);
            *(__errno_location() + None) = v8;
            return v9;
        }
        cwd_advance_fd();
        return v9;
    }
    if (...)
    {
        if (v11 >= 0)
        {
            return v9;
        }
        v8 = ((int)v7->field_0);
        close(v13);
        *(__errno_location() + None) = v8;
        return v9;
    }
}
