typedef struct struct_1 {
    struct struct_2 *field_0;
    unsigned long long field_8;
    char padding_10[8];
    unsigned long long field_18;
    unsigned long long field_20;
    char padding_28[32];
    unsigned int field_48;
    char field_49;
    char padding_4a[14];
    unsigned long long field_58;
} struct_1;

typedef struct struct_4 {
    char padding_0[8];
    struct struct_5 *field_8;
    unsigned long long field_10;
    char padding_18[24];
    unsigned long long field_30;
    unsigned long long field_38;
    unsigned int field_40;
    unsigned int field_44;
    unsigned long long field_48;
    char padding_50[8];
    unsigned long long field_58;
    unsigned long long field_60;
    unsigned short field_68;
    char field_6a;
    char padding_6b[1];
    unsigned short field_6c;
    char padding_6e[2];
    unsigned long long field_70;
    char padding_78[40];
    unsigned long long field_a0;
} struct_4;

typedef struct struct_3 {
    unsigned long long field_0;
    unsigned long long field_8;
    char padding_10[8];
    unsigned long long field_18;
    unsigned long long field_20;
    char padding_28[32];
    unsigned int field_48;
    char field_49;
    char padding_4a[14];
    unsigned long long field_58;
} struct_3;

typedef struct struct_10 {
    char padding_0[8];
    struct struct_9 *field_8;
    unsigned long long field_10;
    char padding_18[24];
    unsigned long long field_30;
    unsigned long long field_38;
    unsigned int field_40;
    unsigned int field_44;
    unsigned long long field_48;
    char padding_50[8];
    unsigned long long field_58;
    unsigned long long field_60;
    unsigned short field_68;
    char field_6a;
    char padding_6b[1];
    unsigned short field_6c;
    char padding_6e[2];
    unsigned long long field_70;
    char padding_78[40];
    unsigned long long field_a0;
} struct_10;

typedef struct struct_9 {
    char padding_0[24];
    unsigned long long field_18;
    char padding_20[32];
    unsigned int field_40;
    unsigned int field_44;
    unsigned long long field_48;
    char padding_50[8];
    unsigned long long field_58;
    char padding_60[8];
    unsigned short field_68;
    unsigned short field_6a;
} struct_9;

typedef struct struct_2 {
    char padding_0[8];
    unsigned long long field_8;
    unsigned long long field_10;
    char padding_18[24];
    unsigned long long field_30;
    unsigned long long field_38;
    unsigned int field_40;
    unsigned int field_44;
    unsigned long long field_48;
    char padding_50[8];
    unsigned long long field_58;
    unsigned long long field_60;
    unsigned short field_68;
    char field_6a;
    char padding_6b[1];
    unsigned short field_6c;
    char padding_6e[2];
    unsigned long long field_70;
    char padding_78[40];
    unsigned long long field_a0;
} struct_2;

typedef struct struct_6 {
    char padding_0[1];
    char field_1;
} struct_6;

typedef struct struct_7 {
    char padding_0[8];
    struct struct_8 *field_8;
    unsigned long long field_10;
    char padding_18[24];
    unsigned long long field_30;
} struct_7;

