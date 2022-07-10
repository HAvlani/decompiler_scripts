typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned int field_18;
    unsigned long long field_1c;
    char padding_24[4];
    unsigned long long field_28;
    unsigned long long field_30;
    unsigned long long field_38;
    unsigned long long field_40;
    unsigned long long field_48;
    unsigned long long field_50;
    unsigned long long field_58;
    unsigned long long field_60;
    unsigned long long field_68;
    unsigned long long field_70;
} struct_0;

int do_statx()
{
    char v0;  // [bp-0x127]
    unsigned int v1;  // [bp-0x124]
    unsigned long v10;  // [bp-0xd8]
    unsigned int v11;  // [bp-0xd0]
    unsigned long v12;  // [bp-0xc8]
    unsigned int v13;  // [bp-0xc0]
    unsigned long v14;  // [bp-0xb8]
    unsigned int v15;  // [bp-0xb0]
    unsigned int v16;  // [bp-0xa8]
    unsigned int v17;  // [bp-0xa4]
    unsigned int v18;  // [bp-0xa0]
    unsigned int v19;  // [bp-0x9c]
    unsigned int v2;  // [bp-0x118]
    unsigned long long v21;  // rax
    unsigned long long v22;  // rdx
    struct_0 *v23;  // rbx
    unsigned long long v24;  // rsi
    unsigned int v25;  // r8d
    unsigned long v3;  // [bp-0x114]
    unsigned short v4;  // [bp-0x10c]
    unsigned long v5;  // [bp-0x108]
    unsigned long v6;  // [bp-0x100]
    unsigned long v7;  // [bp-0xf8]
    unsigned long v8;  // [bp-0xe8]
    unsigned int v9;  // [bp-0xe0]

    v23 = v22;
    v21 = statx();
    if (((int)v21) < 0)
    {
        return v21;
    }
    v23->field_0 = ((long long)v19) * 0x1000 & 0xffffff00000 | ((long long)v18) * 0x100000000 & 0xffffefff00000000 | ((long long)(((int)(((long long)v18) * 0x100)) & 0xfff00)) | ((long long)v19);
    v23->field_8 = v5;
    v23->field_10 = ((long long)v2);
    v23->field_18 = ((int)v4);
    *(v23 + 0x1c) = v3;
    v24 = ((long long)v17);
    v23->padding_24 = v24 * 0x1000 & 0xffffff00000 | ((long long)v16) * 0x100000000 & 0xffffefff00000000 | ((long long)(((int)(((long long)v16) * 0x100)) & 0xfff00)) | v24;
    v23->field_30 = ((long long)v1);
    v23->field_28 = v6;
    v23->field_48 = ((long long)v9);
    v23->field_38 = v7;
    v23->field_58 = ((long long)v15);
    v23->field_40 = v8;
    v23->field_68 = ((long long)v13);
    v23->field_50 = v14;
    v23->field_60 = v12;
    if ((((short)v25) & 0x800) == 0)
    {
        return v21;
    }
    else if (((long long)(v0 & 8)) != 0)
    {
        v23->field_50 = v10;
        v23->field_58 = ((long long)v11);
        return v21;
    }
    else
    {
        v23->field_58 = 18446744069414584319;
        v23->field_50 = 18446744069414584319;
        return v21;
    }
}
