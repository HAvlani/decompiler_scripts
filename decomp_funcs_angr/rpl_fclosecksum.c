typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int rpl_fclose()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    struct_0 *v4;  // rbx
    void *v5;  // rdi
    unsigned int v6;  // r12d

    v2 = fileno(v5);
    if (v2 >= 0)
    {
        v2 = __freading();
        if (v2 != 0)
        {
            v2 = lseek(fileno(v5), 0x0, 0x1);
        }
        if (v2 == 0 || v2 != 18446744069414584319)
        {
            v2 = rpl_fflush();
            if (v2 != 0)
            {
                v6 = ((int)v4->field_0);
                v1 = fclose(v5);
                if (v6 == 0)
                {
                    return v1;
                }
                *(__errno_location() + None) = v6;
                v1 = -1;
                return v1;
            }
        }
    }
}
