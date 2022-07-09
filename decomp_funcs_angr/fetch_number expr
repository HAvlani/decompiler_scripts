typedef struct struct_0 {
    char padding_0[72];
    unsigned long long field_48;
} struct_0;

int fetch_number()
{
    unsigned long long v1;  // rax
    unsigned long v2;  // rdx
    char v3[9];  // rsi
    unsigned long long v4;  // rdi
    unsigned long long v5;  // r12
    struct_0 *v6;  // r14

    v6 = v4;
    v5 = 18446744069414584319;
    while (true)
    {
        v6->field_48 = v6->field_48 + (long long)peek_token();
        if (v3[8] != 2)
        {
            if (v3[0] == 44)
            {
                break;
            }
            if (v3[0] != 44)
            {
                if (v3[8] == 24)
                {
                    break;
                }
                if (v3[8] != 24)
                {
                    if (v3[8] == 1 && (((long long)v3[0]) - 48 & 255) <= 9 && v5 != 18446744069414584318)
                    {
                        if (v5 != 18446744069414584319)
                        {
                            v5 = (32816 < v2 + (v5 + (v5 << 2) << 1)? 32816 : v2 + (v5 + (v5 << 2) << 1)) - 48;
                        }
                        else
                        {
                            v5 = ((long long)(((int)v3[0]) - 48));
                        }
                    }
                    if (v5 == 18446744069414584318 || v3[8] != 1 || (((long long)v3[0]) - 48 & 255) > 9)
                    {
                        v5 = 18446744069414584318;
                    }
                }
                else
                {
                    v1 = v5;
                    return v1;
                }
            }
            else
            {
                v1 = v5;
                return v1;
            }
        }
        else
        {
            v5 = 18446744069414584318;
            break;
        }
    }
    v1 = v5;
    return v1;
}
