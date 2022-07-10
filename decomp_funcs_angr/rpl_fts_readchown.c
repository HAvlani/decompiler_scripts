typedef struct struct_0 {
    struct struct_1 *field_0;
    unsigned long long field_8;
    char padding_10[8];
    unsigned long long field_18;
    unsigned long long field_20;
    char padding_28[32];
    unsigned int field_48;
    char field_49;
    char padding_4a[14];
    unsigned long long field_58;
} struct_0;

typedef struct struct_5 {
    char padding_0[8];
    struct struct_6 *field_8;
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
} struct_5;

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
    struct struct_4 *field_8;
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

typedef struct struct_4 {
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
} struct_4;

typedef struct struct_9 {
    char padding_0[1];
    char field_1;
} struct_9;

typedef struct struct_7 {
    char padding_0[8];
    struct struct_8 *field_8;
    unsigned long long field_10;
    char padding_18[24];
    unsigned long long field_30;
} struct_7;

typedef struct struct_1 {
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
} struct_1;

int rpl_fts_read()
{
    BOT tmp_4;  // tmp #4
    BOT tmp_11;  // tmp #11
    BOT tmp_9;  // tmp #9
    struct_7 *|unsigned long long|unsigned int v1;  // rax
    char *v10;  // rdx
    unsigned long long v11;  // rbx
    struct_3 *v12;  // rbp
    unsigned long long v13;  // rdi
    struct_0 *|void *|unsigned long long|unsigned int v14;  // edi
    unsigned long v15;  // rdi
    unsigned long long|struct_5 * v16;  // r12
    struct_10 *|void * v17;  // r13
    struct_9 *|struct_4 * v18;  // r14
    unsigned short v19;  // cc_dep1
    struct_1 *v2;  // rax
    unsigned long long v6;  // rax
    unsigned long long|unsigned int v7;  // rax

    v16 = v14->field_0;
    if (v14->field_0 != 0)
    {
        v12 = v14;
        if (((long long)(((char)(v14->field_48 >> 8)) & 32)) == 0)
        {
            v1 = ((long long)v16->field_6c);
            v16->field_6c = 3;
            tmp_4 = v1;
            if (tmp_4 != 1)
            {
                if (v14->field_0->field_6c != 2)
                {
                }
                else
                {
                    if (((long long)v14->field_0->field_68) - 12 << 48 > 0x1000000000000)
                    {
                    }
                    else
                    {
                        v1 = fts_stat();
                        v16->field_68 = v1;
                        if (v1 != 1)
                        {
                            v14->field_0 = v16;
                            if (v1 != 11)
                            {
                                v2 = v16;
                                return v2;
                            }
                        }
                        else if (((long long)(((char)v14->field_48) & 4)) != 0)
                        {
                            v14->field_0 = v16;
                        }
                        else
                        {
                            v1 = diropen.isra.0();
                            v16->field_44 = v1;
                            if (v1 >= 0)
                            {
                                v16->field_6a = v16->field_6a | 2;
                                v1 = ((long long)v16->field_68);
                                /* goto 4220291; */
                            }
                            else
                            {
                                v1 = ((int)*(__errno_location()));
                                v16->field_68 = 7;
                                v16->field_40 = v1;
                                v14->field_0 = v16;
                                v2 = v16;
                                return v2;
                            }
                        }
                        if (v1 == 11)
                        {
                            /* goto 0x406600; */
                        }
                    }
                }
                if (v14->field_0->field_68 == 1)
                {
                    if (v14->field_0->field_6c == 2 && ((long long)v14->field_0->field_68) - 12 << 48 > 0x1000000000000 || v14->field_0->field_6c != 4 && v14->field_0->field_6c != 2)
                    {
                        if (v16->field_70 == v14->field_18 || ((long long)(((char)v14->field_48) & 64)) == 0)
                        {
                            if (v14->field_8 != 0)
                            {
                                if (((long long)(((char)(v14->field_48 >> 8)) & 16)) == 0)
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
                                            v1 = v14->field_8;
                                            do
                                            {
                                                v1->field_30 = v1->field_8->field_30;
                                                v1 = v1->field_10;
                                            }
                                            while (v1 != 0);
                                            /* goto 4220579; */
                                        }
                                    }
                                    else
                                    {
                                        v16 = v14->field_8;
                                        /* goto 4220579; */
                                    }
                                }
                                else
                                {
                                    v14->field_48 = ((int)v14->field_48);
                                    fts_lfree();
                                    v14->field_8 = 0;
                                }
                            }
                            if (v14->field_8 == 0 || ((long long)(((char)(v14->field_48 >> 8)) & 16)) != 0)
                            {
                                v1 = fts_build();
                                v14->field_8 = v16;
                                if (v16 != 0)
                                {
                                    v16 = v1;
                                    /* goto 4220579; */
                                }
                                else if ((((short)v14->field_48) & 0x2000) != 0)
                                {
                                    v2 = v16;
                                    return v2;
                                }
                                else if (!(v16->field_40 != 0))
                                {
                                    leave_dir.isra.0();
                                    v2 = v16;
                                    return v2;
                                }
                                else if (v16->field_68 != 4)
                                {
                                    v16->field_68 = 7;
                                    leave_dir.isra.0();
                                    v2 = v16;
                                    return v2;
                                }
                                else
                                {
                                    leave_dir.isra.0();
                                    v2 = v16;
                                    return v2;
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
                        if (v14->field_8 != 0)
                        {
                            fts_lfree();
                            v14->field_8 = 0;
                            v16->field_68 = 6;
                            leave_dir.isra.0();
                            v2 = v16;
                            return v2;
                        }
                        v16->field_68 = 6;
                        leave_dir.isra.0();
                        v2 = v16;
                        return v2;
                    }
                }
                else if (((long long)v14->field_0->field_68) - 12 << 48 > 0x1000000000000 || v14->field_0->field_6c != 2)
                {
                    while (true)
                    {
                        v17 = v16;
                        v16 = v16->field_10;
                        if (v16 != 0)
                        {
                            v14->field_0 = v16;
                            rpl_free();
                            if (v16->field_58 != 0)
                            {
                                v1 = ((long long)v16->field_6c);
                                v1 = fts_stat();
                                v16->field_68 = v1;
                                if (((long long)(((char)v14->field_48) & 4)) == 0 && v1 == 1)
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
                                    v13 = *(v14 + 0x58);
                                    if ((((short)v12->field_48) & 258) == 0)
                                    {
                                        rpl_free();
                                    }
                                    else if (v13 != 0)
                                    {
                                        hash_free();
                                    }
                                    tmp_11 = v16->field_60;
                                    v14 = v12->field_20;
                                    v18 = v16 + 0x100;
                                    v16->field_48 = v16->field_60;
                                    memmove(v14, v16 + 0x100, tmp_11 + 1);
                                    v6 = strrchr();
                                    if (v6 != 0)
                                    {
                                        if (v18->field_1 != 0 || v18 != v6)
                                        {
                                            v17 = v6 + 1;
                                            v11 = strlen(v6 + 1);
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
                                    v2 = v16;
                                    return v2;
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
                                    v2 = v16;
                                    return v2;
                                }
                                else
                                {
                                    v18 = v17->field_8;
                                    /* goto 4219636; */
                                }
                            }
                            if (v17->field_8->field_18 == 0 || v16 == 0 && ((long long)(*(v12 + 0x49) & 32)) == 0)
                            {
                                v14->field_0 = v18;
                                rpl_free();
                                if (v18->field_58 != 18446744069414584319)
                                {
                                    *(v14->field_20 + v18->field_48) = 0;
                                    if (v18->field_58 != 0)
                                    {
                                        v1 = ((long long)v18->field_6a);
                                        if (((long long)(((char)v18->field_6a) & 2)) != 0)
                                        {
                                            v7 = ((long long)v14->field_48);
                                            v15 = ((long long)v18->field_44);
                                            if (((long long)(((char)v12->field_48) & 4)) == 0)
                                            {
                                                if (((long long)(v7 & 2)) != 0)
                                                {
                                                    cwd_advance_fd();
                                                    v15 = ((long long)v18->field_44);
                                                }
                                                else
                                                {
                                                    v7 = fchdir(v15);
                                                    if (v7 != 0)
                                                    {
                                                        v7 = ((int)*(__errno_location()));
                                                        v18->field_40 = v7;
                                                        v12->field_48 = v12->field_48 | 0x2000;
                                                    }
                                                    v15 = ((long long)v18->field_44);
                                                }
                                            }
                                            close(v15);
                                            v14 = ((long long)v12->field_48);
                                        }
                                        else if (((long long)(v1 & 1)) == 0)
                                        {
                                            v1 = fts_safe_changedir();
                                            if (v1 == 0)
                                            {
                                                /* goto 4219715; */
                                            }
                                        }
                                    }
                                    else
                                    {
                                        v1 = restore_initial_cwd();
                                    }
                                    if ((((long long)(v1 & 1)) == 0 || v18->field_58 == 0) && (v18->field_58 == 0 || ((long long)(((char)v18->field_6a) & 2)) == 0) && (v18->field_58 == 0 || v1 != 0) && (v18->field_58 != 0 || v1 != 0))
                                    {
                                        v1 = ((int)*(__errno_location()));
                                        v14 = ((long long)(v14->field_48 | 0x2000));
                                        v19 = ((short)v18->field_68);
                                        v18->field_40 = v1;
                                        v12->field_48 = ((int)v14);
                                        if (v19 == 2)
                                        {
                                            v2 = v16;
                                            return v2;
                                        }
                                    }
                                    if ((v18->field_58 == 0 || ((long long)(((char)v18->field_6a) & 2)) == 0) && (v1 == 0 || v18->field_58 != 0) && (v18->field_58 == 0 || v1 == 0 || ((long long)(v1 & 1)) != 0))
                                    {
                                        v14 = ((long long)v14->field_48);
                                    }
                                    if (...)
                                    {
                                        if (v18->field_40 == 0)
                                        {
                                            v18->field_68 = 6;
                                            leave_dir.isra.0();
                                            v14 = ((int)v12->field_48);
                                        }
                                        else
                                        {
                                            v18->field_68 = 7;
                                        }
                                    }
                                    if ((((short)v14) & 0x2000) != 0 && (v1 == 0 || v18->field_58 != 0 || v19 != 2) && (v18->field_58 == 0 || v1 == 0 || ((long long)(v1 & 1)) != 0 || v19 != 2 || ((long long)(((char)v18->field_6a) & 2)) != 0))
                                    {
                                        v2 = v16;
                                        return v2;
                                        v2 = v16;
                                        return v2;
                                    }
                                }
                                rpl_free();
                                *(__errno_location() + None) = 0;
                                v14->field_0 = 0;
                                v2 = v16;
                                return v2;
                            }
                        }
                    }
                    if (v16 != 0 && v16->field_6c != 4 && v16->field_58 != 0)
                    {
                        tmp_11 = (*(v16->field_8->field_38 + v16->field_8->field_48 + 1) != 47? v16->field_8->field_48 : v16->field_8->field_48 - 1) + v12->field_20;
                        *((*(v16->field_8->field_38 + v16->field_8->field_48 + 1) != 47? v16->field_8->field_48 : v16->field_8->field_48 - 1) + v12->field_20) = 47;
                        memmove(tmp_11 + 1, v16 + 0x100, v16->field_60 + 1);
                        v1 = ((long long)v16->field_68);
                    }
                    else if (v1 == 0 && v16->field_58 == 0 && v16 != 0)
                    {
                        v12->field_0 = v16;
                    }
                }
                if (...)
                {
                    v14->field_8 = 0;
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
                        v2 = v16;
                        return v2;
                    }
                }
                if (...)
                {
                    if (v1 != 1)
                    {
                        v2 = v16;
                        return v2;
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
                        v2 = v16;
                        return v2;
                    }
                    *(__errno_location() + None) = 12;
                    v2 = v16;
                    return v2;
                }
            }
            v16->field_68 = (short)fts_stat();
            v2 = v16;
            return v2;
        }
        v2 = v16;
        return v2;
    }
    v2 = v16;
    return v2;
}
