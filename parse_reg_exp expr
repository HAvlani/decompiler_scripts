typedef struct struct_4 {
    char padding_0[72];
    unsigned long long field_48;
} struct_4;

typedef struct struct_0 {
    char padding_0[168];
    unsigned long long field_a8;
} struct_0;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

typedef struct struct_2 {
    char padding_0[8];
    char field_8;
} struct_2;

int parse_reg_exp()
{
    unsigned long v0;  // [bp-0x78]
    unsigned long v1;  // [bp-0x70]
    struct_2 *v10;  // rdx
    struct_0 *v11;  // rbx
    struct struct_0 **v12;  // rsi
    unsigned long v13;  // rdi
    unsigned long v14;  // r8
    struct_1 *v15;  // r9
    struct_4 *v16;  // r12
    unsigned long|unsigned long long v17;  // r14
    unsigned long long v18;  // r15
    unsigned long v2;  // [bp-0x68]
    struct_3 *v3;  // [bp-0x60]
    uint128_t v4;  // [bp-0x58]
    char v5;  // [bp-0x50]
    unsigned long long v8;  // rax
    unsigned long|unsigned long long v9;  // rcx

    v16 = v13;
    v11 = v12[0];
    v3 = v12;
    v1 = v9;
    v2 = v11->field_a8;
    if (v15->field_0 != 0)
    {
        if (v17 == 0)
        {
            v18 = 0;
            v8 = v18;
            return v8;
        }
    }
    if (v15->field_0 == 0 || v17 != 0)
    {
        v17 = (long long)parse_branch();
        while (true)
        {
            if (v10->field_8 == 10)
            {
                v16->field_48 = v16->field_48 + (long long)peek_token();
                if (((char)(((int)v10->field_8) & -9)) != 2 && (v14 == 0 || v10->field_8 != 9))
                {
                    v0 = v12[0]->field_a8;
                    v11->field_a8 = v2;
                    v9 = (long long)parse_branch();
                    if (v9 == 0 && v15->field_0 != 0 && v17 != 0)
                    {
                        v18 = 0;
                        v8 = v18;
                        return v8;
                        postorder();
                        v18 = 0;
                        break;
                    }
                    if (v15->field_0 == 0 || v9 != 0)
                    {
                        v11->field_a8 = v11->field_a8 | v0;
                        /* goto 4311509; */
                    }
                }
                if (v15->field_0 == 0 || ((char)(((int)v10->field_8) & -9)) == 2 || v9 != 0 || v10->field_8 == 9 && v14 != 0)
                {
                    v4 = 0;
                    v5 = 10;
                    v17 = (long long)create_token_tree.isra.0();
                    v15->field_0 = 12;
                    v18 = v17;
                    v8 = v18;
                    return v8;
                }
            }
        }
        v18 = v17;
        v8 = v18;
        return v8;
        v8 = v18;
        return v8;
    }
}
