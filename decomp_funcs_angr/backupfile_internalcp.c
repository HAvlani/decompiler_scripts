typedef struct struct_4 {
    unsigned short field_0;
} struct_4;

typedef struct struct_5 {
    unsigned int field_0;
    char field_4;
} struct_5;

typedef struct struct_6 {
    char field_0;
} struct_6;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

extern struct_3 simple_backup_suffix;

int backupfile_internal()
{
    BOT tmp_1;  // tmp #1
    BOT tmp_15;  // tmp #15
    BOT tmp_18;  // tmp #18
    BOT tmp_9;  // tmp #9
    BOT tmp_7;  // tmp #7
    BOT tmp_13;  // tmp #13
    unsigned int v0;  // [bp-0xbc]
    unsigned long long v1;  // [bp-0xb8]
    unsigned int v10;  // [bp-0x6c]
    unsigned long v11;  // [bp-0x68]
    unsigned long|unsigned long long v12;  // [bp-0x60]
    unsigned int v13;  // [bp-0x58]
    unsigned long long v14;  // [bp-0x50]
    unsigned int v15;  // [bp-0x44]
    char *|unsigned long long v17;  // rax
    unsigned long long v18;  // rax
    char *|struct_5 *|char|unsigned long long|unsigned int v2;  // [bp-0xb0]
    unsigned long long v20;  // rax
    unsigned long long v21;  // rax
    unsigned long long v22;  // rcx
    unsigned long|unsigned long long|unsigned int v23;  // rdx
    unsigned long long v24;  // rdx
    struct_1 *|unsigned long long|void * v25;  // rbx
    unsigned long long v26;  // rbx
    unsigned long long v27;  // rbp
    unsigned long long v28;  // rsi
    unsigned long long v29;  // rsi
    unsigned long v3;  // [bp-0xa8]
    void *v30;  // rsi
    unsigned long|char * v31;  // rdi
    unsigned int v32;  // edi
    unsigned long|unsigned long long|char v34;  // r8
    unsigned long long v35;  // r9
    unsigned long long v36;  // r10
    unsigned long long v37;  // r12
    unsigned long long v38;  // r13
    struct_1 *|unsigned long long|unsigned int|struct_6 * v39;  // r14
    void *v4;  // [bp-0xa0]
    struct_4 *|unsigned long long|unsigned int v40;  // r15
    unsigned long v5;  // [bp-0x98]
    unsigned long v6;  // [bp-0x90]
    unsigned long long v7;  // [bp-0x88]
    unsigned long v8;  // [bp-0x80]
    unsigned long long v9;  // [bp-0x78]

    v26 = v30;
    v10 = v32;
    v4 = v30;
    v0 = v23;
    v11 = (long long)last_component();
    v29 = v11 - v30;
    v25 = v11 - v26;
    v1 = v29;
    v27 = v25 + (long long)base_len();
    if (simple_backup_suffix == 0)
    {
        set_simple_backup_suffix();
    }
    v17 = strlen(simple_backup_suffix);
    v28 = v17 + 1;
    ((unsigned int)v13) = v17 + 1;
    v31 = v27 + (9 <= v17 + 1? v28 : 9) + 1;
    v8 = v27 + (9 <= v17 + 1? v28 : 9) + 1;
    v37 = malloc(v31);
    if (v37 != 0)
    {
        v9 = 0;
        tmp_1 = v27 - v1;
        v38 = 0;
        v5 = v27 - v1;
        v15 = -100;
        v6 = tmp_1 + 4;
        while (true)
        {
            memcpy(v37, v4, v27);
            if (v0 != 1)
            {
                if (v38 != 0)
                {
                    rewinddir(((int)v38));
                }
                else
                {
                    v40 = v37 + v1;
                    v25 = ((long long)*(v37 + v1));
                    *(v37 + v1) = 46;
                    v38 = (long long)opendirat();
                    v23 = v40 + v5;
                    if (v38 != 0)
                    {
                        v40->field_0 = v25;
                        *(v2) = 2117172782;
                        *(v2 + 4) = 0;
                    }
                    else
                    {
                        v2 = v23;
                        __errno_location();
                        v40->field_0 = v25;
                        v2->field_0 = 2117172782;
                        v39 = 2;
                        *(v2 + 4) = 0;
                        if (((int)2) == 3)
                        {
                            v37 = 0;
                            rpl_free();
                            *(__errno_location() + None) = 12;
                            v20 = v37;
                            return v20;
                        }
                    }
                }
                if (v38 != 0 || v38 != 0)
                {
                    v40 = 1;
                    v39 = 2;
                    v3 = v8;
                    while (true)
                    {
                        v25 = readdir();
                        if (v25 == 0)
                        {
                            break;
                        }
                        while (true)
                        {
                            v25 += 19;
                            v31 = v25;
                            v17 = strlen(v31);
                            v23 = v5 + 2;
                            tmp_15 = v1;
                            v2 = v5 + 2;
                            v17 = memcmp(v37 + tmp_15, v31, v23);
                            v25 = v31 + v2;
                            v17 = ((long long)*(v31 + v2));
                            v34 = ((char)(v17 == 57));
                            v17 = ((long long)*(v25 + 1));
                            if (((int)*(v25 + 1)) - 48 <= 9)
                            {
                                v22 = 1;
                                do
                                {
                                    v22 += 1;
                                    v34 = ((long long)(v34 & ((int)v17)));
                                    v35 = v22;
                                    v17 = ((long long)*(v25 + v22));
                                }
                                while (((int)*(v25 + v22)) - 48 <= 9);
                            }
                            else
                            {
                                v35 = 1;
                                v22 = 1;
                            }
                            v36 = v27 + 2;
                            if (v40 >= v22)
                            {
                                v7 = v22;
                                v2 = r8b<1>;
                                v12 = v35;
                                v14 = v27 + 2;
                                v17 = memcmp(v37 + v27 + 2, v25, v35);
                                v36 = v14;
                                v34 = ((long long)v2);
                            }
                            v23 = ((long long)r8b<1>);
                            ((unsigned int)v39) = ((long long)r8b<1>);
                            v40 = v23 + v22;
                            v21 = v23 + v22 + r10<8> + 2;
                            if (v23 + v22 + r10<8> + 2 > v3)
                            {
                                if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Load(addr=stack_base-120, size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>))))
                                {
                                    v3 = (v3 >> 1) + v3;
                                }
                                else
                                {
                                    v3 = v21;
                                }
                                tmp_18 = v3;
                                v12 = v23;
                                v7 = v22;
                                v2 = v35;
                                v21 = realloc(v37, ((long long)(tmp_18 == 0)) | tmp_18);
                                v23 = v12;
                                v34 = v21;
                                if (v21 == 0)
                                {
                                    closedir();
                                    v37 = 0;
                                    rpl_free();
                                    *(__errno_location() + None) = 12;
                                    v20 = v37;
                                    return v20;
                                }
                            }
                            v34 = v37;
                            if (v23 + v22 + r10<8> + 2 <= v3 || v21 != 0)
                            {
                                v2 = v34;
                                *(v34 + v27) = 32302;
                                *(v34 + v27 + 2) = 48;
                                v7 = v35;
                                v18 = memcpy(v34 + v27 + v23 + 2, v25, v22 + 2);
                                v24 = ((long long)*(v7 + v18 + 1));
                                v17 = v7 + v18 - 1;
                                tmp_9 = v24;
                                if (tmp_9 == 57)
                                {
                                    do
                                    {
                                        *(v17) = 48;
                                        v24 = ((long long)*(v17 + 0x1));
                                        v17 -= 1;
                                        tmp_7 = v24;
                                    }
                                    while (tmp_7 == 57);
                                }
                                v23 = ((long long)(((int)rdx<8>) + 1));
                                v37 = v2;
                                tmp_13 = v23;
                                *(v17) = tmp_13;
                                v25 = readdir();
                                break;
                            }
                        }
                    }
                }
                if (v0 == 2 && (((int)2) == 2 || v38 != 0 || v38 != 0))
                {
                    memcpy(v37 + v27, simple_backup_suffix, ((unsigned int)v13));
                    v0 = 1;
                }
                if (((int)2) == 2 || v38 != 0 || v38 != 0 || reg_128<4> == 1 && ((int)2) != 3)
                {
                    v25 = 1;
                    v39 = (long long)last_component();
                    v40 = (long long)base_len();
                    if (v9 == 0 && v40 > 14)
                    {
                        v2 = v15;
                        v25 = __errno_location();
                        if (((int)v2) >= 0)
                        {
                            v25->field_0 = 0;
                            v17 = fpathconf() - ((long long)(v25->field_0 == 0));
                            v9 = v17;
                        }
                        else
                        {
                            v23 = ((int)v39->field_0);
                            v39->field_0 = 46;
                            v25->field_0 = 0;
                            v2 = v23;
                            v39->field_0 = ((short)v2);
                            v17 = pathconf(((int)r12<8>), 0x3, v2) - ((long long)(reg_72<4> == 0));
                            v9 = v17;
                        }
                        v22 = v9;
                        if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Load(addr=stack_base-120, size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)))
                        {
                            v9 = (v22 == 18446744069414584319? v22 : 14);
                            /* goto 4244662; */
                        }
                    }
                }
            }
            else
            {
                v25 = 1;
                memcpy(v37 + v27, simple_backup_suffix, ((unsigned int)v13));
            }
            if (...)
            {
                v25 = 1;
            }
            if (...)
            {
                v22 = v9;
                v23 = v9 - 1;
                v25 = 0;
                *(v39 + (v9 <= r12<8> + v27 - v39? v23 : r12<8> + v27 - v39)) = 126;
                *(v39 + (v9 <= r12<8> + v27 - v39? v23 : r12<8> + v27 - v39) + 1) = 0;
            }
            if (...)
            {
                if (cl<1> != 0)
                {
                    v17 = renameatu();
                    if (v17 != 0)
                    {
                        v17 = __errno_location();
                        v40 = ((int)*(r14<8>));
                        r14<8> = v17;
                        if (v38 != 0)
                        {
                            closedir();
                            v37 = 0;
                            rpl_free();
                            v39->field_0 = v40;
                            break;
                        }
                        else
                        {
                            v37 = 0;
                            rpl_free();
                            v39->field_0 = v40;
                            v20 = v37;
                            return v20;
                        }
                    }
                }
                if (v17 == 0 || cl<1> == 0)
                {
                    if (v38 == 0)
                    {
                        v20 = v37;
                        return v20;
                    }
                    closedir();
                    v20 = v37;
                    return v20;
                }
            }
        }
        v20 = v37;
        return v20;
    }
    v20 = v37;
    return v20;
}
