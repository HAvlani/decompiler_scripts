typedef struct struct_2 {
    struct struct_3 *field_0;
    unsigned long long field_8;
    char padding_10[2];
    char field_12;
    char field_13;
    char field_14;
    char padding_15[11];
    unsigned long long field_20;
    char padding_28[8];
    unsigned long long field_30;
    char padding_38[8];
    unsigned long long field_40;
    char field_48;
    char field_49;
} struct_2;

typedef struct struct_4 {
    unsigned long long field_0;
    unsigned long long field_8;
    char padding_10[2];
    char field_12;
    char field_13;
    char field_14;
    char padding_15[11];
    unsigned long long field_20;
    char padding_28[8];
    unsigned long long field_30;
    char padding_38[8];
    unsigned long long field_40;
    char field_48;
    char field_49;
} struct_4;

typedef struct struct_3 {
    char padding_0[24];
    unsigned long long field_18;
    char padding_20[24];
    unsigned long long field_38;
    unsigned int field_40;
    char padding_44[4];
    unsigned long long field_48;
    char padding_50[8];
    unsigned long long field_58;
    char padding_60[8];
    unsigned short field_68;
    unsigned short field_6a;
    char padding_6c[20];
    unsigned long long field_80;
} struct_3;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

typedef struct struct_1 {
    char padding_0[104];
    unsigned short field_68;
    char padding_6a[30];
    unsigned int field_88;
} struct_1;

extern struct_0 CSWTCH.49;
extern <missing-type> fts_compare_ino;

