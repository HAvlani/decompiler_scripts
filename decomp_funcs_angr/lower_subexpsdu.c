typedef struct struct_0 {
    char padding_0[48];
    char field_30;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

int lower_subexps()
{
    unsigned int v0;  // [bp-0x24]
    struct_1 * v2;  // rax
    struct_0 *v3;  // rdx
    struct struct_0 *v4[3];  // rsi

    v3 = v4[1];
    v0 = 0;
    if (v3 != 0)
    {
        if (v4[1]->field_30 == 17)
        {
            v2 = lower_subexp();
            v4[1] = v2;
            if (v2 != 0)
            {
                v2->field_0 = v4;
            }
        }
    }
    if (!(v4[2] != 0))
    {
        return 0;
    }
    else if (v4[2]->field_30 != 17)
    {
        return 0;
    }
    else
    {
        v2 = lower_subexp();
        v4[2] = v2;
        if (v2 == 0)
        {
            return 0;
        }
        v2->field_0 = v4;
        return 0;
    }
}
