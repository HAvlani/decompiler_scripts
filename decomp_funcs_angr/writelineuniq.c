extern struct_0 countmode;
extern char output_first_repeated;
extern char output_later_repeated;
extern char output_unique;

int writeline()
{
    unsigned long long v1;  // rax
    unsigned long|unsigned long long v2;  // rdx
    char v3;  // sil

    if (v2 == 0)
    {
        v1 = ((long long)(((int)output_unique) ^ 1));
    }
    else if (((long long)v3) == 0)
    {
        v1 = ((long long)(((int)output_first_repeated) ^ 1));
        if (((char)((long long)(((int)output_first_repeated) ^ 1))) != 0)
        {
            return v1;
        }
    }
    else
    {
        v1 = ((long long)(((int)output_later_repeated) ^ 1));
    }
    if (v2 == 0 || ((long long)v3) != 0)
    {
        if (((long long)v1) != 0)
        {
            return v1;
        }
    }
    if (((long long)v1) == 0 && v2 == 0 || ((long long)v1) == 0 && ((long long)v3) != 0 || ((char)((long long)(((int)output_first_repeated) ^ 1))) == 0 && ((long long)v3) == 0 && v2 != 0)
    {
        if (countmode != 0)
        {
        }
        else
        {
            v2 += 1;
            __printf_chk(0x1, "%7lu ", v2);
        }
    }
}
