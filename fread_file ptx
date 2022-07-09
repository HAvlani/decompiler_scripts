typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int fread_file()
{
    unsigned long v0;  // [bp-0xf0]
    unsigned int v1;  // [bp-0xe4]
    unsigned int v10;  // rcx
    unsigned long|unsigned long long v11;  // rdx
    unsigned long long v12;  // rbx
    unsigned long long v13;  // rbp
    unsigned long v14;  // rsi
    void *v15;  // rdi
    unsigned long v16;  // r12
    unsigned long long v17;  // r13
    struct_0 *v18;  // r14
    struct_0 *v19;  // r14
    struct_1 *v2;  // [bp-0xe0]
    unsigned long long|struct_0 * v20;  // r14
    struct_0 *v21;  // r14
    unsigned long long v22;  // r15
    unsigned long|unsigned long long|unsigned int v23;  // r15d
    char v3;  // [bp-0xd8]
    unsigned int v4;  // [bp-0xc0]
    unsigned long v5;  // [bp-0xa8]
    unsigned long long v9;  // rax

    v0 = v15;
    v1 = ((int)v14);
    v2 = v11;
    v9 = __fxstat(0x1, fileno(v15), ((int)&v3));
    if (v9 >= 0)
    {
        if ((((short)v4) & 0xf000) == 0x8000)
        {
            v9 = ftello(v15);
            if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
            {
                if (v5 > v9)
                {
                    v11 = v5 - v9;
                    v17 = v11 + 1;
                    if (v11 == 9223372036854775807)
                    {
                        *(__errno_location() + None) = 12;
                        return &stack_base+0;
                    }
                }
            }
        }
    }
    if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)) || v5 <= v9 || v9 < 0 || (((short)v4) & 0xf000) != 0x8000)
    {
        v17 = 0x2000;
    }
    if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)) || v5 <= v9 || v9 < 0 || (((short)v4) & 0xf000) != 0x8000 || v11 != 9223372036854775807)
    {
        v13 = malloc(v17);
        if (v13 != 0)
        {
            v12 = 0;
            while (true)
            {
                v22 = r13<8> - v12;
                v9 = fread(v13 + v12, 0x1, r13<8> - v12, v15);
                v12 += v9;
                if (v22 != v9)
                {
                    v23 = ((long long)v18->field_0);
                    v18 = __errno_location();
                    v9 = ferror(((int)v15));
                    if (v9 == 0)
                    {
                        if (v17 - 1 > v12)
                        {
                            v14 = v12 + 1;
                            if (((long long)(((char)v1) & 2)) != 0)
                            {
                                v16 = malloc(v14);
                                if (v13 != 0)
                                {
                                    memcpy(v13, v13, v12);
                                    __explicit_bzero_chk(((int)v13), ((int)v17), 0xffffffff);
                                    v13 = v16;
                                    rpl_free();
                                    *(v13 + v12) = 0;
                                    v2->field_0 = v12;
                                    return &stack_base+0;
                                }
                                __explicit_bzero_chk(((int)(v13 + v12)), ((int)(v17 - v12)), 0xffffffff);
                                *(v13 + v12) = 0;
                                v2->field_0 = v12;
                                return &stack_base+0;
                            }
                            v13 = (realloc(v13, v14) != 0? v9 : rbp<8>);
                            *(v13 + v12) = 0;
                            v2->field_0 = v12;
                            return &stack_base+0;
                        }
                        *(v13 + v12) = 0;
                        v2->field_0 = v12;
                        return &stack_base+0;
                    }
                }
                else if (r13<8> != 9223372036854775807)
                {
                    ((unsigned int)v10) = (9223372036854775807 - (r13<8> >> 1) <= r13<8>? 9223372036854775807 : (r13<8> >> 1) + r13<8>);
                    v16 = (9223372036854775807 - (r13<8> >> 1) <= r13<8>? 9223372036854775807 : (r13<8> >> 1) + r13<8>);
                    if (((long long)(((char)v1) & 2)) != 0)
                    {
                        v23 = malloc(((unsigned int)v10));
                        if (v23 != 0)
                        {
                            memcpy(v23, v13, r13<8>);
                            __explicit_bzero_chk(((int)v13), ((int)r13<8>), 0xffffffff);
                            rpl_free();
                        }
                        else
                        {
                            v23 = ((int)v21->field_0);
                            v21 = __errno_location();
                            __explicit_bzero_chk(((int)v13), v17, 0xffffffff);
                            rpl_free();
                            v20->field_0 = v23;
                            return &stack_base+0;
                        }
                    }
                    else
                    {
                        v23 = realloc(v13, ((unsigned int)v10));
                        if (v23 == 0)
                        {
                            v23 = ((int)v19->field_0);
                            v19 = __errno_location();
                            rpl_free();
                            v20->field_0 = v23;
                            return &stack_base+0;
                        }
                    }
                    if (((long long)(((char)v1) & 2)) == 0 && v23 != 0 || ((long long)(((char)v1) & 2)) != 0 && v23 != 0)
                    {
                        v17 = v16;
                        v13 = v23;
                    }
                }
                else
                {
                    v23 = 12;
                    v20 = __errno_location();
                }
                if (v22 == v9 && r13<8> == 9223372036854775807 || v22 != v9 && v9 != 0)
                {
                    if (((long long)(((char)v1) & 2)) == 0)
                    {
                        rpl_free();
                        v20->field_0 = v23;
                        return &stack_base+0;
                    }
                    __explicit_bzero_chk(((int)v13), v17, 0xffffffff);
                    rpl_free();
                    v20->field_0 = v23;
                    return &stack_base+0;
                }
            }
        }
        return &stack_base+0;
    }
}
