typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int powm2()
{
    unsigned long v0;  // [bp-0x78]
    unsigned long v1;  // [bp-0x70]
    unsigned long long|unsigned int v10;  // ebx
    unsigned long|unsigned long long v11;  // rbx
    unsigned long|unsigned long long v12;  // rbp
    unsigned long long v13[2];  // rsi
    struct_0 *v14;  // rdi
    unsigned long long v15;  // r8
    unsigned long long v16;  // r8
    unsigned long long v17[2];  // r9
    unsigned long long v18;  // r10
    unsigned long long v19;  // r12
    unsigned long v2;  // [bp-0x60]
    unsigned long long v20;  // r14
    unsigned int v21;  // cc_dep1
    unsigned long v3;  // [bp-0x58]
    unsigned long v4;  // [bp-0x50]
    unsigned long v5;  // [bp-0x48]
    unsigned long long v7;  // rax
    struct_0 *v8;  // rcx
    unsigned long long v9[2];  // rdx

    v19 = v15;
    v7 = v17[1];
    v16 = v13[0];
    v18 = v13[1];
    v20 = v8->field_0;
    v3 = v17[0];
    v10 = 64;
    v2 = v7;
    v12 = v9[0];
    while (true)
    {
        if (((long long)(v12 & 1)) != 0)
        {
            v1 = v1;
            v0 = v0;
            v5 = v16;
            v4 = v18;
            v3 = (long long)mulredc2();
            v2 = v14->field_0;
        }
        v1 = v19;
        v0 = v20;
        v12 = v12 % 2;
        v16 = (long long)mulredc2();
        v21 = v10;
        v10 = ((long long)v10) - 1;
        if (v21 == 1)
        {
            break;
        }
    }
    v11 = v9[1];
    if (v9[1] == 0)
    {
        v14->field_0 = v2;
        return v3;
    }
    while (true)
    {
        if (((long long)(v11 & 1)) != 0)
        {
            v1 = v1;
            v0 = v0;
            v5 = v16;
            v4 = v18;
            v3 = (long long)mulredc2();
            v2 = v14->field_0;
        }
        v1 = v1;
        v0 = v0;
        v11 = v11 % 2;
        v16 = (long long)mulredc2();
        if (((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, cc_dep1<8>, rbx<8>, cc_ndep<8>)))
        {
            break;
        }
    }
    v14->field_0 = v2;
    return v3;
}
