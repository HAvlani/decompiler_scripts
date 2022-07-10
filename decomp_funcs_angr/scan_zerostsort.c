typedef struct struct_0 {
    char padding_0[25];
    char field_19;
    char padding_1a[6];
    unsigned long long field_20;
} struct_0;

extern struct_0 *head;
extern struct_1 *zeros;

int scan_zeros()
{
    struct_0 *v1;  // rdi

    if (!(v1->field_20 == 0))
    {
        return 0;
    }
    else if (!(v1->field_19 == 0))
    {
        return 0;
    }
    else if (head != 0)
    {
        *(zeros + 40) = v1;
        zeros = v1;
        return 0;
    }
    else
    {
        head = v1;
        zeros = v1;
        return 0;
    }
}
