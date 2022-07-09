typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int close_stream()
{
    unsigned long long v1;  // rax
    struct_0 *v2;  // rdi

    v1 = rpl_fclose();
    if (((int)(v2->field_0 & 32)) == 0)
    {
        if (!(((int)v1) != 0))
        {
            return v1;
        }
        else if (__fpending() == 0)
        {
            v1 = ((long long)(0 - ((int)(*(__errno_location()) != 9))));
            return v1;
        }
        else
        {
            v1 = -1;
            return v1;
        }
    }
    if (((int)v1) == 0)
    {
        *(__errno_location() + None) = 0;
        v1 = -1;
        return v1;
    }
    else
    {
        v1 = -1;
        return v1;
    }
}
