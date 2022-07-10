typedef struct struct_2 {
    unsigned int field_0;
} struct_2;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_1 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[32];
    unsigned long long field_28;
    unsigned long long field_30;
} struct_1;

extern <missing-type> default_quoting_options;

int quotearg_alloc_mem()
{
    unsigned long v0;  // [bp-0x78]
    unsigned long v1;  // [bp-0x70]
    struct_0 *v10;  // rdx
    struct_1 *v11;  // rbx
    unsigned int v12;  // r9d
    struct_2 *v13;  // r12
    unsigned long long v14;  // r15
    unsigned long v2;  // [bp-0x68]
    unsigned long v3;  // [bp-0x50]
    unsigned int v4;  // [bp-0x48]
    unsigned int v5;  // [bp-0x44]
    unsigned long v6;  // [bp-0x40]
    unsigned long v9;  // rcx

    v11 = (v9 == 0? &default_quoting_options : v9);
    v13 = __errno_location();
    v12 = ((int)(((int)(v10 == 0)) | v11->field_4));
    v4 = v13->field_0;
    v2 = v11->field_30;
    v1 = v11->field_28;
    v0 = v11 + 8;
    v6 = v11 + 8;
    v5 = v12;
    v14 = (long long)quotearg_buffer_restyled();
    v3 = v14 + 1;
    v2 = v11->field_30;
    v1 = v11->field_28;
    v0 = v6;
    v3 = (long long)xcharalloc();
    quotearg_buffer_restyled();
    v13->field_0 = v4;
    if (v10 != 0)
    {
        v10->field_0 = v14;
        return v3;
    }
    return v3;
}
