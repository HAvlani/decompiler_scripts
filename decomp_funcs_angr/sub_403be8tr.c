typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

typedef struct struct_1 {
    char padding_0[16];
    unsigned int field_10;
} struct_1;

int sub_403be8()
{
    unsigned long v0;  // [bp+0x0]
    unsigned long long v10;  // rbx
    struct_0 *v11;  // rsi
    unsigned long long v12;  // r12
    unsigned long long v13;  // r13
    unsigned long long v14;  // r13
    struct_1 *v15;  // r14
    unsigned long long v16;  // r14
    unsigned long|unsigned long long v2;  // [bp+0x10]
    unsigned long long v3;  // [bp+0x18]
    unsigned long long v4;  // [bp+0x20]
    unsigned long long v5;  // rax
    unsigned long long v8;  // rbx
    unsigned long long v9;  // rbx

    if (v11 != 0)
    {
        if (!(((int)v15->field_10) != 6))
        {
            v11->field_0 = 0;
        }
        else if (((int)v15->field_10) == 10)
        {
            v11->field_0 = 1;
        }
    }
    v9 = v2;
    if (v2 == 18446744069414584319)
    {
        v9 = 0;
        while (true)
        {
            if ((long long)is_char_class_member() == 0)
            {
                v9 = ((long long)(((int)v9) + 1));
                __assert_fail(); /* do not return */
            }
        }
        v2 = ((long long)v9);
        break;
    }
    v5 = is_char_class_member();
    if (((long long)v5) != 0)
    {
        v14 = v9;
        v8 = ((long long)(((int)v9) + 1));
        if (((int)v8) > 255)
        {
        }
        else
        {
            while (true)
            {
                v5 = is_char_class_member();
                if (((long long)v5) != 0)
                {
                    break;
                }
                v8 = ((long long)(((int)v8) + 1));
            }
            v2 = v8;
            v10 = v0;
            v12 = v2;
            v13 = v3;
            v16 = v4;
            return v14;
        }
    }
    __assert_fail(); /* do not return */
}
