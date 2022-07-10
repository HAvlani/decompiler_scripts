typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int hash_table_ok()
{
    struct_0 * v1;  // rax
    unsigned long long [2] v2;  // rcx
    unsigned long long v3;  // rdx
    unsigned long long v4[4];  // rdi
    unsigned long long v5;  // r8

    v2 = v4[0];
    v3 = 0;
    v5 = 0;
    if (!(v4[0] >= v4[1]))
    {
        while (true)
        {
            if (v2[0] != 0)
            {
                v1 = v2[1];
                v5 += 1;
                v3 += 1;
                if (v2[1] != 0)
                {
                    do
                    {
                        v1 = v1->field_8;
                        v3 += 1;
                    }
                    while (v1 != 0);
                    v2 += 16;
                    if (v4[3] != v5)
                    {
                        return 0;
                    }
                    return 0;
                }
            }
            if (v2[0] == 0 || v2[1] == 0)
            {
                v2 += 16;
                if (v4[3] != v5)
                {
                    return 0;
                }
                return 0;
            }
        }
    }
    else if (v4[3] != v5)
    {
        return 0;
    }
    else
    {
        return 0;
    }
}
