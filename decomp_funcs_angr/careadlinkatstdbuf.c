typedef struct struct_3 {
    char field_0;
} struct_3;

typedef struct struct_2 {
    char padding_0[8];
    unsigned long long field_8;
} struct_2;

typedef struct struct_1 {
    char padding_0[24];
    unsigned long long field_18;
} struct_1;

extern <missing-type> stdlib_allocator;

int careadlinkat()
{
    unsigned long v0;  // [bp-0x450]
    char v1;  // [bp-0x448]
    unsigned long long|struct_3 *|void * v10;  // rdi
    unsigned long long v11;  // rdi
    unsigned long v12;  // r8
    unsigned long v13;  // r9
    unsigned long long|unsigned int v14;  // r12
    unsigned long long v15;  // r13
    unsigned long long v16;  // r14
    struct_3 * v17;  // r15
    struct_3 *v3;  // rax
    unsigned long long|struct_3 * v4;  // rax
    unsigned long|unsigned long long v5;  // rcx
    struct_3 *|void * v6;  // rdx
    struct_1 *v7;  // rbx
    struct_3 * v8;  // rbp
    unsigned long|unsigned long long v9;  // rsi

    v15 = v9;
    v14 = v10;
    v0 = v13;
    v7 = (v12 == 0? &stdlib_allocator : v12);
    if (v6 != 0)
    {
        v8 = v6;
        v12 = (v5 <= 9223372036854775807? v5 : 9223372036854775807);
        v16 = (v5 <= 9223372036854775807? v5 : 9223372036854775807);
    }
    else
    {
        v16 = 0x400;
        v8 = &v1;
    }
    v17 = v8;
    while (true)
    {
        v5 = r14<8>;
        v6 = v17;
        v9 = v15;
        v10 = v14;
        v4 = *(&stack_base-1104)();
        if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
        {
            if (v4 >= r14<8>)
            {
                if (v8 != v17)
                {
                    v10 = v17;
                    *(rbx<8> + 16)();
                }
                if (r14<8> <= 4611686018427387902)
                {
                    v16 = r14<8> * 2 + 1;
                    v10 = v16;
                    v17 = *(rbx<8>)();
                }
                else
                {
                    *(__errno_location() + None) = 36;
                    v3 = v17;
                    return v3;
                }
            }
            else
            {
                *(v17 + v4) = 0;
                v14 = v4 + 1;
                if (v17 == &v1)
                {
                    v11 = v9;
                    v10 = *(rbx<8>)();
                    if (v10 != 0)
                    {
                        memcpy(v10, v17, v9);
                        v3 = v17;
                        return v3;
                    }
                    v16 = v9;
                }
                else if (v9 >= v16)
                {
                    v3 = v17;
                    return v3;
                }
                else if (v8 == v17)
                {
                    v3 = v17;
                    return v3;
                }
                else
                {
                    v4 = *(v7 + 0x8);
                    if (*(v7 + 0x8) == 0)
                    {
                        v3 = v17;
                        return v3;
                    }
                    v10 = v17;
                    v9 = v14;
                    rax<8>();
                    v3 = v17;
                    return v3;
                }
            }
            if ((v4 < r14<8> || v17 == 0) && (v4 < r14<8> || r14<8> <= 4611686018427387902) && (v10 == 0 || v4 >= r14<8>) && (v17 == &v1 || v4 >= r14<8>))
            {
                v4 = v7->field_18;
                if (v7->field_18 != 0)
                {
                    v10 = v16;
                    rax<8>();
                    *(__errno_location() + None) = 12;
                    break;
                }
                else
                {
                    *(__errno_location() + None) = 12;
                    v3 = v17;
                    return v3;
                }
            }
        }
        else if (v8 != v17)
        {
            v14 = ((int)v8->field_0);
            *(rbx<8> + 16)();
            *(__errno_location() + None) = v14;
            v3 = v17;
            return v3;
        }
        else
        {
            v3 = v17;
            return v3;
        }
    }
    v3 = v17;
    return v3;
}