int fts_build()
{
    BOT tmp_12;  // tmp #12
    BOT tmp_25;  // tmp #25
    BOT tmp_37;  // tmp #37
    unsigned long v0;  // [bp-0xa0]
    unsigned long|unsigned long long v1;  // [bp-0x98]
    char v10;  // [bp-0x4b]
    char v11;  // [bp-0x4a]
    char v12;  // [bp-0x49]
    unsigned int v13;  // [bp-0x44]
    unsigned long long|struct_3 *|unsigned int|char|unsigned long long [12]|struct_0 * v15;  // rax
    unsigned long long [8] v16;  // rax
    unsigned long long [12]|unsigned long long v2;  // [bp-0x90]
    unsigned long long|void * v24;  // rcx
    unsigned long long v25;  // rdx
    unsigned long long v26;  // rdx
    unsigned long long|unsigned int v27;  // bl
    struct_3 * v28;  // rbp
    struct_4 *v29;  // rbp
    struct_3 *|unsigned long v3;  // [bp-0x88]
    unsigned long long|unsigned int|void * v30;  // rsi
    unsigned long long|unsigned int v31;  // rdi
    struct_2 *v32;  // rdi
    unsigned long long v33;  // r8
    unsigned long|unsigned long long v34;  // r12
    unsigned long long v35;  // r13
    unsigned long long|struct_0 * v36;  // r14
    struct_4 * v37;  // r15
    struct_0 *v4;  // [bp-0x80]
    unsigned long v5;  // [bp-0x78]
    unsigned long|unsigned long long v6;  // [bp-0x70]
    unsigned long long v7;  // [bp-0x68]
    char * v8;  // [bp-0x60]
    unsigned long v9;  // [bp-0x58]

    v37 = v32;
    v28 = v32->field_0;
    v31 = v32->field_0->field_18;
    v9 = v31;
    if (v9 != 0)
    {
        v13 = dirfd();
        if (!(v13 >= 0))
        {
            closedir();
            v28->field_18 = 0;
            if (v30 == 3)
            {
                v28->field_68 = 4;
                v15 = ((int)*(__errno_location()));
                v28->field_40 = v15;
                v2 = 0;
                return v2;
            }
            v2 = 0;
            return v2;
        }
        else if (v37->field_40 != 0)
        {
            v7 = 18446744069414584319;
            /* goto 4212127; */
        }
        else
        {
            v7 = 100000;
            v31 = ((int)v37->field_48);
            v12 = 1;
            /* goto 4212136; */
        }
    }
    else
    {
        v15 = ((long long)v37->field_48);
        v15 = ((int)(((int)v15) & 516));
        v2 = (long long)opendirat();
        v28->field_18 = v2;
        if (v2 != 0)
        {
            if (v28->field_68 != 11)
            {
                if ((((short)v37->field_48) & 0x100) != 0)
                {
                    leave_dir.isra.0();
                    fts_stat();
                    v15 = enter_dir.isra.0();
                    if (((long long)v15) == 0)
                    {
                        v2 = 0;
                        *(__errno_location() + None) = 12;
                        return v2;
                    }
                }
            }
            v28->field_68 = (short)fts_stat();
            if ((((short)v37->field_48) & 0x100) == 0 || v28->field_68 == 11 || ((long long)v15) != 0)
            {
                v7 = ((long long)(((int)(0 - ((long long)(v37->field_40 < 1)))) & 100001)) - 1;
                if (v30 != 2)
                {
                    v31 = ((long long)v13);
                    if ((((char)v37->field_48) & 56) == 24)
                    {
                        if (v28->field_80 == 2)
                        {
                            v15 = filesystem_type();
                        }
                    }
                }
            }
        }
        else if (v30 != 3)
        {
            v2 = 0;
            return v2;
        }
        else
        {
            v28->field_68 = 4;
            v15 = ((int)*(__errno_location()));
            v28->field_40 = v15;
            return v2;
        }
    }
    if (...)
    {
        v31 = ((int)v13);
        /* goto 4213405; */
    }
    if (...)
    {
        if (v30 == 3)
        {
            v31 = ((long long)v13);
            v34 = 0;
            v27 = 1;
        }
    }
    if (...)
    {
        v34 = 1;
        v27 = ((char)(v30 == 3));
    }
    if (...)
    {
        v12 = 0;
        v31 = ((long long)v37->field_48);
        /* goto 4212136; */
    }
    if (...)
    {
        if (((long long)(v37->field_49 & 2)) != 0)
        {
            v13 = (int)rpl_fcntl();
            v31 = ((long long)v13);
        }
        if (v31 >= 0)
        {
            v15 = fts_safe_changedir();
            if (v15 == 0)
            {
                /* goto 4212127; */
            }
        }
    }
    if (...)
    {
        if (((long long)v27) != 0)
        {
            if (((long long)v34) != 0)
            {
                v15 = ((int)*(__errno_location()));
                v28->field_40 = v15;
            }
        }
        v28->field_6a = v28->field_6a | 1;
        closedir();
        v31 = ((long long)v37->field_48);
        v28->field_18 = 0;
        if ((((short)((int)v31)) & 0x200) != 0)
        {
            if (((int)v13) >= 0)
            {
                close(v13);
                v31 = ((long long)v37->field_48);
            }
        }
        v28->field_18 = 0;
        v12 = 0;
        /* goto 4212136; */
    }
    if (...)
    {
        v12 = 1;
        v31 = ((long long)v37->field_48);
    }
    if (...)
    {
        v24 = v28->field_48;
        tmp_12 = v28->field_48 - 1;
        v0 = v28->field_48;
        v8 = tmp_12;
        if (*(v28->field_38 + v8 + 1) != 47)
        {
            v8 = v24;
            v0 = v8 + 1;
        }
        v6 = 0;
        if ((((char)((unsigned int)v31)) & 4) != 0)
        {
            v24 = v8 + v37->field_20 + 1;
            *(v8 + v37->field_20) = 47;
            v6 = v24;
        }
        v31 = v28->field_18;
        v36 = v37->field_30 - v0;
        v15 = v28->field_58 + 1;
        v3 = v28->field_18;
        v5 = v15;
        if (v31 != 0)
        {
            v34 = 0;
            v11 = 0;
            v3 = v28;
            v29 = v37;
            v4 = __errno_location();
            v10 = 0;
            v1 = 0;
            v2 = 0;
            while (true)
            {
                v4->field_0 = 0;
                v37 = readdir();
                if (v37 != 0)
                {
                    if (v37->field_14 == 46 && ((long long)(v37->field_48 & 32)) == 0 && v37->field_13 == 46 && v37->field_14 != 0)
                    {
                        /* goto 4212340; */
                    }
                    if (((long long)(v37->field_48 & 32)) != 0 || v37->field_13 != 46 || v37->field_14 != 0 && v37->field_14 != 46)
                    {
                        v35 = strlen(v37 + 19);
                        v27 = (long long)fts_alloc();
                        if (v1 == 0)
                        {
                            v36 = v4;
                            v28 = v3;
                            v27 = ((int)v4->field_0);
                            rpl_free();
                            fts_lfree();
                            closedir();
                            v28->field_18 = 0;
                            v28->field_68 = 7;
                            v2 = 0;
                            v37->field_48 = v37->field_48 | 0x2000;
                            v36->field_0 = v27;
                            return v2;
                        }
                        else if (v36 <= v35)
                        {
                            v36 = v37->field_20;
                            v15 = fts_palloc.isra.0();
                            if (((long long)v15) != 0)
                            {
                                v25 = v37->field_20;
                                if (v37->field_20 != v36)
                                {
                                    v6 = (((long long)(v37->field_48 & 4)) == 0? v6 : rdx<8> + *(&stack_base-160));
                                }
                                else
                                {
                                    v15 = ((long long)v10);
                                }
                                v36 = v37->field_30 - v0;
                                v10 = v15;
                            }
                            else
                            {
                                v36 = v4;
                                v28 = v3;
                                v27 = ((int)v4->field_0);
                                rpl_free();
                                fts_lfree();
                                closedir();
                                v28->field_18 = 0;
                                v28->field_68 = 7;
                                v2 = 0;
                                v37->field_48 = v37->field_48 | 0x2000;
                                v36->field_0 = v27;
                                return v2;
                            }
                        }
                    }
                }
                else
                {
                    v28 = v3;
                    if (v4->field_0 != 0)
                    {
                        v28->field_40 = v4->field_0;
                        v28->field_68 = ((short)((0 - ((int)((v9 | v34) < 1)) & -3) + 7));
                    }
                    if (v3->field_18 != 0)
                    {
                        closedir();
                        v3->field_18 = 0;
                    }
                }
                if (...)
                {
                    v33 = v35 + v0;
                    if (!(((char)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, r13<8>, Load(addr=stack_base-160, size=8, endness=Iend_LE), cc_ndep<8>))))
                    {
                        v25 = ((long long)v37->field_48);
                        v30 = v1 + 0x100;
                        *(v1 + 88) = v5;
                        tmp_25 = v37->field_0;
                        *(v1 + 72) = v33;
                        *(v1 + 8) = tmp_25;
                        *(v1 + 120) = v37->field_0;
                        tmp_37 = v25;
                        if (((long long)(tmp_37 & 4)) == 0)
                        {
                            *(v1 + 48) = v30;
                        }
                        else
                        {
                            *(v1 + 48) = *(v1 + 56);
                            memmove(v6, v30, *(v1 + 96) + 1);
                            v25 = ((long long)v37->field_48);
                        }
                        if (((long long)(dh<1> & 4)) == 0 && v37->field_40 != 0)
                        {
                            *(v1 + 104) = (short)fts_stat();
                            /* goto 4212598; */
                        }
                        if (v37->field_40 == 0 || ((long long)(dh<1> & 4)) != 0)
                        {
                            v30 = ((long long)v37->field_12);
                            v15 = ((long long)(((int)v37->field_12) - 1));
                            if (((long long)(dl<1> & 8)) != 0 && ((long long)(v30 & 251)) != 0)
                            {
                                if ((((char)((int)rdx<8>)) & 16) == 0 && v30 == 10)
                                {
                                    *(v1 + 104) = 11;
                                    /* goto 4212960; */
                                }
                                if ((((char)((int)rdx<8>)) & 16) != 0 || v30 != 10)
                                {
                                    *(v1 + 104) = 11;
                                    if (((int)v15) > 11)
                                    {
                                        *(v1 + 136) = 0;
                                        v25 = 1;
                                        /* goto 4212591; */
                                    }
                                    else
                                    {
                                        v25 = 1;
                                        /* goto 4212965; */
                                    }
                                }
                            }
                            if (((long long)(dl<1> & 8)) == 0 || ((long long)(v30 & 251)) == 0)
                            {
                                v30 = 11;
                                *(v1 + 104) = 11;
                                if (((int)v15) > 11)
                                {
                                    *(v1 + 136) = 0;
                                    v25 = 2;
                                    /* goto 4212591; */
                                }
                            }
                            if ((((int)v15) <= 11 || ((long long)(dl<1> & 8)) != 0) && (((int)v15) <= 11 || ((long long)(v30 & 251)) != 0) && (((long long)(dl<1> & 8)) == 0 || (((char)((int)rdx<8>)) & 16) == 0 || ((long long)(v30 & 251)) == 0) && (((long long)(dl<1> & 8)) == 0 || v30 == 10 || ((long long)(v30 & 251)) == 0))
                            {
                                v25 = 2;
                            }
                            if (((int)v15) <= 11 || (((char)((int)rdx<8>)) & 16) == 0 && v30 == 10 && ((long long)(dl<1> & 8)) != 0 && ((long long)(v30 & 251)) != 0)
                            {
                                v15 = ((int)*(CSWTCH.49 + v15 * 4));
                                *(v1 + 136) = *(CSWTCH.49 + v15 * 4);
                            }
                            *(v1 + 160) = v25;
                        }
                        *(v1 + 16) = 0;
                        if (v2 != 0)
                        {
                            *(v1 + 16) = v1;
                        }
                        else
                        {
                            v2 = v1;
                        }
                        if (v34 != 10000)
                        {
                            v34 += 1;
                            if (v34 < v7)
                            {
                                v1 = v27;
                                /* goto 4212340; */
                            }
                            else
                            {
                                v28 = v3;
                            }
                        }
                        else if (v37->field_40 == 0)
                        {
                            v15 = filesystem_type();
                            if (v15 != 16914836 && v15 != -11317950 && v15 != 26985)
                            {
                                v11 = 1;
                                /* goto 4212651; */
                            }
                        }
                    }
                    else
                    {
                        v28 = v3;
                        rpl_free();
                        fts_lfree();
                        closedir();
                        v15 = v4;
                        v28->field_18 = 0;
                        v28->field_68 = 7;
                        v2 = 0;
                        v37->field_48 = v37->field_48 | 0x2000;
                        v15->field_0 = 36;
                        return v2;
                    }
                }
                if (...)
                {
                    v1 = v1;
                    v34 = 10001;
                    v11 = 0;
                    /* goto 4212340; */
                }
                if (...)
                {
                    v15 = v3;
                    v1 = v1;
                    v34 = 10001;
                }
                if (...)
                {
                    v15 = v3;
                }
                if (...)
                {
                    v37 = v29;
                    v28 = v15;
                }
                if (...)
                {
                    v16 = v37->field_8;
                    v24 = v37->field_20;
                    if (v37->field_8 != 0)
                    {
                        do
                        {
                            v25 = v16[6];
                            if (v16[6] != v16 + 0x100)
                            {
                                v25 = v25 - v16[7] + v24;
                                v16[6] = v25;
                            }
                            v16[7] = v24;
                            v16 = v16[2];
                        }
                        while (v16 != 0);
                    }
                    v15 = v2;
                    if (((char)(v2[11] - 0 >> 63)))
                    {
                    }
                    else
                    {
                        do
                        {
                            v26 = v15[6];
                            if (v15[6] != v15 + 0x100)
                            {
                                v26 = v26 - v15[7] + v24;
                                v15[6] = v26;
                            }
                            v25 = v15[2];
                            v15[7] = v24;
                            if (v15 != 0)
                            {
                                v15 = v25;
                            }
                            else
                            {
                                v15 = v15[1];
                            }
                        }
                        while (!(((char)(*(rax<8> + 88) - 0 >> 63))));
                    }
                }
            }
            if (...)
            {
                *(v6) = 0;
            }
            else if (...)
            {
                v6 -= 1;
            }
        }
        else if (((long long)(v37->field_48 & 4)) == 0)
        {
            v2 = 0;
            if (((long long)(((char)(v9 == 0)) & v12)) != 0)
            {
                v11 = 0;
            }
        }
        else
        {
            v2 = 0;
            v11 = 0;
            /* goto 4213910; */
        }
        if (((long long)(v37->field_48 & 4)) != 0 || v31 != 0)
        {
            v6 -= 1;
            *(v6) = 0;
        }
        if (...)
        {
            if (v28->field_58 == 0)
            {
                v15 = ((char)(restore_initial_cwd() != 0));
            }
            else
            {
                v15 = ((char)(fts_safe_changedir() != 0));
            }
            if (((long long)v15) != 0)
            {
                v28->field_68 = 7;
                v37->field_48 = v37->field_48 | 0x2000;
                fts_lfree();
                v2 = 0;
                return v2;
            }
        }
        if (...)
        {
            if (v30 != 3)
            {
                fts_lfree();
                v2 = 0;
                return v2;
            }
            v15 = ((long long)v28->field_68);
            if (v28->field_68 == 7)
            {
                fts_lfree();
                v2 = 0;
                return v2;
            }
            else if (v15 == 4)
            {
                fts_lfree();
                v2 = 0;
                return v2;
            }
            else
            {
                v28->field_68 = 6;
                fts_lfree();
                v2 = 0;
                return v2;
            }
        }
        if (...)
        {
            if (!(v11 == 0))
            {
                v37->field_40 = &fts_compare_ino;
                v37->field_40 = 0;
                v2 = (long long)fts_sort();
                return v2;
            }
            else if (v37->field_40 == 0)
            {
                return v2;
            }
            else if (v34 == 1)
            {
                return v2;
            }
            else
            {
                v2 = (long long)fts_sort();
                return v2;
            }
        }
    }
}
