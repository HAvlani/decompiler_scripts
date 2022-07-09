extern struct_0 first_page_number;
extern unsigned long long last_page_number;

int first_last_page()
{
    char *v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x38]
    unsigned long long v4;  // rax
    char *|unsigned long long v5;  // rax
    unsigned long|unsigned long long v7;  // rdx

    v2 = 18446744069414584319;
    v5 = xstrtoumax();
    if ((v5 & -3) == 0)
    {
        v5 = v0;
        if (!(v0 != v7))
        {
            v4 = 0;
            return v4;
        }
        else if (v1 != 0)
        {
            v7 = ((long long)*(v5));
            if (*(v5) == 58)
            {
                v5 = xstrtoumax();
                if (!(v5 == 0))
                {
                    xstrtol_fatal();
                }
                else if (v0 == v0 + 1)
                {
                    v4 = 0;
                    return v4;
                }
                else if (v2 < v1)
                {
                    v4 = 0;
                    return v4;
                }
                else
                {
                    v7 = ((long long)*(v0));
                }
            }
            if (*(v5) != 58 || v5 == 0 && v2 >= v1 && v0 != v0 + 1)
            {
                if (((long long)v7) == 0)
                {
                    first_page_number = v1;
                    last_page_number = v2;
                    v4 = 1;
                    return v4;
                }
                v4 = 0;
                return v4;
            }
        }
        else
        {
            v4 = 0;
            return v4;
        }
    }
    xstrtol_fatal();
}
