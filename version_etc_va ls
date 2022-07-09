typedef struct struct_1 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_1;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int version_etc_va()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x10]
    struct_0 *v10;  // fs
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    unsigned long v6;  // r8
    unsigned long long v7;  // r9
    struct_0 * v8;  // r10
    struct_1 *v9;  // r11

    v9 = v6;
    v7 = 0;
    while (true)
    {
        v4 = ((long long)v9->field_0);
        if (v9->field_0 <= 47)
        {
            v8 = v4 + v9->field_10;
            v9->field_0 = ((int)v4) + 8;
            v5 = v8->field_0;
            v0 = v8->field_0;
            if (v5 == 0)
            {
                version_etc_arn();
                return v1 ^ *(v10 + 0x28);
            }
        }
        v8 = v9->field_8;
        v9->field_8 = v9->field_8 + 8;
        v5 = v8->field_0;
        v0 = v8->field_0;
        if (v5 == 0)
        {
            version_etc_arn();
            break;
        }
        if (v9->field_0 <= 47 && v5 != 0 || v5 != 0 && v9->field_0 > 47)
        {
            v7 += 1;
            version_etc_arn();
            return v1 ^ *(v10 + 0x28);
        }
    }
    return v1 ^ *(v10 + 0x28);
}
