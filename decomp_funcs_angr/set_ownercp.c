typedef struct struct_0 {
    char padding_0[16];
    unsigned int field_10;
    char padding_14[4];
    unsigned long long field_18;
    char field_1b;
    char padding_1c[22];
    char field_32;
    char padding_33[6];
    char field_39;
} struct_0;

typedef struct struct_1 {
    char padding_0[24];
    unsigned int field_18;
} struct_1;

typedef struct struct_2 {
    unsigned int field_0;
} struct_2;

extern unsigned int g_413480;
extern unsigned int g_4151f2;

int set_owner()
{
    BOT tmp_19;  // tmp #19
    BOT tmp_25;  // tmp #25
    unsigned int v0;  // [bp-0x3c]
    unsigned long v1;  // [bp+0x8]
    unsigned long long v10;  // rax
    char v11;  // ah
    unsigned long|unsigned int v12;  // rcx
    unsigned int v13;  // edx
    unsigned int v14;  // rdx
    struct_0 *v15;  // rbx
    unsigned long long|struct_2 * v16;  // rbp
    unsigned long v17;  // rsi
    struct_0 *v18;  // rdi
    unsigned long long v19;  // r8
    struct_1 *v2;  // [bp+0x10]
    unsigned long long|unsigned int [9]|unsigned int v20;  // r9
    unsigned long|unsigned int v21;  // r10
    char *|unsigned long long|unsigned int|struct_2 * v22;  // r12
    unsigned long long v23;  // r13
    unsigned int v24;  // r14d
    unsigned int v25;  // r15d
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    struct_2 * v6;  // rax
    char *|struct_2 * v7;  // rax

    v25 = v12;
    v23 = v17;
    v22 = v14;
    v16 = v19;
    v15 = v18;
    v21 = ((int)v20[7]);
    v24 = ((int)v20[8]);
    if (((char)v1) == 0)
    {
        if ((71776119061217535 & v18->field_18) != 0)
        {
            v13 = ((int)v20[6]);
            v12 = ((long long)v2->field_18);
        }
        else if (*(v18 + 0x39) != 0)
        {
            v13 = ((int)v18->field_10);
            v12 = ((int)v2->field_18);
        }
        if ((71776119061217535 & v18->field_18) != 0 || *(v18 + 0x39) != 0)
        {
            v10 = ((long long)!(((int)rdx<8>)));
            v11 = ((char)(!(((int)rdx<8>)) >> 8)) | 14;
            tmp_19 = rax<8>;
            if ((((int)tmp_19) & v12 & 4095) != 0)
            {
                v0 = ((int)v20[7]);
                v10 = qset_acl();
                v21 = ((long long)v0);
                if (v10 != 0)
                {
                    v7 = __errno_location();
                    v16 = v7;
                    v7 = ((int)v7->field_0);
                    if (v7->field_0 != 1)
                    {
                        if (v7 != 22)
                        {
                            v5 = quotearg_style();
                            v22 = v5;
                            v7 = dcgettext(0x0, &g_4151f2, 0x5);
                            error(0x0, v16->field_0, v7);
                            tmp_25 = ((long long)*(v15 + 0x32));
                            return ((long long)(0 - ((int)tmp_25)));
                        }
                    }
                    if (v7->field_0 == 1 || v7 == 22)
                    {
                        if (*(v15 + 0x1b) != 0)
                        {
                            v5 = quotearg_style();
                            v22 = v5;
                            v7 = dcgettext(0x0, &g_4151f2, 0x5);
                            error(0x0, v16->field_0, v7);
                            tmp_25 = ((long long)*(v15 + 0x32));
                            return ((long long)(0 - ((int)tmp_25)));
                        }
                        tmp_25 = ((long long)*(v15 + 0x32));
                        return ((long long)(0 - ((int)tmp_25)));
                    }
                }
            }
        }
    }
    if ((((int)tmp_19) & v12 & 4095) == 0 || v10 == 0 || ((char)v1) != 0 || (71776119061217535 & v18->field_18) == 0 && *(v18 + 0x39) == 0)
    {
        if (((int)v19) != -1)
        {
            v4 = fchown(((int)v19), v21, v20[8]);
            if (v4 != 0)
            {
                v6 = __errno_location();
                v25 = ((int)v6->field_0);
                v22 = v6;
                if (v6->field_0 == 1 || v25 == 22)
                {
                    fchown(((int)v19), 0xffffffff, v20[8]);
                    v22->field_0 = v25;
                }
            }
            else
            {
                return 1;
            }
        }
        else
        {
            v4 = fchownat(v22, v25, v21, v20[8], 0x100);
            if (v4 == 0)
            {
                return 1;
            }
            v6 = __errno_location();
            v20 = ((int)v6->field_0);
            v16 = v6;
            if (v6->field_0 == 1 || v20 == 22)
            {
                v0 = v20;
                fchownat(v22, v25, 0xffffffff, v24, 0x100);
                v20 = ((long long)v0);
                v16->field_0 = v0;
            }
        }
        if (((int)v19) == -1 && v4 != 0 || v4 != 0 && ((int)v19) != -1)
        {
            v3 = chown_failure_ok();
            v19 = v3;
            if (((long long)v3) != 0)
            {
                return 0;
            }
            v23 = quotearg_style();
            v22 = dcgettext(0x0, &g_413480, 0x5);
            v7 = __errno_location();
            error(0x0, v7->field_0, v22);
            tmp_25 = ((long long)*(v15 + 0x32));
            return ((long long)(0 - ((int)tmp_25)));
        }
    }
}