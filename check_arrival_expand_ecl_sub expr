typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

typedef struct struct_2 {
    char padding_0[16];
    unsigned long long field_10;
} struct_2;

int check_arrival_expand_ecl_sub()
{
    struct_3 *|unsigned long long v1;  // rax
    unsigned long v2;  // rcx
    struct_3 *|unsigned long long|struct_2 * v3;  // rdx
    unsigned long long v4[6];  // rbx
    unsigned long long v5;  // rbp
    unsigned long long v6;  // rdi
    unsigned int v7;  // r8d

    v5 = v3;
    v4 = v6;
    while (true)
    {
        v1 = re_node_set_contains.isra.0();
        if (v1 == 0)
        {
            v1 = v5 * 16 + v4[0];
            if (((int)*((v5 << 4) + v4[0] + 8)) == v7 && v1->field_0 == v2)
            {
                if (v7 == 9)
                {
                    v1 = re_node_set_insert();
                    if (((long long)v1) == 0)
                    {
                        break;
                    }
                    else
                    {
                        return 0;
                    }
                }
                else
                {
                    return 0;
                }
            }
            if (((int)*((v5 << 4) + v4[0] + 8)) != v7 || v1->field_0 != v2)
            {
                v1 = re_node_set_insert();
                if (((long long)v1) == 0)
                {
                    break;
                }
                if (((long long)v1) != 0)
                {
                    v5 *= 24;
                    v3 = v4[5] + v5;
                    v1 = *(v4[5] + v5 + 8);
                    if (*(v4[5] + v5 + 8) != 0)
                    {
                        v3 = v3->field_10;
                        if (v1 == 2)
                        {
                            v1 = check_arrival_expand_ecl_sub();
                            if (((int)v1) == 0)
                            {
                                v3 = *(v4[5] + v5 + 16);
                            }
                            else
                            {
                                return v1;
                            }
                        }
                        if (((int)v1) == 0 || v1 != 2)
                        {
                            v5 = *(rdx<8>);
                        }
                    }
                    else
                    {
                        return 0;
                    }
                }
                else
                {
                    v1 = 12;
                    return v1;
                }
            }
        }
        else
        {
            return 0;
        }
    }
    v1 = 12;
    return v1;
}
