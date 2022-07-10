typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[42];
    char field_32;
} struct_0;

int duplicate_tree()
{
    struct_0 *|char v0;  // [bp-0x38]
    struct_0 * v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rdx
    unsigned long long [3] v5;  // rbx
    struct_0 * v6;  // rbp
    unsigned long long v7[3];  // rdi
    struct struct_0 ** v8;  // r14

    v5 = v7;
    v6 = v7[0];
    v8 = &v0;
    while (true)
    {
        v2 = create_token_tree.isra.0();
        v0 = v2;
        if (v2 == 0)
        {
            break;
        }
        v2->field_0 = v6;
        v6 = v0;
        v0->field_32 = v0->field_32 | 4;
        v3 = v5[1];
        if (v5[1] != 0)
        {
            v8 = v6 + 8;
            v5 = v3;
        }
        else
        {
            while (true)
            {
                v4 = v5[2];
                if (v5 != v3 && v5[2] != 0)
                {
                    v8 = v6 + 16;
                    v5 = v4;
                }
                if (v5 == v3 || v5[2] == 0)
                {
                    v4 = v5[0];
                    v6 = v6->field_0;
                    v3 = v5;
                    if (v5[0] != 0)
                    {
                        v5 = v4;
                    }
                    else
                    {
                        v2 = v0;
                        return v2;
                    }
                }
            }
        }
    }
    return v2;
}
