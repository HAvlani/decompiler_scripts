typedef struct struct_0 {
    char padding_0[72];
    unsigned long long field_48;
} struct_0;

int rev_strcmp_size()
{
    struct_0 *v1;  // rsi
    struct_0 *v2;  // rdi

    if (!(v1->field_48 <= v2->field_48))
    {
        return -1;
    }
    else
    {
        return ((long long)(v1->field_48 < v2->field_48));
    }
}
