typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int rpl_fclose()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    struct_0 *v4;  // rbx
    void *v6;  // rdi
    unsigned int v7;  // r12d

    v1 = fileno(v6);
    if (v1 >= 0)
    {
        v1 = __freading();
        if (v1 != 0)
        {
            fileno(v6);
            v1 = lseek();
        }
        if (v1 == 0 || v1 != 18446744069414584319)
        {
            v1 = rpl_fflush();
            if (v1 != 0)
            {
                v7 = ((int)v4->field_0);
                v2 = fclose(v6);
                if (v7 == 0)
                {
                    return v2;
                }
                *(__errno_location() + None) = v7;
                v2 = -1;
                return v2;
            }
        }
    }
}
