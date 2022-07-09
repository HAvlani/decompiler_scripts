typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

int fwrite_uppcase()
{
    unsigned long long v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x18]
    char * v10;  // rbx
    void *v11;  // rbp
    unsigned long v12;  // rsi
    unsigned long|void * v13;  // rdi
    unsigned long long v14;  // r12
    unsigned long long v15;  // r12
    unsigned long long v16;  // r12
    unsigned long v17;  // r13
    unsigned long long v18;  // r13
    unsigned long long v2;  // [bp-0x10]
    unsigned long v3;  // [bp-0x8]
    unsigned long v5;  // rax
    unsigned long long v6;  // rax
    unsigned long|struct_1 * v7;  // rdx
    unsigned long long v8;  // rbx
    unsigned long long v9;  // rbx

    if (v7 != 0)
    {
        v3 = v17;
        v2 = v16;
        v1 = &stack_base+0;
        v11 = v13;
        v0 = v8;
        v10 = v12;
        v14 = v7 + v12;
        while (true)
        {
            v7 = ((long long)*(v10));
            v10 += 1;
            v13 = ((long long)*(*(__ctype_toupper_loc()) + v7 * 4));
            v6 = fputc(v13, v11);
            if (v10 == v14)
            {
                break;
            }
        }
        v9 = v0;
        v15 = v2;
        v18 = v3;
        return v6;
    }
    return v5;
}
