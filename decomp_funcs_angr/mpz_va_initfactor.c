typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int mpz_va_init()
{
    unsigned int v0;  // [bp-0x58]
    struct_0 *|unsigned long v1;  // [bp-0x50]
    unsigned long long|unsigned int v10;  // rax
    unsigned long v11;  // rcx
    unsigned long|struct_0 *|unsigned long long v12;  // rdx
    unsigned long long v13;  // rbx
    unsigned long v14;  // rsi
    unsigned long long v15;  // rdi
    unsigned long v16;  // r8
    unsigned long v17;  // r9
    struct_0 *v18;  // fs
    unsigned long v2;  // [bp-0x48]
    unsigned long v3;  // [bp-0x40]
    unsigned long v4;  // [bp-0x28]
    unsigned long v5;  // [bp-0x20]
    unsigned long v6;  // [bp-0x18]
    unsigned long v7;  // [bp-0x10]

    v13 = v15;
    v4 = v12;
    v5 = v11;
    v6 = v16;
    v7 = v17;
    v0 = 8;
    v1 = &stack_base+8;
    v2 = &stack_base-56;
    while (true)
    {
        v10 = ((long long)v0);
        if (v0 <= 47)
        {
            v12 = v10 + v2;
            v10 = ((int)(((int)v10) + 8));
            v15 = v14;
            v0 = ((int)v10) + 8;
            if (v14 == 0)
            {
                return v3 ^ *(v18 + 0x28);
            }
        }
        v12 = v1;
        v15 = v1->field_0;
        v1 += 8;
        if (v15 == 0)
        {
            return v3 ^ *(v18 + 0x28);
        }
        if (v0 <= 47 && v14 != 0 || v0 > 47 && v15 != 0)
        {
            rbx<8>();
        }
    }
}
