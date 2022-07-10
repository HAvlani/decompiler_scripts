typedef struct struct_1 {
    unsigned int field_0;
    char padding_4[8];
    unsigned int field_c;
    char padding_10[7];
    char field_17;
    char padding_18[34];
    char field_3a;
    char padding_3b[9];
    unsigned int field_44;
} struct_1;

extern struct_0 top_level_dst_name;
extern struct_0 top_level_src_name;

int copy()
{
    unsigned long long v0;  // [bp-0x48]
    struct_1 *v1;  // [bp-0x40]
    unsigned long long v10;  // rbx
    unsigned long long v11;  // rsi
    unsigned long long v12;  // rdi
    struct_1 *v13;  // r9
    unsigned long long v14;  // r11
    unsigned long long v2;  // [bp-0x38]
    unsigned long v3;  // [bp-0x30]
    unsigned long v4;  // [bp-0x28]
    unsigned long v5;  // [bp-0x20]
    char v6;  // [bp-0x11]
    unsigned long long v7;  // [bp+0x8]
    unsigned long long v8;  // [bp+0x10]
    unsigned long long v9;  // rax

    v14 = v7;
    v10 = v8;
    if (!(v13->field_0 <= 3))
    {
        __assert_fail(); /* do not return */
    }
    else if (!(((int)(((long long)v13->field_c) - 1)) <= 2))
    {
        __assert_fail(); /* do not return */
    }
    else if (v13->field_44 <= 2)
    {
        if (v13->field_17 != 0)
        {
            if (v13->field_3a != 0)
            {
                __assert_fail(); /* do not return */
            }
        }
        if (v13->field_3a == 0 || v13->field_17 == 0)
        {
            if (!(v13->field_c != 2))
            {
                v6 = 0;
                v5 = v10;
                v4 = v14;
                top_level_src_name = v12;
                top_level_dst_name = v11;
                v3 = &stack_base-17;
                v2 = 1;
                v1 = v13;
                v0 = 0;
                v9 = copy_internal();
                return v9;
            }
            else if (v13->field_44 != 2)
            {
                v6 = 0;
                v5 = v10;
                v4 = v14;
                top_level_src_name = v12;
                top_level_dst_name = v11;
                v3 = &stack_base-17;
                v2 = 1;
                v1 = v13;
                v0 = 0;
                v9 = copy_internal();
                return v9;
            }
            else
            {
                __assert_fail(); /* do not return */
            }
        }
    }
    else
    {
        __assert_fail(); /* do not return */
    }
}
