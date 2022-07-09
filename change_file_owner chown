typedef struct struct_1 {
    char padding_0[32];
    unsigned long long field_20;
    char padding_28[8];
    unsigned long long field_30;
    unsigned long long field_38;
    unsigned int field_40;
    char padding_44[20];
    unsigned long long field_58;
    char padding_60[8];
    unsigned short field_68;
    char padding_6a[6];
    unsigned long long field_70;
    unsigned long long field_78;
    char padding_80[8];
    unsigned int field_88;
} struct_1;

typedef struct struct_3 {
    unsigned int field_0;
    char field_4;
    char padding_5[3];
    struct struct_4 *field_8;
    char field_10;
    char field_11;
    char padding_12[6];
    unsigned long long field_18;
    unsigned long long field_20;
} struct_3;

typedef struct struct_5 {
    unsigned int field_0;
    char field_4;
    char padding_5[3];
    unsigned long long field_8;
    char field_10;
    char field_11;
    char padding_12[6];
    unsigned long long field_18;
    unsigned long long field_20;
} struct_5;

typedef struct struct_6 {
    unsigned long long field_0;
    unsigned long long field_8;
    char padding_10[8];
    unsigned int field_18;
    unsigned int field_1c;
    unsigned int field_20;
} struct_6;

typedef struct struct_2 {
    unsigned int field_0;
} struct_2;

typedef struct struct_0 {
    char padding_0[44];
    unsigned int field_2c;
} struct_0;

extern unsigned int g_40cd48;
extern unsigned int g_40cd78;
extern unsigned int g_40cdb8;
extern unsigned int g_40cdf0;
extern unsigned int g_40ceb0;
extern unsigned int g_40cee8;
extern unsigned int g_40cf10;
extern unsigned int g_40cf38;
extern unsigned int g_40cf68;
extern unsigned int g_40cf90;
extern unsigned int g_40cfb8;
extern unsigned int g_40cfe0;
extern unsigned int g_40d000;
extern unsigned int g_40d05a;
extern unsigned int g_40d070;
extern unsigned int g_40d089;
extern unsigned int g_40d09e;
extern unsigned int g_40d0bc;
extern unsigned int g_40d0d8;

