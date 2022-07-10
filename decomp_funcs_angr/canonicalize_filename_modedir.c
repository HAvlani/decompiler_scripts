typedef struct struct_1 {
    char field_0;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int g_418dda;

int canonicalize_filename_mode()
{
    BOT tmp_6;  // tmp #6
    BOT tmp_13;  // tmp #13
    BOT tmp_15;  // tmp #15
    BOT tmp_3;  // tmp #3
    struct_1 *|unsigned long long v0;  // [bp-0xd78]
    unsigned long v1;  // [bp-0xd70]
    unsigned long|struct_1 *|char *|char [3] v10;  // [bp-0xd30]
    unsigned long|struct_1 *|char [3] v11;  // [bp-0xd28]
    struct_1 *|char * v12;  // [bp-0xd20]
    struct_1 *v13;  // [bp-0xd18]
    unsigned long v14;  // [bp-0xd10]
    char v16[3];  // [bp-0xc78]
    unsigned long long v17;  // [bp-0xc70]
    char v18;  // [bp-0xc68]
    char v2[3];  // [bp-0xd68]
    unsigned long v20;  // [bp-0x868]
    unsigned long long v21;  // [bp-0x860]
    char v22;  // [bp-0x858]
    struct_1 *v23;  // [bp-0x458]
    unsigned long long v24;  // [bp-0x450]
    char v25;  // [bp-0x448]
    struct_1 *|struct_0 *|unsigned long long|char [3]|unsigned int v27;  // rax
    unsigned long|struct_1 *|char [3] v3;  // [bp-0xd60]
    char [3] v33;  // rcx
    unsigned long long v34;  // rdx
    unsigned long|char [3]|char v35;  // rbp
    unsigned long long|unsigned int v36;  // rsi
    char v37[3];  // rdi
    struct_1 *|char * v38;  // r10
    struct_1 *|char *|unsigned long long v39;  // r12
    unsigned long|unsigned long long v4;  // [bp-0xd58]
    char [3] v40;  // r13
    struct_1 *v41;  // r15
    unsigned long long|char [3] v42;  // r15
    unsigned int v5;  // [bp-0xd4c]
    unsigned long v6;  // [bp-0xd48]
    char [3]|char v7;  // [bp-0xd40]
    unsigned int v8;  // [bp-0xd38]
    unsigned int v9;  // [bp-0xd34]

    if ((v36 & 3 & ((int)(((long long)(v36 & 3)) - 1))) == 0)
    {
        v35 = v37;
        if (v37 != 0)
        {
            v27 = ((long long)v37[0]);
            if (((long long)v37[0]) != 0)
            {
                v21 = 0x400;
                v1 = &stack_base-2136;
                v20 = &stack_base-2136;
                v0 = &v25;
                v23 = &v25;
                v24 = 0x400;
                v2 = &stack_base-3176;
                v16 = &stack_base-3176;
                v17 = 0x400;
                if (v27 != 47)
                {
                    while (true)
                    {
                        v27 = getcwd(((int)&stack_base-3176));
                        if (v27 == 0)
                        {
                            v27 = ((int)*(__errno_location()));
                            if (v27 != 12)
                            {
                                xalloc_die(); /* do not return */
                                if (v27 != 34)
                                {
                                    break;
                                }
                                else
                                {
                                    v27 = gl_scratch_buffer_grow();
                                    if (((long long)v27) != 0)
                                    {
                                        xalloc_die(); /* do not return */
                                    }
                                }
                            }
                        }
                        else
                        {
                            v39 = rawmemchr(((int)&stack_base-3176), 0x0);
                            v27 = ((long long)v35[0]);
                            if (*(v39 + 0x1) == 47 && v39 > &stack_base-3175)
                            {
                                break;
                            }
                            if (v39 <= &stack_base-3175 || *(v39 + 0x1) != 47)
                            {
                                break;
                            }
                        }
                    }
                    if (v27 != 0)
                    {
                        v7 = 0;
                        v38 = v39;
                        v5 = v36 & 4;
                        v4 = 0;
                        v9 = 0;
                        v6 = &stack_base-1112;
                        v8 = v36 & 3;
                    }
                }
                else
                {
                    v18 = 47;
                    v39 = &stack_base-3175;
                }
                v7 = 0;
                v38 = v39;
                v5 = v36 & 4;
                v4 = 0;
                v9 = 0;
                v6 = &stack_base-1112;
                v8 = v36 & 3;
                while (true)
                {
                    v34 = rax<8>;
                    if (al<1> == 47)
                    {
                        do
                        {
                            v34 = ((long long)v35[1]);
                            v35 += 1;
                            tmp_6 = v34;
                        }
                        while (tmp_6 == 47);
                    }
                    if (((long long)v34) != 0 || al<1> != 47)
                    {
                        v40 = v35;
                        do
                        {
                            v42 = v40;
                            v27 = ((long long)v40[1]);
                            v40 += 1;
                            tmp_6 = v27;
                        }
                        while (v27 != 47 && ((long long)tmp_6) != 0);
                        v36 = v40 - v35;
                        v3 = v40 - v35;
                        if (v40 != v35)
                        {
                            if (v3 == 2 && v34 == 46 && v35[1] == 46 && v36 != 1 && v38 > &stack_base-3175)
                            {
                                v38 -= 1;
                                if (v38 > &stack_base-3176)
                                {
                                    while (*(v38 + 0x1) != 47)
                                    {
                                        v38 -= 1;
                                        break;
                                    }
                                }
                            }
                            if (v34 != 46 || v3 != 2 && v36 != 1 || v36 != 1 && v35[1] != 46)
                            {
                                if (*(v38 + 0x1) != 47)
                                {
                                    *(v38) = 47;
                                    v38 += 1;
                                }
                                if (v17 + &stack_base-3176 - v38 >= v3 + 2)
                                {
                                }
                                else
                                {
                                    while (true)
                                    {
                                        v39 = r10<8> - &stack_base-3176;
                                        v27 = gl_scratch_buffer_grow_preserve();
                                        if (((long long)v27) != 0)
                                        {
                                            v38 = v16 + v39;
                                            if (v17 - v39 >= v3 + 2)
                                            {
                                                break;
                                            }
                                        }
                                        else
                                        {
                                            xalloc_die(); /* do not return */
                                        }
                                    }
                                }
                                v10 = &stack_base-3176;
                                *(v38) = 0;
                                v38 = mempcpy(((int)v38), ((int)v35), ((int)v3));
                                if (v5 == 0)
                                {
                                    v3 = v38;
                                    v10 = v35;
                                    v11 = &stack_base-3192;
                                    while (true)
                                    {
                                        v27 = readlink(((int)&stack_base-3176), ((int)&v25), 0x3ff);
                                        if (1023 > v3)
                                        {
                                            v38 = v3;
                                            v3 = v27;
                                            v35 = v10;
                                            if (v9 <= 19)
                                            {
                                                v9 += 1;
                                            }
                                            else if (v10[0] != 0)
                                            {
                                                v13 = v3;
                                                v11 = &stack_base-3176;
                                                v10 = &stack_base-3336;
                                                *(v35 - v40 + v38) = 0;
                                                ((unsigned int)v36) = (v18 != 0? &stack_base-3176 : ".");
                                                v12 = v35 - v40 + v38;
                                                v27 = __xstat(0x1, ((unsigned int)v36), ((int)&stack_base-3336), ((int)(v35 - v40 + v38)));
                                                v38 = v13;
                                                if (v27 == 0)
                                                {
                                                    *(v12) = v10[0];
                                                    if (v4 != 0)
                                                    {
                                                        v12 = v38;
                                                        v11 = &stack_base-3176;
                                                        v10 = &stack_base-3336;
                                                        v27 = seen_file();
                                                        if (((long long)v27) == 0)
                                                        {
                                                            v11 = v12;
                                                            v10 = &stack_base-3176;
                                                            record_file();
                                                            v38 = v11;
                                                            /* goto 4248377; */
                                                        }
                                                        else
                                                        {
                                                            *(__errno_location() + None) = 40;
                                                        }
                                                    }
                                                    else
                                                    {
                                                        v12 = v13;
                                                        v4 = (long long)hash_initialize();
                                                        v38 = v12;
                                                        xalloc_die(); /* do not return */
                                                    }
                                                }
                                                if ((v27 != 0 || ((long long)v27) != 0) && (v27 != 0 || v4 != 0))
                                                {
                                                    break;
                                                }
                                            }
                                            if (v9 <= 19 || v10[0] == 0 || v27 == 0 && ((long long)v27) == 0 && v4 != 0)
                                            {
                                                v41 = v3;
                                                v12 = v38;
                                                v11 = &stack_base-3176;
                                                *(&v25 + v41) = 0;
                                                tmp_13 = v3;
                                                v10 = strlen(v40);
                                                v38 = v12;
                                                v42 = tmp_13 + v10;
                                                if (False)
                                                {
                                                    v14 = v40 - &stack_base-2136;
                                                    v42 = v3 + v10;
                                                    v10 = strlen(v40);
                                                }
                                                if (v21 <= tmp_13 + v10)
                                                {
                                                    v11 = &stack_base-3176;
                                                    v39 = v38;
                                                    while (true)
                                                    {
                                                        v27 = gl_scratch_buffer_grow_preserve();
                                                        if (((long long)v27) != 0)
                                                        {
                                                            v38 = v39;
                                                        }
                                                        else
                                                        {
                                                            xalloc_die(); /* do not return */
                                                        }
                                                    }
                                                    if (v21 > v42 && ((long long)v27) != 0)
                                                    {
                                                        v40 = &stack_base-2136 + v14;
                                                    }
                                                    else if (v21 > v42 && ((long long)v27) != 0)
                                                    {
                                                        tmp_15 = v10;
                                                        v11 = v38;
                                                        v7 = &stack_base-3176;
                                                        memmove(&stack_base-2136 + v3, v40, tmp_15 + 1);
                                                        memcpy(&stack_base-2136, &v25, v3);
                                                        v38 = v11;
                                                    }
                                                    v40 = &stack_base-2136 + v14;
                                                }
                                                tmp_15 = v10;
                                                v11 = v38;
                                                v7 = &stack_base-3176;
                                                memmove(&stack_base-2136 + v3, v40, tmp_15 + 1);
                                                memcpy(&stack_base-2136, &v25, v3);
                                                v38 = v11;
                                                if (v25 != 47)
                                                {
                                                    v7 = 1;
                                                    v27 = ((long long)v22);
                                                    do
                                                    {
                                                        v38 -= 1;
                                                    }
                                                    while (v38 != &stack_base-3176 && *(v38 + 0x1) != 47);
                                                    v7 = 1;
                                                    break;
                                                }
                                                else
                                                {
                                                    v18 = 47;
                                                    v27 = ((long long)v22);
                                                    v7 = 1;
                                                    break;
                                                }
                                            }
                                        }
                                        else
                                        {
                                            v27 = gl_scratch_buffer_grow();
                                            xalloc_die(); /* do not return */
                                        }
                                    }
                                    if (v27 == 0 && 1023 > v3 && !(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Load(addr=stack_base-3424, size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>))) && v9 > 19 && v10[0] != 0 && ((long long)v27) != 0 && v4 != 0)
                                    {
                                        v27 = ((long long)v42[1]);
                                    }
                                }
                            }
                        }
                    }
                    if ((v40 != v35 && (v36 != 1 || v34 != 46) && (((long long)v34) != 0 || al<1> != 47) && (v3 != 2 || v34 != 46 || v35[1] != 46) && v5 == 0 && v8 != 2 || v40 != v35 && (v36 != 1 || v34 != 46) && (((long long)v34) != 0 || al<1> != 47) && (v3 != 2 || v34 != 46 || v35[1] != 46) && v5 != 0) && v8 != 2)
                    {
                        v27 = ((long long)v40[0]);
                        if (v40[0] == 47)
                        {
                            v27 = v40;
                            while (true)
                            {
                                v33 = v27;
                                v34 = ((long long)v27[1]);
                                v27 += 1;
                                tmp_6 = v34;
                                v33 += 2;
                                if (v34 == 46 && ((long long)v34) != 0)
                                {
                                    v34 = ((long long)v27[1]);
                                    if (((long long)v27[1]) != 0)
                                    {
                                        if (v34 == 46)
                                        {
                                            v27 = ((long long)v27[2]);
                                            tmp_3 = v27;
                                        }
                                        if (v34 == 47)
                                        {
                                            v27 = v33;
                                        }
                                    }
                                }
                                if (((long long)v34) == 0 || ((long long)v27[1]) == 0 && v34 == 46 || v27 == 47 && v34 == 46 && v34 == 46 || v34 == 46 && ((long long)tmp_3) == 0 && v34 == 46)
                                {
                                    v10 = v38;
                                    v3 = &stack_base-3176;
                                    v38->field_0 = 2334399978102259759;
                                    v35 = ((char)(faccessat(0xffffff9c, ((int)&stack_base-3176), 0x0, 0x200) != 0));
                                    break;
                                }
                            }
                            if (((long long)v34) != 0 && (((long long)v27[1]) != 0 || v34 != 46) && (v34 == 46 || v34 != 47 || v34 != 46) && (v27 != 47 || v34 != 46 || v34 != 46) && (v34 != 46 || ((long long)tmp_3) != 0 || v34 != 46))
                            {
                                v10 = v38;
                                v3 = &stack_base-3176;
                                v35 = ((char)(*(__errno_location()) != 22));
                            }
                            else if (((long long)v34) != 0 && (((long long)v27[1]) != 0 || v34 != 46) && (v34 == 46 || v34 != 47 || v34 != 46) && (v27 != 47 || v34 != 46 || v34 != 46) && (v34 != 46 || ((long long)tmp_3) != 0 || v34 != 46))
                            {
                                v27 = ((long long)v42[1]);
                            }
                        }
                        else if (v5 != 0)
                        {
                            if (((long long)v27) == 0)
                            {
                                v10 = v38;
                                v3 = &stack_base-3176;
                                v35 = ((char)(faccessat(0xffffff9c, ((int)&stack_base-3176), 0x0, 0x200) != 0));
                            }
                        }
                    }
                    if (...)
                    {
                        v10 = v38;
                        v3 = &stack_base-3176;
                        v35 = ((char)(*(__errno_location()) != 22));
                    }
                    if (...)
                    {
                        v10 = v38;
                        v3 = &stack_base-3176;
                        v27 = __errno_location();
                        if (v27->field_0 == 2)
                        {
                            v27 = strspn(((int)v40), &g_418dda);
                        }
                    }
                    if (...)
                    {
                        v27 = ((long long)v42[1]);
                    }
                    if (...)
                    {
                        break;
                    }
                    if (...)
                    {
                        if (v38 <= &stack_base-3175)
                        {
                            break;
                        }
                        break;
                    }
                }
                hash_free();
                if (v20 != v1)
                {
                    rpl_free();
                }
                if (v23 != v0)
                {
                    rpl_free();
                }
                if (((long long)v35) == 0)
                {
                    *(v39) = 0;
                    v27 = gl_scratch_buffer_dupfree();
                    if (v27 != 0)
                    {
                        return v27;
                    }
                    xalloc_die(); /* do not return */
                }
                v27 = 0;
                if (v16 == v2)
                {
                    return v27;
                }
                else
                {
                    v0 = 0;
                    rpl_free();
                    v27 = v0;
                    return v27;
                }
            }
            *(__errno_location() + None) = 2;
            v27 = 0;
            return v27;
        }
        *(__errno_location() + None) = 22;
        v27 = 0;
        return v27;
    }
    *(__errno_location() + None) = 22;
    v27 = 0;
    return v27;
}
