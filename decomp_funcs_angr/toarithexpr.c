typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_1 *field_8;
} struct_0;

typedef struct struct_2 {
    char padding_0[1];
    char field_1;
} struct_2;

int toarith()
{
    BOT tmp_6;  // tmp #6
    unsigned long long v0;  // [bp-0x10]
    unsigned long v1;  // [bp-0x8]
    unsigned long long v10;  // rbx
    struct_0 *v11;  // rdi
    unsigned long long v3;  // rax
    unsigned int v5;  // eax
    struct_2 * v7;  // rdx
    unsigned long long v8;  // rbx
    unsigned long long v9;  // rbx

    v5 = ((int)v11->field_0);
    if (v11->field_0 == 0)
    {
        return 1;
    }
    v1 = &stack_base+0;
    v0 = v9;
    v7 = ((long long)(v11->field_8->field_0 == 45)) + v11->field_8;
    if (((int)*(((long long)(v11->field_8->field_0 == 45)) + v11->field_8)) - 48 <= 9)
    {
        while (true)
        {
            v3 = ((long long)v7->field_1);
            v7 += 1;
            tmp_6 = v3;
            if (((long long)tmp_6) != 0)
            {
                v5 = ((int)(((int)v3) - 48));
                v10 = v0;
                return 0;
            }
            else if (mpz_init_set_str() == 0)
            {
                rpl_free();
                v11->field_0 = 0;
                v8 = v0;
                return 1;
            }
            else
            {
                error(0x3, 0x22, "%s");
            }
        }
    }
    else
    {
        v10 = v0;
        return 0;
    }
}
