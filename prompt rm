typedef struct struct_0 {
    char field_0;
    char padding_1[3];
    unsigned int field_4;
    char padding_8[1];
    char field_9;
    char field_a;
    char padding_b[14];
    char field_19;
} struct_0;

typedef struct struct_4 {
    char padding_0[44];
    unsigned int field_2c;
} struct_4;

typedef struct struct_3 {
    unsigned int field_0;
} struct_3;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

extern unsigned int g_40cc5a;
extern unsigned int g_40cc6b;
extern unsigned int g_40ccf0;
extern unsigned int g_40cd20;
extern unsigned int g_40cd40;

int prompt()
{
    BOT tmp_11;  // tmp #11
    unsigned long v0;  // [bp-0xf8]
    unsigned int v1;  // [bp-0xec]
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    unsigned long long v13;  // rax
    char *v14;  // rax
    struct_3 *|unsigned long long|char [21] v17;  // rax
    unsigned long long v18;  // rax
    unsigned long long v19;  // rax
    char|struct_3 *|unsigned long long|unsigned int v2;  // [bp-0xe8]
    struct_0 *v21;  // rcx
    unsigned long long v22;  // rcx
    char|unsigned long long v23;  // rdx
    char v24;  // dl
    unsigned long long v25;  // rdx
    unsigned long long v26;  // rdx
    unsigned long long v27;  // rdx
    struct_0 *|unsigned long long v28;  // rbp
    unsigned long v29;  // rsi
    unsigned long long|unsigned int v3;  // [bp-0xe0]
    struct_4 *|unsigned long|unsigned long long v30;  // rdi
    unsigned long long|unsigned int v31;  // r8
    struct_3 *v32;  // r9
    unsigned long long v33;  // r11
    unsigned long long v34;  // r12
    char *|unsigned int v35;  // r13d
    unsigned long v36;  // r14
    unsigned long|unsigned long long|unsigned int v37;  // r15d
    struct_2 *v38;  // fs
    unsigned int v4;  // [bp-0xc0]
    unsigned long long v5;  // [bp-0xa8]
    unsigned long v6;  // [bp-0x40]
    unsigned long long v8;  // rax
    struct_3 *|unsigned long|unsigned long long|unsigned int v9;  // rax

    v37 = v29;
    v28 = v21;
    v35 = ((int)v30->field_2c);
    v36 = *(v29 + 48);
    v1 = v31;
    v0 = *(v29 + 56);
    if (v32 != 0)
    {
        v32->field_0 = 2;
        v5 = 18446744069414584319;
        v34 = ((int)(((long long)(((long long)v23) != 0)) * 4));
        v9 = openat(v35, v36, 0x30900);
        v30 = v9;
        if (((int)v9) >= 0)
        {
            v2 = ((int)v9);
            v13 = fdopendir();
            v30 = ((long long)v2);
            if (v13 != 0)
            {
                v3 = v13;
                v17 = __errno_location();
                v31 = v3;
                v2 = v17;
                v17->field_0 = 0;
                while (true)
                {
                    v3 = v31;
                    v17 = readdir();
                    v31 = v3;
                    if (v17 != 0)
                    {
                        if (v17[19] == 46)
                        {
                            v25 = 0;
                            v23 = ((char)(v17[20] == 46));
                            v17 = ((long long)v17 + ((long long)(v17[20] == 46))[20]);
                            tmp_11 = v17;
                        }
                        v3 = v2->field_0;
                        closedir();
                        v23 = ((long long)v3);
                        v2->field_0 = v3;
                        break;
                    }
                    else
                    {
                        v3 = v2->field_0;
                        closedir();
                        v23 = ((long long)v3);
                        v2->field_0 = v3;
                        v33 = 1;
                        v9 = 4;
                        break;
                    }
                }
                if (v17 == 0 || v17[19] != 46 || ((long long)tmp_11) != 0 && v17 != 47)
                {
                    v33 = 0;
                    v9 = 3;
                }
                else if (v17 == 0 && v3 == 0)
                {
                    v32->field_0 = v9;
                }
            }
            else
            {
                close(v30);
                v33 = 0;
                v9 = 3;
                /* goto 4208555; */
            }
        }
        if (((int)v9) < 0 || v13 != 0)
        {
            v33 = 0;
            v9 = 3;
        }
        v32->field_0 = v9;
    }
    else
    {
        v5 = 18446744069414584319;
        v34 = ((long long)(!(0 - ((int)(((long long)v24) < 1))) & 4));
        v33 = ((long long)(((long long)v24) != 0? 0 : ((int)rdx<8>)));
    }
    if (*(v37 + 32) == 0)
    {
        v9 = ((long long)v28->field_4);
        if (v28->field_4 != 5)
        {
            if (v28->field_0 == 0)
            {
                if (((int)v21->field_4) != 3)
                {
                    if (v28->field_19 == 0)
                    {
                        v10 = 2;
                        v22 = v6 ^ *(v38 + 0x28);
                        return v10;
                    }
                }
                if (((int)v21->field_4) == 3 || v28->field_19 != 0)
                {
                    v2 = v33;
                    v9 = can_write_any_file();
                    if (((long long)v9) == 0)
                    {
                        v2 = v2;
                        v9 = cache_fstatat.constprop.0();
                        if (v9 == 0)
                        {
                            if ((((short)v4) & 0xf000) != 0xa000)
                            {
                                v2 = v2;
                                v9 = faccessat(v35, v36, 0x2, 0x200);
                                if (v9 != 0)
                                {
                                    v2 = v2;
                                    v9 = __errno_location();
                                    v33 = ((long long)v2);
                                    v37 = ((int)v9->field_0);
                                    if (v9->field_0 == 13)
                                    {
                                        v37 = 1;
                                    }
                                }
                            }
                        }
                    }
                    if ((v9 == 0 || ((long long)v9) != 0) && ((((short)v4) & 0xf000) == 0xa000 || v9 == 0 || ((long long)v9) != 0))
                    {
                        v9 = ((int)v28->field_4);
                    }
                }
            }
            if (...)
            {
                if (v9 != 3)
                {
                    v10 = 2;
                    v22 = v6 ^ *(v38 + 0x28);
                    return v10;
                }
                v37 = 0;
            }
            if (v9 == 3 && (v9 == 0 || v28->field_0 != 0 || ((long long)v9) != 0) && (((int)v21->field_4) == 3 || v28->field_0 != 0 || v28->field_19 != 0) && ((((short)v4) & 0xf000) == 0xa000 || v9 == 0 || v28->field_0 != 0 || ((long long)v9) != 0) || v28->field_0 == 0 && v9 == 0 && v9->field_0 == 13 && ((long long)v9) == 0 && (((short)v4) & 0xf000) != 0xa000 && v9 != 0 && (((int)v21->field_4) == 3 || v28->field_19 != 0))
            {
                if (v34 != 0)
                {
                }
                else
                {
                    v2 = v33;
                    v9 = cache_fstatat.constprop.0();
                    if (v9 == 0)
                    {
                        if ((((short)v4) & 0xf000) != 0xa000)
                        {
                        }
                        else
                        {
                            if (v28->field_4 != 3)
                            {
                                v10 = 2;
                                v22 = v6 ^ *(v38 + 0x28);
                                return v10;
                            }
                            /* goto 4209425; */
                        }
                    }
                }
            }
            if (...)
            {
                v9 = __errno_location();
                v37 = ((long long)v9->field_0);
            }
            if (...)
            {
                v19 = quotearg_style();
                v34 = v19;
                v14 = dcgettext(0x0, &g_40cc5a, 0x5);
                error(0x0, ((unsigned int)v37), v14);
                v10 = 4;
                v22 = v6 ^ *(v38 + 0x28);
                return v10;
            }
            if (...)
            {
                if (v28->field_9 == 0)
                {
                }
                else
                {
                    v2 = v33;
                    v8 = quotearg_style();
                    v34 = v8;
                    if (v1 == 2)
                    {
                        if (((long long)v2) == 0)
                        {
                            v26 = 5;
                            if (v37 == 0)
                            {
                                v18 = dcgettext(0x0, &g_40cd20, v26);
                                v23 = v18;
                            }
                            else
                            {
                                v18 = dcgettext(0x0, &g_40ccf0, v26);
                                v23 = v18;
                            }
                            __fprintf_chk();
                            /* goto 4208872; */
                        }
                    }
                }
            }
            if (...)
            {
                /* goto 4209425; */
            }
            if (...)
            {
                v37 = 21;
                v19 = quotearg_style();
                v34 = v19;
                v14 = dcgettext(0x0, &g_40cc5a, 0x5);
                error(0x0, ((unsigned int)v37), v14);
                v10 = 4;
                v22 = v6 ^ *(v38 + 0x28);
                return v10;
            }
            if (...)
            {
                /* goto 4208773; */
            }
            if (...)
            {
                v8 = quotearg_style();
                v34 = v8;
            }
            if (...)
            {
                v11 = cache_fstatat.constprop.0();
                if (v11 == 0)
                {
                    v27 = 5;
                    v28 = file_type();
                    if (v37 == 0)
                    {
                        v18 = dcgettext(0x0, &g_40cc6b, v27);
                        v23 = v18;
                    }
                    else
                    {
                        v18 = dcgettext(0x0, &g_40cd40, v27);
                        v23 = v18;
                    }
                    __fprintf_chk();
                }
                else
                {
                    v35 = dcgettext(0x0, &g_40cc5a, 0x5);
                    error(0x0, *(__errno_location()), v35);
                    v10 = 4;
                    v22 = v6 ^ *(v38 + 0x28);
                    return v10;
                }
            }
            if (...)
            {
                v9 = yesno();
                if (((long long)v9) != 0)
                {
                    v10 = 2;
                    v22 = v6 ^ *(v38 + 0x28);
                    return v10;
                }
                v10 = 3;
                v22 = v6 ^ *(v38 + 0x28);
                return v10;
            }
        }
        v10 = 2;
        v22 = v6 ^ *(v38 + 0x28);
        return v10;
    }
    v10 = 3;
    v22 = v6 ^ *(v38 + 0x28);
    return v10;
}
