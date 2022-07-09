typedef struct struct_0 {
    char padding_0[32];
    unsigned long long field_20;
    unsigned long long field_28;
    char field_30;
    char field_31;
    char padding_32[1];
    char field_33;
    char padding_34[2];
    char field_36;
    char padding_37[1];
    char field_38;
} struct_0;

int default_key_compare()
{
    unsigned long long v1;  // rax
    struct_0 *v2;  // rdi

    v1 = 0;
    if (v2->field_20 != 0)
    {
        return v1;
    }
    else if (v2->field_28 != 0)
    {
        return v1;
    }
    else
    {
        v1 = ((long long)v2->field_30);
        if (!(((long long)v2->field_30) == 0))
        {
            return 0;
        }
        else if (v2->field_31 != 0)
        {
            return v1;
        }
        else if ((0xffff00ff0000 & v2->field_30) != 0)
        {
            return v1;
        }
        else
        {
            v1 = ((long long)v2->field_36);
            if (!(((long long)v2->field_36) == 0))
            {
                return 0;
            }
            else if (v2->field_38 != 0)
            {
                return v1;
            }
            else
            {
                return ((long long)(((int)v2->field_33) ^ 1));
            }
        }
    }
}
