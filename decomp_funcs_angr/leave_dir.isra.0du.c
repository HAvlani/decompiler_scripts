typedef struct struct_0 {
    char padding_0[8];
    struct struct_1 *field_8;
    char padding_10[96];
    unsigned long long field_70;
    unsigned long long field_78;
} struct_0;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

int leave_dir.isra.0()
{
    unsigned long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    struct_2 *v10;  // fs
    unsigned long v2;  // [bp-0x10]
    unsigned long long v4[3];  // rax
    unsigned long long [16]|unsigned long long v5;  // rcx
    struct_0 *|unsigned long long v6;  // rdx
    unsigned long long v7[16];  // rdx
    unsigned long long *v8[3];  // rsi

    if ((((short)(long long)hash_remove()) & 258) == 0)
    {
        v5 = v6->field_8;
        if (!(v6->field_8 != 0))
        {
            return v2 ^ *(v10 + 0x28);
        }
        else if (!(((char)(v6->field_8->field_58 - 0 >> 63))))
        {
            v4 = v8[0];
            if (v8[0][0] != v6->field_78)
            {
                return v2 ^ *(v10 + 0x28);
            }
            else if (v8[0][1] != v6->field_70)
            {
                return v2 ^ *(v10 + 0x28);
            }
            else
            {
                v8[0][1] = v6->field_8->field_70;
                v4[0] = v5[15];
                return v2 ^ *(v10 + 0x28);
            }
        }
        else
        {
            return v2 ^ *(v10 + 0x28);
        }
    }
    v5 = v7[14];
    v6 = v7[15];
    v0 = v5;
    v1 = v6;
    (long long)hash_remove() = (long long)hash_remove();
    rpl_free();
    return v2 ^ *(v10 + 0x28);
}