int change_file_owner()
{
    BOT tmp_28;  // tmp #28
    BOT tmp_5;  // tmp #5
    BOT tmp_51;  // tmp #51
    BOT tmp_53;  // tmp #53
    char v0[2];  // [bp-0x1a0]
    unsigned long v1;  // [bp-0x198]
    struct_3 *v10;  // [bp+0x8]
    struct_2 *|unsigned long long|unsigned int v11;  // rax
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    unsigned long|char *|unsigned long long|unsigned int v2;  // [bp-0x190]
    unsigned long|unsigned long long v21;  // rcx
    unsigned long|char *|unsigned long long|unsigned int v22;  // rdx
    unsigned int v23;  // edx
    char * v24;  // rdx
    struct_5 *|unsigned long long v25;  // rbx
    struct_1 *v26;  // rbp
    struct_1 *v27;  // rsi
    struct_0 *v28;  // rdi
    unsigned int v29;  // edi
    unsigned long|struct_2 *|unsigned long long|unsigned int v3;  // [bp-0x188]
    unsigned long|unsigned long long|unsigned int v30;  // r8
    unsigned long|unsigned int v31;  // r9
    unsigned int v32;  // r9d
    unsigned long long v33;  // r10
    unsigned long long|char v34;  // r12b
    struct_6 *|unsigned long long v35;  // r13
    unsigned long long|unsigned int v36;  // r14
    char *|unsigned long long|unsigned int v37;  // r15
    unsigned long long|unsigned int v4;  // [bp-0x180]
    char v5;  // [bp-0x178]
    char v6;  // [bp-0xe8]
    unsigned long v7;  // [bp-0xe0]
    unsigned int v8;  // [bp-0xcc]

    v37 = v30;
    v36 = v23;
    v26 = v27;
    v22 = ((long long)v27->field_68);
    v25 = v10;
    v0 = v27->field_38;
    tmp_28 = v22;
    if (((long long)tmp_28) << 48 <= 0xa000000000000)
    {
        v21 = ((long long)v27->field_68);
        /* goto ((long long)*(4247828 + ((long long)v27->field_68) * 4)) + 4247828; */
    }
    if (v10->field_4 == 0)
    {
        v15 = r12<8>;
        return v15;
    }
    if (((long long)v10->field_11) == 0)
    {
        v21 = (long long)quotearg_n_style_colon();
        /* goto 4209024; */
    }
    if (((long long)v10->field_4) != 0)
    {
        if (v10->field_8 == 0)
        {
            v15 = r12<8>;
            return v15;
        }
        else if (v27->field_78 != v10->field_8->field_0)
        {
            v15 = r12<8>;
            return v15;
        }
        else if (v27->field_70 != v10->field_8->field_8)
        {
            v15 = r12<8>;
            return v15;
        }
        else
        {
            if (v0[0] == 47)
            {
                if (v0[1] == 0)
                {
                    v34 = (long long)quotearg_style();
                    error(0x0, 0x0, dcgettext(0x0, &g_40cd48, 0x5));
                    error(0x0, 0x0, dcgettext(0x0, &g_40cdb8, 0x5));
                    rpl_fts_set();
                    rpl_fts_read();
                    v15 = r12<8>;
                    return v15;
                }
            }
            if (v0[1] != 0 || v0[0] != 47)
            {
                v25 = (long long)quotearg_n_style();
                v34 = (long long)quotearg_n_style();
                error(0x0, 0x0, dcgettext(0x0, &g_40cd78, 0x5));
                error(0x0, 0x0, dcgettext(0x0, &g_40cdb8, 0x5));
                rpl_fts_set();
                rpl_fts_read();
                v15 = r12<8>;
                return v15;
            }
        }
    }
    if (((long long)v10->field_11) == 0)
    {
        v35 = (long long)quotearg_style();
    }
    if (v27->field_58 == 0)
    {
        if (v27->field_20 == 0)
        {
            v27->field_20 = 1;
            rpl_fts_set();
            v15 = r12<8>;
            return v15;
        }
    }
    if (!(((long long)v10->field_11) != 0))
    {
        v35 = (long long)quotearg_style();
        v22 = dcgettext(0x0, v27->field_40, 0x5);
        error(0x0, v27, v22);
    }
    else
    {
        v35 = v10->field_18;
        v3 = 0;
        v2 = 0;
        if (v35 != 0)
        {
            v36 = v25->field_20;
            if (v25->field_20 != 0)
            {
                if (((int)r15<8>) != 1)
                {
                    v4 = (long long)user_group_str();
                    if (v35 != 0)
                    {
                        v1 = (long long)user_group_str();
                        if (((int)r15<8>) != 3)
                        {
                            if (((int)r15<8>) != 4)
                            {
                                if (((int)r15<8>) == 2)
                                {
                                    dcgettext(0x0, &g_40cee8, 0x5);
                                    /* goto 4208744; */
                                }
                            }
                            else
                            {
                                dcgettext(0x0, &g_40cfe0, 0x5);
                                /* goto 4208744; */
                            }
                        }
                        else
                        {
                            if (v1 != 0)
                            {
                                dcgettext(0x0, &g_40d000, 0x5);
                                /* goto 4208744; */
                            }
                            else
                            {
                                dcgettext(0x0, &g_40cf90, 0x5);
                                rpl_free();
                                v11 = v4;
                                v4 = 0;
                                v1 = v11;
                                /* goto 4208744; */
                            }
                        }
                    }
                    else
                    {
                        v1 = (long long)user_group_str();
                        if (((int)r15<8>) == 2)
                        {
                            if (v36 != 0)
                            {
                                dcgettext(0x0, &g_40cf10, 0x5);
                            }
                            else
                            {
                                dcgettext(0x0, &g_40d09e, 0x5);
                            }
                            quotearg_style();
                            __printf_chk(0x1, r15<8>);
                            rpl_free();
                            rpl_free();
                        }
                        else
                        {
                            if (((int)r15<8>) != 1)
                            {
                                if (((int)r15<8>) == 3)
                                {
                                    if (v1 != 0)
                                    {
                                        if (v36 != 0)
                                        {
                                            dcgettext(0x0, &g_40cf38, 0x5);
                                            /* goto 4208744; */
                                        }
                                        else
                                        {
                                            dcgettext(0x0, &g_40cf68, 0x5);
                                            /* goto 4208744; */
                                        }
                                    }
                                    else
                                    {
                                        if (v36 != 0)
                                        {
                                            dcgettext(0x0, &g_40cfb8, 0x5);
                                            /* goto 4210958; */
                                        }
                                        else
                                        {
                                            dcgettext(0x0, &g_40cf68, 0x5);
                                            /* goto 4210958; */
                                        }
                                    }
                                }
                                else
                                {
                                    if (((int)r15<8>) == 4)
                                    {
                                        if (v36 != 0)
                                        {
                                            dcgettext(0x0, &g_40d0bc, 0x5);
                                            /* goto 4208744; */
                                        }
                                        else
                                        {
                                            dcgettext(0x0, &g_40d0d8, 0x5);
                                            /* goto 4208744; */
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                else
                {
                    v37 = (long long)quotearg_style();
                    __printf_chk(0x1, dcgettext(0x0, &g_40ceb0, 0x5));
                    rpl_free();
                    rpl_free();
                    if (v25->field_18 != v35)
                    {
                        rpl_free();
                    }
                    if (v25->field_20 != v36)
                    {
                        rpl_free();
                        if (v25->field_4 == 0)
                        {
                            rpl_fts_set();
                            v15 = r12<8>;
                            return v15;
                        }
                        else
                        {
                            v15 = r12<8>;
                            return v15;
                        }
                    }
                }
            }
            else
            {
                if (v21 == -1)
                {
                    if (((int)r15<8>) != 1)
                    {
                        v4 = (long long)user_group_str();
                    }
                }
                else
                {
                    umaxtostr();
                    v36 = (long long)xstrdup();
                }
            }
        }
        else if (v36 != -1)
        {
            umaxtostr();
            v35 = (long long)xstrdup();
            /* goto 4208621; */
        }
    }
    v3 = v32;
    v2 = ((int)v22);
    v11 = cycle_warning_required();
    v22 = ((int)v2);
    v31 = ((long long)v3);
    if (((long long)v11) == 0)
    {
    }
    else
    {
        v34 = (long long)quotearg_n_style_colon();
        error(0x0, 0x0, dcgettext(0x0, &g_40cdf0, 0x5));
        v15 = r12<8>;
        return v15;
    }
    v33 = v26->field_30;
    v11 = ((long long)v10->field_10);
    v35 = v26 + 112;
    if ((((int)v30) & ((int)v3)) == -1)
    {
        if (v10->field_0 == 2)
        {
            if (v10->field_8 == 0)
            {
                if (((long long)v10->field_10) == 0)
                {
                    if (((short)(v22 & -3)) != 4)
                    {
                        v22 = ((long long)v22) - 1;
                        tmp_5 = v22;
                        if (((long long)tmp_5) << 48 > 0x1000000000000)
                        {
                            v29 = ((int)v28->field_2c);
                            if (((long long)v11) != 0)
                            {
                                if ((((int)v30) & v3) != -1)
                                {
                                    v11 = ((int)(v35->field_18 & 0xf000));
                                    if ((((short)v35->field_18) & 0xf000) != 0x8000)
                                    {
                                        v34 = 0x10900;
                                    }
                                    else
                                    {
                                        v34 = 0x900;
                                        /* goto 4209635; */
                                    }
                                }
                                else
                                {
                                    v34 = ((char)(fchownat() == 0));
                                }
                            }
                        }
                    }
                    if (((short)(v22 & -3)) == 4 || ((long long)tmp_5) << 48 <= 0x1000000000000)
                    {
                        v11 = fchownat();
                        v34 = ((char)(v11 == 0));
                        if (v11 != 0)
                        {
                            v11 = __errno_location();
                        }
                        else if (((long long)v34) == 0)
                        {
                            if (((long long)v10->field_11) == 0)
                            {
                                v37 = (long long)quotearg_style();
                                if (v36 != -1)
                                {
                                    v24 = dcgettext(0x0, &g_40d070, 0x5);
                                }
                                else
                                {
                                    v24 = dcgettext(0x0, &g_40d089, 0x5);
                                }
                                v2 = v24;
                                v11 = __errno_location();
                                v22 = v2;
                                /* goto 4210500; */
                            }
                        }
                        else
                        {
                            if (v10->field_0 != 2)
                            {
                                if (v36 != -1)
                                {
                                }
                                else
                                {
                                    v21 = ((long long)v21);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (v10->field_0 != 2 || (((int)v30) & ((int)v3)) != -1)
    {
        if (!(((long long)v10->field_10) != 0))
        {
            v22 = ((long long)v22) - 1;
            if (((int)v30) != -1)
            {
                if (v35->field_1c != ((int)v30))
                {
                    if (v10->field_0 == 0)
                    {
                        v3 = (long long)uid_to_name();
                        v35 = v10->field_18;
                        v2 = (long long)gid_to_name();
                    }
                }
            }
            else
            {
                if (v31 != -1)
                {
                    v22 = ((int)v35->field_20);
                }
                if (((long long)(((int)tmp_51) | ((int)tmp_53))) == 0)
                {
                    v11 = ((long long)v10->field_10);
                    /* goto 4208480; */
                }
            }
        }
        else if ((((short)v26->field_88) & 0xf000) == 0xa000)
        {
            v35 = &v5;
            v3 = ((int)v3);
            v2 = v33;
            v11 = __fxstatat(0x1);
            if (v11 == 0)
            {
                v22 = ((long long)v26->field_68);
                v33 = v2;
                v31 = ((int)v3);
                /* goto 4208342; */
            }
            else if (!(((long long)v10->field_11) != 0))
            {
                v2 = (long long)quotearg_style();
                v37 = dcgettext(0x0, &g_40d05a, 0x5);
                v11 = __errno_location();
                v22 = v37;
                error(0x0, v11->field_0, v22);
            }
            else if (v10->field_0 == 0)
            {
                /* goto 4208574; */
            }
        }
    }
    if (...)
    {
        if (v0[0] == 47)
        {
            if (v0[1] == 0)
            {
                v34 = (long long)quotearg_style();
                error(0x0, 0x0, dcgettext(0x0, &g_40cd48, 0x5));
                error(0x0, 0x0, dcgettext(0x0, &g_40cdb8, 0x5));
                v15 = r12<8>;
                return v15;
            }
        }
        if (v0[1] != 0 || v0[0] != 47)
        {
            v25 = (long long)quotearg_n_style();
            v34 = (long long)quotearg_n_style();
            error(0x0, 0x0, dcgettext(0x0, &g_40cd78, 0x5));
            error(0x0, 0x0, dcgettext(0x0, &g_40cdb8, 0x5));
            v15 = r12<8>;
            return v15;
        }
    }
    if (...)
    {
        v2 = v31;
        v4 = v33;
        v3 = v29;
        v30 = __openat_2();
        if (((int)v30) < 0)
        {
            v21 = __errno_location();
            if (*(v3) == 13)
            {
                v33 = v4;
                if ((((short)v35->field_18) & 0xf000) != 0x8000)
                {
                }
                else
                {
                    v4 = ((int)v2);
                    v3 = v21;
                    v2 = v33;
                    v30 = __openat_2();
                    if (v30 < 0)
                    {
                        if (*(v3) == 13)
                        {
                            /* goto 4209727; */
                        }
                    }
                }
            }
        }
        else
        {
            v2 = v30;
            v3 = v31;
            v16 = __fxstat(0x1, v30, ((int)&v6));
            v30 = ((int)v2);
            if (!(v16 == 0))
            {
                v2 = ((unsigned int)v30);
                v37 = ((int)*(v34));
                close(v2);
                *(__errno_location() + None) = v37;
            }
            else if (!(v35->field_8 == v7))
            {
                v2 = ((int)v2);
                v37 = ((int)*(v34));
                close(v2);
                *(__errno_location() + None) = v37;
            }
            else if (v35->field_0 == v6)
            {
                if (((int)v37) != -1)
                {
                    if (((int)v37) != v8)
                    {
                        v2 = ((int)v2);
                        v37 = ((int)*(v34));
                        close(v2);
                        *(__errno_location() + None) = v37;
                    }
                }
                else
                {
                    if (((int)v3) != -1)
                    {
                    }
                    else
                    {
                        v2 = v2;
                        v16 = fchown(v30, v36, v21);
                        v30 = ((long long)v2);
                        if (v16 == 0)
                        {
                            v11 = close(v2);
                        }
                    }
                }
            }
        }
    }
    if (...)
    {
        if (v10->field_4 == 0)
        {
            rpl_fts_set();
            v15 = r12<8>;
            return v15;
        }
        v15 = r12<8>;
        return v15;
    }
}
