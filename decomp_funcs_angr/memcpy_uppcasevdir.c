typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

int memcpy_uppcase()
{
    unsigned long v2;  // rdx
    char * v3;  // rbx
    char *v4;  // rsi
    char *v5;  // rdi

    if (v2 != 0)
    {
        v3 = v2 - 1;
        do
        {
            *(v5 + v3) = ((char)*(*(__ctype_toupper_loc()) + ((long long)*(v4 + v3)) * 4));
            v3 -= 1;
        }
        while (v3 != 18446744069414584319);
        return v5;
    }
    return v5;
}
