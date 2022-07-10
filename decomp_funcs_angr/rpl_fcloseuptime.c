typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int rpl_fclose()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    struct_0 *v3;  // rbx
    void *v5;  // rdi
    unsigned int v6;  // r12d

    v1 = fileno(v5);
    if (v1 >= 0)
    {
        v1 = __freading();
        if (v1 != 0)
        {
            v1 = lseek(fileno(v5), 0x0, 0x1);
        }
        if (v1 == 0 || v1 != 18446744069414584319)
        {
            v1 = rpl_fflush();
            if (v1 != 0)
            {
                v6 = ((int)v3->field_0);
                v2 = fclose(v5);
                if (v6 == 0)
                {
                    return v2;
                }
                *(__errno_location() + None) = v6;
                v2 = -1;
                return v2;
            }
        }
    }
}
