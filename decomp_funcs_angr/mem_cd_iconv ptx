typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

int mem_cd_iconv()
{
    BOT tmp_8;  // tmp #8
    unsigned int|unsigned long v0;  // [bp-0x1090]
    struct_0 *v1;  // [bp-0x1088]
    unsigned long long v11;  // rax
    unsigned long long|struct_1 * v12;  // rax
    unsigned long long|unsigned int v13;  // eax
    unsigned long long v15;  // rax
    struct_0 *v16;  // rcx
    unsigned int v17;  // edx
    unsigned long long v18;  // rbp
    unsigned long long v19;  // rsi
    struct_0 *v2;  // [bp-0x1080]
    unsigned long v20;  // rdi
    struct_0 *v21;  // r8
    unsigned int v22;  // r12d
    unsigned long long v23;  // r15
    unsigned long v3;  // [bp-0x1078]
    unsigned long long v4;  // [bp-0x1070]
    unsigned long v5;  // [bp-0x1068]
    unsigned long long|unsigned long v6;  // [bp-0x1060]
    unsigned long v7;  // [bp-0x1058]
    unsigned long long|unsigned long v8;  // [bp-0x1050]
    unsigned long v9;  // [bp-0x1030]

    v9 = v9;
    v18 = 0;
    v3 = v20;
    v22 = v17;
    v4 = v19;
    v1 = v16;
    v2 = v21;
    iconv(v17, 0x0, 0x0, 0x0, 0x0);
    v6 = v19;
    v5 = v20;
    if (v19 != 0)
    {
        v0 = &v5;
        while (true)
        {
            v7 = &stack_base-4168;
            v8 = 0x1000;
            v13 = iconv(v22, ((int)&v5), ((int)&v6), ((int)&v7), ((int)&v8));
            if (v13 == 18446744069414584319)
            {
                v13 = ((int)*(__errno_location()));
                if (v13 != 7)
                {
                    v11 = -1;
                    return v11;
                }
            }
            if (v13 == 7 || v13 != 18446744069414584319)
            {
                v18 += v7 - &stack_base-4168;
            }
        }
    }
    v7 = &stack_base-4168;
    v8 = 0x1000;
    v13 = iconv(v22, 0x0, 0x0, ((int)&v7), ((int)&v8));
    if (v13 != 18446744069414584319)
    {
        v23 = v7 - &stack_base-4168 + v18;
        if (v7 - &stack_base-4168 + v18 != 0)
        {
            v18 = v1->field_0;
            if (v1->field_0 == 0 || v2->field_0 < v8)
            {
                v18 = malloc(v8);
                if (v18 == 0)
                {
                    *(__errno_location() + None) = 12;
                    v11 = -1;
                    return v11;
                }
            }
            if (v18 != 0 || v1->field_0 != 0 && v2->field_0 >= v8)
            {
                iconv(v22, 0x0, 0x0, 0x0, 0x0);
                tmp_8 = v3;
                v7 = v18;
                v8 = v23;
                v5 = tmp_8;
                v12 = v4;
                v6 = v4;
                while (true)
                {
                    if (v12 != 0)
                    {
                        v15 = iconv(v22, ((int)&v5), ((int)&v6), ((int)&v7), ((int)&v8));
                        if (v15 != 18446744069414584319)
                        {
                            v12 = v6;
                        }
                        else
                        {
                            v12 = __errno_location();
                        }
                    }
                    if (v12 == 0 || v15 == 18446744069414584319 && v12->field_0 == 22)
                    {
                        v12 = iconv(v22, 0x0, 0x0, ((int)&v7), ((int)&v8));
                    }
                    if (v12 == 0 || v15 == 18446744069414584319)
                    {
                        if ((v12 == 18446744069414584319 || v12 != 0) && (v12 == 18446744069414584319 || v12->field_0 != 22))
                        {
                            v11 = -1;
                            if (v1->field_0 == v18)
                            {
                                return v11;
                            }
                            v0 = -1;
                            rpl_free();
                            v11 = ((long long)v0);
                            return v11;
                        }
                        if (v12 != 18446744069414584319 && (v12 == 0 || v12->field_0 == 22))
                        {
                            v16->field_0 = v18;
                            v21->field_0 = v8;
                            v11 = 0;
                            return v11;
                        }
                    }
                }
            }
        }
        v21->field_0 = 0;
        v11 = 0;
        return v11;
    }
    v11 = -1;
    return v11;
}
