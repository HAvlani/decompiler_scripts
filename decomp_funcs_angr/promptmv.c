typedef struct struct_1 {
    char field_0;
    char padding_1[3];
    unsigned int field_4;
    char padding_8[1];
    char field_9;
    char field_a;
    char padding_b[14];
    char field_19;
} struct_1;

typedef struct struct_4 {
    char padding_0[44];
    unsigned int field_2c;
} struct_4;

typedef struct struct_2 {
    unsigned int field_0;
} struct_2;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

extern unsigned int g_416c52;
extern unsigned int g_416c63;
extern unsigned int g_416ce8;
extern unsigned int g_416d18;
extern unsigned int g_416d38;

int prompt()
{
    BOT tmp_11;  // tmp #11
    unsigned long v0;  // [bp-0xf8]
    unsigned int v1;  // [bp-0xec]
    unsigned int|struct_2 *|unsigned long|unsigned long long v11;  // rax
    struct_2 *|char [21]|unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    char *v16;  // rax
    unsigned long long v17;  // rax
    unsigned long long v19;  // rax
    struct_2 *|unsigned int|char|unsigned long long v2;  // [bp-0xe8]
    unsigned long long v20;  // rax
    struct_1 *v21;  // rcx
    unsigned long long v22;  // rcx
    unsigned long long v23;  // rdx
    char|unsigned long long v24;  // rdx
    unsigned long long v25;  // rdx
    unsigned long long v26;  // rdx
    char v27;  // dl
    struct_1 *|unsigned long long v28;  // rbp
    unsigned long v29;  // rsi
    unsigned int|unsigned long long v3;  // [bp-0xe0]
    struct_4 *|unsigned long|unsigned long long v30;  // rdi
    unsigned int|unsigned long long v31;  // r8d
    struct_2 *v32;  // r9
    unsigned long long v33;  // r11
    unsigned long long v34;  // r12
    unsigned int|char * v35;  // r13
    unsigned long v36;  // r14
    unsigned int|unsigned long|unsigned long long v37;  // r15
    struct_3 *v38;  // fs
    unsigned int v4;  // [bp-0xc0]
    unsigned long long v5;  // [bp-0xa8]
    unsigned long v6;  // [bp-0x40]
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax

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
        v34 = ((int)(((long long)(((long long)v24) != 0)) * 4));
        v8 = openat(v35, v36, 0x30900);
        v30 = v8;
        if (((int)v8) >= 0)
        {
            v2 = ((int)v8);
            v19 = fdopendir();
            v30 = ((long long)v2);
            if (v19 != 0)
            {
                v3 = v19;
                v13 = __errno_location();
                v31 = v3;
                v2 = v13;
                v13->field_0 = 0;
                while (true)
                {
                    v3 = v31;
                    v13 = readdir();
                    v31 = v3;
                    if (v13 != 0)
                    {
                        if (v13[19] == 46)
                        {
                            v25 = 0;
                            v24 = ((char)(v13[20] == 46));
                            v13 = ((long long)v13 + ((long long)(v13[20] == 46))[20]);
                            tmp_11 = v13;
                        }
                        v3 = v2->field_0;
                        closedir();
                        v24 = ((long long)v3);
                        v2->field_0 = v3;
                        break;
                    }
                    else
                    {
                        v3 = v2->field_0;
                        closedir();
                        v24 = ((long long)v3);
                        v2->field_0 = v3;
                        v33 = 1;
                        v11 = 4;
                        break;
                    }
                }
                if (v13 == 0 || v13[19] != 46 || ((long long)tmp_11) != 0 && v13 != 47)
                {
                    v33 = 0;
                    v11 = 3;
                }
                else if (v3 == 0 && v13 == 0)
                {
                    v32->field_0 = v11;
                }
            }
            else
            {
                close(v30);
                v33 = 0;
                v11 = 3;
                /* goto 4214411; */
            }
        }
        if (((int)v8) < 0 || v19 != 0)
        {
            v33 = 0;
            v11 = 3;
        }
        v32->field_0 = v11;
    }
    else
    {
        v5 = 18446744069414584319;
        v34 = ((long long)(!(0 - ((int)(((long long)v27) < 1))) & 4));
        v33 = ((long long)(((long long)v27) != 0? 0 : ((int)rdx<8>)));
    }
    if (*(v37 + 32) == 0)
    {
        v11 = ((long long)v28->field_4);
        if (v28->field_4 != 5)
        {
            if (v28->field_0 == 0)
            {
                if (((int)v21->field_4) != 3)
                {
                    if (v28->field_19 == 0)
                    {
                        v15 = 2;
                        v22 = v6 ^ *(v38 + 0x28);
                        return v15;
                    }
                }
                if (((int)v21->field_4) == 3 || v28->field_19 != 0)
                {
                    v2 = v33;
                    v11 = can_write_any_file();
                    if (((long long)v11) == 0)
                    {
                        v2 = v2;
                        v11 = cache_fstatat.constprop.0();
                        if (v11 == 0)
                        {
                            if ((((short)v4) & 0xf000) != 0xa000)
                            {
                                v2 = v2;
                                v11 = faccessat(v35, v36, 0x2, 0x200);
                                if (v11 != 0)
                                {
                                    v2 = v2;
                                    v11 = __errno_location();
                                    v33 = ((long long)v2);
                                    v37 = ((long long)v11->field_0);
                                    if (v11->field_0 == 13)
                                    {
                                        v37 = 1;
                                    }
                                }
                            }
                        }
                    }
                    if ((v11 == 0 || ((long long)v11) != 0) && (v11 == 0 || (((short)v4) & 0xf000) == 0xa000 || ((long long)v11) != 0))
                    {
                        v11 = ((int)v28->field_4);
                    }
                }
            }
            if (...)
            {
                if (v11 != 3)
                {
                    v15 = 2;
                    v22 = v6 ^ *(v38 + 0x28);
                    return v15;
                }
                v37 = 0;
            }
            if (v11 == 3 && (v11 == 0 || ((long long)v11) != 0 || v28->field_0 != 0) && (((int)v21->field_4) == 3 || v28->field_19 != 0 || v28->field_0 != 0) && (v11 == 0 || (((short)v4) & 0xf000) == 0xa000 || ((long long)v11) != 0 || v28->field_0 != 0) || v11->field_0 == 13 && v11 == 0 && ((long long)v11) == 0 && v28->field_0 == 0 && v11 != 0 && (((short)v4) & 0xf000) != 0xa000 && (((int)v21->field_4) == 3 || v28->field_19 != 0))
            {
                if (v34 != 0)
                {
                }
                else
                {
                    v2 = v33;
                    v11 = cache_fstatat.constprop.0();
                    if (v11 == 0)
                    {
                        if ((((short)v4) & 0xf000) != 0xa000)
                        {
                        }
                        else
                        {
                            if (v28->field_4 != 3)
                            {
                                v15 = 2;
                                v22 = v6 ^ *(v38 + 0x28);
                                return v15;
                            }
                            /* goto 4215281; */
                        }
                    }
                }
            }
            if (...)
            {
                v11 = __errno_location();
                v37 = ((int)v11->field_0);
            }
            if (...)
            {
                v14 = quotearg_style();
                v34 = v14;
                v16 = dcgettext(0x0, &g_416c52, 0x5);
                error(0x0, v37, v16);
                v15 = 4;
                v22 = v6 ^ *(v38 + 0x28);
                return v15;
            }
            if (...)
            {
                if (v28->field_9 == 0)
                {
                }
                else
                {
                    v2 = v33;
                    v20 = quotearg_style();
                    v34 = v20;
                    if (v1 == 2)
                    {
                        if (((long long)v2) == 0)
                        {
                            v23 = 5;
                            if (v37 == 0)
                            {
                                v9 = dcgettext(0x0, &g_416d18, v23);
                                v24 = v9;
                            }
                            else
                            {
                                v9 = dcgettext(0x0, &g_416ce8, v23);
                                v24 = v9;
                            }
                            __fprintf_chk();
                            /* goto 4214728; */
                        }
                    }
                }
            }
            if (...)
            {
                /* goto 4215281; */
            }
            if (...)
            {
                v37 = 21;
                v14 = quotearg_style();
                v34 = v14;
                v16 = dcgettext(0x0, &g_416c52, 0x5);
                error(0x0, v37, v16);
                v15 = 4;
                v22 = v6 ^ *(v38 + 0x28);
                return v15;
            }
            if (...)
            {
                /* goto 4214629; */
            }
            if (...)
            {
                v20 = quotearg_style();
                v34 = v20;
            }
            if (...)
            {
                v17 = cache_fstatat.constprop.0();
                if (v17 == 0)
                {
                    v26 = 5;
                    v28 = file_type();
                    if (v37 == 0)
                    {
                        v9 = dcgettext(0x0, &g_416c63, v26);
                        v24 = v9;
                    }
                    else
                    {
                        v9 = dcgettext(0x0, &g_416d38, v26);
                        v24 = v9;
                    }
                    __fprintf_chk();
                }
                else
                {
                    v35 = dcgettext(0x0, &g_416c52, 0x5);
                    error(0x0, *(__errno_location()), v35);
                    v15 = 4;
                    v22 = v6 ^ *(v38 + 0x28);
                    return v15;
                }
            }
            if (...)
            {
                v11 = yesno();
                if (((long long)v11) != 0)
                {
                    v15 = 2;
                    v22 = v6 ^ *(v38 + 0x28);
                    return v15;
                }
                v15 = 3;
                v22 = v6 ^ *(v38 + 0x28);
                return v15;
            }
        }
        v15 = 2;
        v22 = v6 ^ *(v38 + 0x28);
        return v15;
    }
    v15 = 3;
    v22 = v6 ^ *(v38 + 0x28);
    return v15;
}
