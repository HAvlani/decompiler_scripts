typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[12];
    unsigned int field_14;
    unsigned long long field_18;
} struct_0;

int process_dir()
{
    BOT tmp_15;  // tmp #15
    unsigned long v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x50]
    struct_0 *v10;  // rdx
    struct_0 *v11;  // rbx
    unsigned long v12;  // rsi
    unsigned long v13;  // rdi
    unsigned long long v14;  // cc_dep1
    unsigned long long v2;  // [bp-0x48]
    unsigned long long v3;  // [bp-0x40]
    unsigned long v4;  // [bp-0x30]
    unsigned long v5;  // [bp-0x28]
    unsigned long v6;  // [bp-0x20]
    unsigned long long v9;  // rdx

    v11 = v10;
    v14 = v10->field_18;
    v9 = v10->field_0;
    if (v14 != 0)
    {
        if (v4 == 0)
        {
            v6 = v12;
            v5 = v13;
            v4 = v9;
            *(__errno_location() + None) = 95;
        }
    }
    tmp_15 = ((long long)v11->field_14);
    v3 = 1;
    v2 = 18446744069414584319;
    v1 = 18446744069414584319;
    v0 = tmp_15;
    tmp_15 = ((long long)(make_dir_parents() ^ 1));
    if (!(((long long)tmp_15) == 0))
    {
        return ((long long)tmp_15);
    }
    else if (!(v11->field_18 != 0))
    {
        return ((long long)tmp_15);
    }
    else if (v11->field_0 != 0)
    {
        *(__errno_location() + None) = 95;
        return ((long long)tmp_15);
    }
    else
    {
        return ((long long)tmp_15);
    }
}
