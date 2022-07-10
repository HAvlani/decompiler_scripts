typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
    struct struct_1 *field_10;
} struct_0;

typedef struct struct_2 {
    char padding_0[8];
    unsigned long long field_8;
} struct_2;

int ino_map_insert()
{
    struct_2 *v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long [2] v4;  // rbx
    unsigned long long v5[3];  // rbp
    unsigned long v6;  // rsi
    struct_0 *v7;  // rdi

    v5 = v7;
    v4 = v7->field_10;
    if (!(v7->field_10 != 0))
    {
        v7->field_10 = v7->field_10;
        v4 = malloc(0x10);
        if (v4 == 0)
        {
            v3 = 18446744069414584319;
            return v3;
        }
    }
    else if (v7->field_10->field_0 == v6)
    {
        return v7->field_10->field_8;
    }
    if (v7->field_10 == 0 && v4 != 0 || v7->field_10 != 0 && v7->field_10->field_0 != v6)
    {
        v4[0] = v6;
        v1 = hash_insert();
        if (!(v1 != 0))
        {
            v3 = 18446744069414584319;
            return v3;
        }
        else if (v4 != v1)
        {
            v3 = v1->field_8;
            v4[1] = v3;
            return v3;
        }
        else
        {
            v2 = v5[1];
            v5[2] = 0;
            v5[1] = v2 + 1;
            v4[1] = v2;
            return v2;
        }
    }
}
