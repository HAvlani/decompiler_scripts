typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_3 {
    char padding_0[32];
    char field_20;
} struct_3;

typedef struct struct_1 {
    char padding_0[8];
    char field_8;
} struct_1;

typedef struct struct_2 {
    char padding_0[72];
    unsigned long long field_48;
} struct_2;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int sub_41ba83()
{
    struct_1 *v0;  // [bp+0x8]
    unsigned long long v1;  // [bp+0x10]
    unsigned long long v10;  // [bp+0x88]
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax
    char v17;  // al
    struct_1 *v19;  // rdi
    struct_4 *v2;  // [bp+0x20]
    unsigned long long v20;  // rdi
    struct_3 *v21;  // r12
    struct_2 *v23;  // r15
    unsigned long v3;  // [bp+0x28]
    unsigned long long v4;  // [bp+0x30]
    struct_0 *v5;  // [bp+0x40]
    unsigned long long v6;  // [bp+0x48]
    char v7;  // [bp+0x50]
    unsigned long v8;  // [bp+0x58]
    char v9;  // [bp+0x73]

    v10 = 0;
    v12 = calloc(0x20, 0x1);
    v2 = v12;
    v13 = calloc(0x50, 0x1);
    v21 = v13;
    v17 = ((char)(v13 == 0));
    if (((long long)(((char)(v12 == 0)) | ((char)(v13 == 0)))) == 0)
    {
        v11 = ((long long)v19->field_8);
        if (v19->field_8 != 2)
        {
            v7 = 0;
            if (v11 == 25)
            {
                v21->field_20 = v21->field_20 | 1;
                if ((((short)v1) & 0x100) != 0)
                {
                    v2->field_0 = v2->field_0 | 0x400;
                }
                v23->field_48 = v23->field_48 + (long long)peek_token_bracket();
                peek_token_bracket();
                v11 = ((long long)v19->field_8);
                if (v19->field_8 != 2)
                {
                    v7 = 1;
                }
                else
                {
                    v5->field_0 = 2;
                }
            }
            if (v19->field_8 != 2 || v11 != 25)
            {
                if (v11 != 21)
                {
                    v20 = v1;
                    v6 = 0;
                    v3 = &stack_base+192;
                    v8 = &stack_base+136;
                    v4 = 0;
                    v9 = ((char)(((int)v20) % 0x10000 & 1));
                }
                else
                {
                    v0->field_8 = 1;
                    v20 = v1;
                    v6 = 0;
                    v3 = &stack_base+192;
                    v8 = &stack_base+136;
                    v4 = 0;
                    v9 = ((char)(((int)v20) % 0x10000 & 1));
                }
            }
        }
        else
        {
            v5->field_0 = 2;
        }
    }
    else
    {
        rpl_free();
        rpl_free();
    }
}
