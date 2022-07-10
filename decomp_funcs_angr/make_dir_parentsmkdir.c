typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int g_40a5cd;
extern unsigned int g_40a5dc;

int make_dir_parents()
{
    BOT tmp_48;  // tmp #48
    BOT tmp_43;  // tmp #43
    unsigned long v0;  // [bp-0x108]
    unsigned long|struct_0 * v1;  // [bp-0xf8]
    unsigned int v10;  // [bp+0x18]
    unsigned int v11;  // [bp+0x20]
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax
    unsigned long long|unsigned int v14;  // ecx
    unsigned long v15;  // rdx
    struct_0 *|unsigned long long v16;  // rbx
    unsigned int [2]|unsigned long long v17;  // rsi
    char *v18;  // rdi
    struct_0 *|unsigned long long v19;  // r8
    unsigned long long|unsigned int v2;  // [bp-0xf0]
    unsigned long v20;  // r9
    unsigned long long v21;  // r11
    unsigned long long v22;  // r12
    unsigned long long v23;  // r12
    unsigned long long v24;  // r12b
    unsigned long long v25;  // r12
    char * v26;  // r14d
    unsigned long long|unsigned int v27;  // r15
    unsigned long v3;  // [bp-0xe8]
    unsigned int v4;  // [bp-0xe0]
    unsigned int v5;  // [bp-0xdc]
    char v6;  // [bp-0xd8]
    unsigned int v7;  // [bp-0xc0]
    unsigned long v8;  // [bp+0x8]
    unsigned int v9;  // [bp+0x10]

    v21 = v14;
    v24 = v19;
    v16 = v15;
    tmp_48 = ((long long)v11);
    v1 = v20;
    v4 = ((int)tmp_48);
    if (*(v18) != 47)
    {
        if (v17[0] == 4)
        {
            v27 = ((long long)v17[1]);
            if (v17[1] != 0)
            {
                v23 = (long long)quote();
                v24 = 0;
                error(0x0, ((unsigned int)v27), dcgettext(0x0, &g_40a5dc, 0x5));
                v13 = v24;
                return v13;
            }
            else if (v15 == 0)
            {
                /* goto 4208016; */
            }
        }
    }
    if (v15 != 0)
    {
        if (v17[1] == 0 || *(v18) == 47 || v17[0] != 4)
        {
            v2 = v14;
            v12 = mkancesdirs();
            if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
            {
                v21 = v2;
                v26 = ((int)(v18 + v12));
                /* goto 4207766; */
            }
            else if (v12 != 18446744069414584319)
            {
                v24 = 1;
                v13 = v24;
                return v13;
            }
            else
            {
                v27 = ((long long)*(__errno_location()));
                v23 = (long long)quote();
                v24 = 0;
                error(0x0, ((unsigned int)v27), dcgettext(0x0, &g_40a5dc, 0x5));
                v13 = v24;
                return v13;
            }
        }
    }
    if (v15 == 0 && (v17[1] == 0 || *(v18) == 47 || v17[0] != 4))
    {
        v26 = v18;
    }
    if (v17[1] == 0 && v15 == 0 || v15 == 0 && *(v18) == 47 || v17[1] == 0 && !(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))) || v15 == 0 && v17[0] != 4 || *(v18) == 47 && !(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))) || !(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))) && v17[0] != 4)
    {
        v14 = ((int)(v9 & v10));
        v5 = v9 & v10;
        if (v14 != -1)
        {
            v2 = ((int)v19) & -64;
        }
        else if ((((int)tmp_43) | ((int)v19) & 0x200) == 0)
        {
            v2 = v21;
            v27 = mkdir(v26, ((int)v19));
            if (((int)v27) == 0)
            {
                v17 = v2;
                *(&stack_base-248)();
                if ((((int)v8) & ((int)v19) & 511) == 0)
                {
                    v24 = 1;
                    v13 = v24;
                    return v13;
                }
                v2 = ((int)v19);
                /* goto 4208337; */
            }
        }
        else
        {
            v2 = ((int)v19) & -19;
            /* goto 4207826; */
        }
        if (v14 != -1 || (((int)tmp_43) | ((int)v19) & 0x200) != 0)
        {
            v3 = v21;
            v27 = mkdir(v26, v2);
            if (v27 == 0)
            {
                v17 = v3;
                *(&stack_base-248)();
                /* goto 4208337; */
            }
        }
        if (v14 != -1 && v27 != 0 || v27 != 0 && (((int)tmp_43) | ((int)v19) & 0x200) != 0 || v14 == -1 && (((int)tmp_43) | ((int)v19) & 0x200) == 0 && ((int)v27) != 0)
        {
            v27 = ((long long)*(v19));
            v19 = __errno_location();
        }
        if (v14 != -1 && v27 != 0 || v27 != 0 && (((int)tmp_43) | ((int)v19) & 0x200) != 0 || v14 == -1 && (((int)tmp_43) | ((int)v19) & 0x200) == 0 && ((int)v27) != 0)
        {
            if (!(((char)v4) != 0))
            {
                v2 = -1;
            }
            else if (((int)v27) != 0)
            {
                v24 = ((char)(((int)v27) != 2)) & ((char)(v16 != 0));
                if (((long long)(((char)(((int)v27) != 2)) & ((char)(v16 != 0)))) == 0)
                {
                    v23 = (long long)quote();
                    v24 = 0;
                    error(0x0, ((unsigned int)v27), dcgettext(0x0, &g_40a5dc, 0x5));
                    v13 = v24;
                    return v13;
                }
                v1 = v19;
                v12 = __xstat(0x1, v26, ((int)&v6));
                if (v12 != 0)
                {
                    if (((int)v27) != 17)
                    {
                        v23 = (long long)quote();
                        v24 = 0;
                        error(0x0, ((unsigned int)v27), dcgettext(0x0, &g_40a5dc, 0x5));
                        v13 = v24;
                        return v13;
                    }
                    else if (v1->field_0 == 2)
                    {
                        v23 = (long long)quote();
                        v24 = 0;
                        error(0x0, ((unsigned int)v27), dcgettext(0x0, &g_40a5dc, 0x5));
                        v13 = v24;
                        return v13;
                    }
                    else if (v1->field_0 == 20)
                    {
                        v23 = (long long)quote();
                        v24 = 0;
                        error(0x0, ((unsigned int)v27), dcgettext(0x0, &g_40a5dc, 0x5));
                        v13 = v24;
                        return v13;
                    }
                    else
                    {
                        v1 = v1;
                        v25 = (long long)quote();
                        v24 = 0;
                        error(0x0, v1->field_0, dcgettext(0x0, &g_40a5cd, 0x5));
                        v13 = v24;
                        return v13;
                    }
                }
                else
                {
                    if ((((short)v7) & 0xf000) != 0x4000)
                    {
                        v23 = (long long)quote();
                        v24 = 0;
                        error(0x0, ((unsigned int)v27), dcgettext(0x0, &g_40a5dc, 0x5));
                        v13 = v24;
                        return v13;
                    }
                    else
                    {
                        v13 = v24;
                        return v13;
                    }
                }
            }
            else
            {
                v24 = 1;
                v13 = v24;
                return v13;
            }
        }
        if (((char)v4) == 0 && v14 != -1 || ((char)v4) == 0 && (((int)tmp_43) | ((int)v19) & 0x200) != 0 || ((char)v4) == 0 && ((int)v27) != 0 || v27 == 0 && v14 != -1 || v27 == 0 && (((int)tmp_43) | ((int)v19) & 0x200) != 0 || v14 == -1 && (((int)tmp_43) | ((int)v19) & 0x200) == 0 && ((int)v27) == 0 && (((int)v8) & ((int)v19) & 511) != 0)
        {
            v12 = savewd_chdir();
            if (v12 < -1)
            {
                v24 = 1;
                v13 = v24;
                return v13;
            }
            v0 = ((long long)((int)v8));
            v12 = dirchownmod();
            if (v12 == 0)
            {
                v24 = 1;
                v13 = v24;
                return v13;
            }
            else if (!(((unsigned int)v27) != 0))
            {
                v16 = __errno_location();
                v22 = (long long)quote();
                v24 = 0;
                error(0x0, v16->field_0, dcgettext(0x0, ((int)((v9 & v10) != -1? "cannot change owner and permissions of %s" : "cannot change permissions of %s")), 0x5));
                v13 = v24;
                return v13;
            }
            else if (((unsigned int)v27) == 2)
            {
                v23 = (long long)quote();
                v24 = 0;
                error(0x0, ((unsigned int)v27), dcgettext(0x0, &g_40a5dc, 0x5));
                v13 = v24;
                return v13;
            }
            else if (v15 == 0)
            {
                v23 = (long long)quote();
                v24 = 0;
                error(0x0, ((unsigned int)v27), dcgettext(0x0, &g_40a5dc, 0x5));
                v13 = v24;
                return v13;
            }
            else
            {
                v16 = __errno_location();
                if (v16->field_0 == 20)
                {
                    v23 = (long long)quote();
                    v24 = 0;
                    error(0x0, ((unsigned int)v27), dcgettext(0x0, &g_40a5dc, 0x5));
                    v13 = v24;
                    return v13;
                }
                else
                {
                    v22 = (long long)quote();
                    v24 = 0;
                    error(0x0, v16->field_0, dcgettext(0x0, ((int)((v9 & v10) != -1? "cannot change owner and permissions of %s" : "cannot change permissions of %s")), 0x5));
                    v13 = v24;
                    return v13;
                }
            }
        }
    }
}