int rpl_fts_read()
{
    BOT tmp_4;  // tmp #4
    BOT tmp_11;  // tmp #11
    BOT tmp_9;  // tmp #9
    struct_7 *|unsigned int|unsigned long long v1;  // rax
    char *v10;  // rdx
    struct_2 *|unsigned long long v11;  // rbx
    struct_3 *v12;  // rbp
    unsigned int|void *|struct_1 *|unsigned long long v13;  // rdi
    unsigned long v14;  // rdi
    unsigned long long v15;  // rdi
    struct_4 *|unsigned long long v16;  // r12
    struct_10 *|void * v17;  // r13
    struct_6 *|struct_9 * v18;  // r14
    unsigned short v19;  // cc_dep1
    unsigned long long v2;  // rax
    struct_2 *v6;  // rax
    unsigned int|unsigned long long v8;  // rax

    v16 = v13->field_0;
    if (v13->field_0 != 0)
    {
        v12 = v13;
        if (((long long)(((char)(v13->field_48 >> 8)) & 32)) == 0)
        {
            v1 = ((long long)v16->field_6c);
            v16->field_6c = 3;
            tmp_4 = v1;
            if (tmp_4 != 1)
            {
                if (v13->field_0->field_6c != 2)
                {
                }
                else
                {
                    if (((long long)v13->field_0->field_68) - 12 << 48 > 0x1000000000000)
                    {
                    }
                    else
                    {
                        v1 = fts_stat();
                        v16->field_68 = v1;
                        if (v1 != 1)
                        {
                            v13->field_0 = v16;
                            if (v1 != 11)
                            {
                                v6 = v16;
                                return v6;
                            }
                        }
                        else if (((long long)(((char)v13->field_48) & 4)) != 0)
                        {
                            v13->field_0 = v16;
                        }
                        else
                        {
                            v1 = diropen.isra.0();
                            v16->field_44 = v1;
                            if (v1 >= 0)
                            {
                                v16->field_6a = v16->field_6a | 2;
                                v1 = ((long long)v16->field_68);
                                /* goto 4254899; */
                            }
                            else
                            {
                                v1 = ((int)*(__errno_location()));
                                v16->field_68 = 7;
                                v16->field_40 = v1;
                                v13->field_0 = v16;
                                v6 = v16;
                                return v6;
                            }
                        }
                        if (v1 == 11)
                        {
                            /* goto 4255024; */
                        }
                    }
                }
                if (v13->field_0->field_68 == 1)
                {
                    if (v13->field_0->field_6c == 2 && ((long long)v13->field_0->field_68) - 12 << 48 > 0x1000000000000 || v13->field_0->field_6c != 2 && v13->field_0->field_6c != 4)
                    {
                        if (v16->field_70 == v13->field_18 || ((long long)(((char)v13->field_48) & 64)) == 0)
                        {
                            if (v13->field_8 != 0)
                            {
                                if (((long long)(((char)(v13->field_48 >> 8)) & 16)) == 0)
                                {
                                    v1 = fts_safe_changedir();
                                    if (v1 != 0)
                                    {
                                        v1 = ((int)*(__errno_location()));
                                        v16->field_6a = v16->field_6a | 1;
                                        v16->field_40 = v1;
                                        v16 = v12->field_8;
                                        if (v12->field_8 != 0)
                                        {
                                            v1 = v13->field_8;
                                            do
                                            {
                                                v1->field_30 = v1->field_8->field_30;
                                                v1 = v1->field_10;
                                            }
                                            while (v1 != 0);
                                            /* goto 4255187; */
                                        }
                                    }
                                    else
                                    {
                                        v16 = v13->field_8;
                                        /* goto 4255187; */
                                    }
                                }
                                else
                                {
                                    v13->field_48 = ((int)v13->field_48);
                                    fts_lfree();
                                    v13->field_8 = 0;
                                }
                            }
                            if (v13->field_8 == 0 || ((long long)(((char)(v13->field_48 >> 8)) & 16)) != 0)
                            {
                                v1 = fts_build();
                                v13->field_8 = v16;
                                if (v16 != 0)
                                {
                                    v16 = v1;
                                    /* goto 4255187; */
                                }
                                else if ((((short)v13->field_48) & 0x2000) != 0)
                                {
                                    v6 = v16;
                                    return v6;
                                }
                                else if (!(v16->field_40 != 0))
                                {
                                    leave_dir.isra.0();
                                    v6 = v16;
                                    return v6;
                                }
                                else if (v16->field_68 != 4)
                                {
                                    v16->field_68 = 7;
                                    leave_dir.isra.0();
                                    v6 = v16;
                                    return v6;
                                }
                                else
                                {
                                    leave_dir.isra.0();
                                    v6 = v16;
                                    return v6;
                                }
                            }
                        }
                    }
                    if (...)
                    {
                        if (((long long)(v16->field_6a & 2)) != 0)
                        {
                            close(v16->field_44);
                        }
                        if (v13->field_8 != 0)
                        {
                            fts_lfree();
                            v13->field_8 = 0;
                            v16->field_68 = 6;
                            leave_dir.isra.0();
                            v6 = v16;
                            return v6;
                        }
                        v16->field_68 = 6;
                        leave_dir.isra.0();
                        v6 = v16;
                        return v6;
                    }
                }
                else if (v13->field_0->field_6c != 2 || ((long long)v13->field_0->field_68) - 12 << 48 > 0x1000000000000)
                {
                    while (true)
                    {
                        v17 = v16;
                        v16 = v16->field_10;
                        if (v16 != 0)
                        {
                            v13->field_0 = v16;
                            rpl_free();
                            if (v16->field_58 != 0)
                            {
                                v1 = ((long long)v16->field_6c);
                                v1 = fts_stat();
                                v16->field_68 = v1;
                                if (v1 == 1 && ((long long)(((char)v13->field_48) & 4)) == 0)
                                {
                                    v1 = diropen.isra.0();
                                    v16->field_44 = v1;
                                    if (v1 >= 0)
                                    {
                                        v16->field_6a = v16->field_6a | 2;
                                    }
                                    else
                                    {
                                        v1 = ((int)*(__errno_location()));
                                        v16->field_68 = 7;
                                        v16->field_40 = v1;
                                    }
                                }
                                v16->field_6c = 3;
                                break;
                            }
                            else
                            {
                                v1 = restore_initial_cwd();
                                if (v1 == 0)
                                {
                                    v15 = *(v13 + 0x58);
                                    if ((((short)v12->field_48) & 258) == 0)
                                    {
                                        rpl_free();
                                    }
                                    else if (v15 != 0)
                                    {
                                        hash_free();
                                    }
                                    tmp_11 = v16->field_60;
                                    v13 = v12->field_20;
                                    v18 = v16 + 0x100;
                                    v16->field_48 = v16->field_60;
                                    memmove(v13, v16 + 0x100, tmp_11 + 1);
                                    v2 = strrchr();
                                    if (v2 != 0)
                                    {
                                        if (v18 != v2 || v18->field_1 != 0)
                                        {
                                            v17 = v2 + 1;
                                            v11 = strlen(v2 + 1);
                                            memmove(v18, v17, v11 + 1);
                                            v16->field_60 = v11;
                                        }
                                    }
                                    tmp_9 = v12->field_20;
                                    v16->field_38 = v12->field_20;
                                    v16->field_30 = tmp_9;
                                    setup_dir.isra.0();
                                    v1 = ((long long)v16->field_68);
                                    break;
                                }
                                else
                                {
                                    v12->field_48 = v12->field_48 | 0x2000;
                                    v6 = v16;
                                    return v6;
                                }
                            }
                        }
                        else
                        {
                            v18 = v17->field_8;
                            if (v17->field_8->field_18 != 0)
                            {
                                v10 = v12->field_20;
                                tmp_11 = v18->field_48;
                                v12->field_0 = v18;
                                *(v10 + tmp_11) = 0;
                                v11 = (long long)fts_build();
                                if (v16 != 0)
                                {
                                    v16 = v11;
                                    rpl_free();
                                    break;
                                }
                                else if (((long long)(*(v12 + 0x49) & 32)) != 0)
                                {
                                    v6 = v16;
                                    return v6;
                                }
                                else
                                {
                                    v18 = v17->field_8;
                                    /* goto 4254244; */
                                }
                            }
                            if (v17->field_8->field_18 == 0 || ((long long)(*(v12 + 0x49) & 32)) == 0 && v16 == 0)
                            {
                                v13->field_0 = v18;
                                rpl_free();
                                if (v18->field_58 != 18446744069414584319)
                                {
                                    *(v13->field_20 + v18->field_48) = 0;
                                    if (v18->field_58 != 0)
                                    {
                                        v1 = ((long long)v18->field_6a);
                                        if (((long long)(((char)v18->field_6a) & 2)) != 0)
                                        {
                                            v8 = ((long long)v13->field_48);
                                            v14 = ((long long)v18->field_44);
                                            if (((long long)(((char)v12->field_48) & 4)) == 0)
                                            {
                                                if (((long long)(v8 & 2)) != 0)
                                                {
                                                    cwd_advance_fd();
                                                    v14 = ((long long)v18->field_44);
                                                }
                                                else
                                                {
                                                    v8 = fchdir(v14);
                                                    if (v8 != 0)
                                                    {
                                                        v8 = ((int)*(__errno_location()));
                                                        v18->field_40 = v8;
                                                        v12->field_48 = v12->field_48 | 0x2000;
                                                    }
                                                    v14 = ((long long)v18->field_44);
                                                }
                                            }
                                            close(v14);
                                            v13 = ((long long)v12->field_48);
                                        }
                                        else if (((long long)(v1 & 1)) == 0)
                                        {
                                            v1 = fts_safe_changedir();
                                            if (v1 == 0)
                                            {
                                                /* goto 4254323; */
                                            }
                                        }
                                    }
                                    else
                                    {
                                        v1 = restore_initial_cwd();
                                    }
                                    if (((long long)(((char)v18->field_6a) & 2)) == 0 || v18->field_58 == 0)
                                    {
                                        if ((v18->field_58 == 0 || ((long long)(v1 & 1)) == 0) && (v18->field_58 == 0 || v1 != 0) && (v1 != 0 || v18->field_58 != 0))
                                        {
                                            v1 = ((int)*(__errno_location()));
                                            v13 = ((long long)(v13->field_48 | 0x2000));
                                            v19 = ((short)v18->field_68);
                                            v18->field_40 = v1;
                                            v12->field_48 = ((int)v13);
                                            if (v19 == 2)
                                            {
                                                v6 = v16;
                                                return v6;
                                            }
                                        }
                                        if ((v1 == 0 || v18->field_58 != 0) && (v1 == 0 || v18->field_58 == 0 || ((long long)(v1 & 1)) != 0))
                                        {
                                            v13 = ((long long)v13->field_48);
                                        }
                                    }
                                    if (...)
                                    {
                                        if (v18->field_40 == 0)
                                        {
                                            v18->field_68 = 6;
                                            leave_dir.isra.0();
                                            v13 = ((int)v12->field_48);
                                        }
                                        else
                                        {
                                            v18->field_68 = 7;
                                        }
                                    }
                                    if ((((short)((unsigned int)v13)) & 0x2000) != 0 && (v1 == 0 || v19 != 2 || v18->field_58 != 0) && (v1 == 0 || v18->field_58 == 0 || ((long long)(((char)v18->field_6a) & 2)) != 0 || v19 != 2 || ((long long)(v1 & 1)) != 0))
                                    {
                                        v6 = v16;
                                        return v6;
                                        v6 = v16;
                                        return v6;
                                    }
                                }
                                rpl_free();
                                *(__errno_location() + None) = 0;
                                v13->field_0 = 0;
                                v6 = v16;
                                return v6;
                            }
                        }
                    }
                    if (v16->field_58 != 0 && v16->field_6c != 4 && v16 != 0)
                    {
                        tmp_11 = (*(v16->field_8->field_38 + v16->field_8->field_48 + 1) != 47? v16->field_8->field_48 : v16->field_8->field_48 - 1) + v12->field_20;
                        *((*(v16->field_8->field_38 + v16->field_8->field_48 + 1) != 47? v16->field_8->field_48 : v16->field_8->field_48 - 1) + v12->field_20) = 47;
                        memmove(tmp_11 + 1, v16 + 0x100, v16->field_60 + 1);
                        v1 = ((long long)v16->field_68);
                    }
                    else if (v16->field_58 == 0 && v1 == 0 && v16 != 0)
                    {
                        v12->field_0 = v16;
                    }
                }
                if (...)
                {
                    v13->field_8 = 0;
                }
                if (...)
                {
                    tmp_11 = (*(v16->field_8->field_38 + v16->field_8->field_48 + 1) != 47? v16->field_8->field_48 : v16->field_8->field_48 - 1) + v12->field_20;
                    *((*(v16->field_8->field_38 + v16->field_8->field_48 + 1) != 47? v16->field_8->field_48 : v16->field_8->field_48 - 1) + v12->field_20) = 47;
                    memmove(tmp_11 + 1, v16 + 0x100, v16->field_60 + 1);
                    v1 = ((long long)v16->field_68);
                }
                if (...)
                {
                    v12->field_0 = v16;
                }
                if (...)
                {
                    v1 = v16->field_a0;
                    if (!(v16->field_a0 != 2))
                    {
                        v1 = fts_stat();
                        v16->field_68 = v1;
                    }
                    else if (v1 == 1)
                    {
                        v6 = v16;
                        return v6;
                    }
                }
                if (...)
                {
                    if (v1 != 1)
                    {
                        v6 = v16;
                        return v6;
                    }
                }
                if (...)
                {
                    if (v16->field_58 == 0)
                    {
                        v12->field_18 = v16->field_70;
                    }
                    v1 = enter_dir.isra.0();
                    if (((long long)v1) != 0)
                    {
                        v6 = v16;
                        return v6;
                    }
                    *(__errno_location() + None) = 12;
                    v6 = v16;
                    return v6;
                }
            }
            v16->field_68 = (short)fts_stat();
            v6 = v16;
            return v6;
        }
        v6 = v16;
        return v6;
    }
    v6 = v16;
    return v6;
}
