typedef struct struct_0 {
    char padding_0[48];
    unsigned long long field_30;
} struct_0;

int sortlines_thread()
{
    unsigned long v0;  // [bp-0x18]
    struct_0 *v3;  // rdi

    v0 = v3->field_30;
    sortlines();
    return 0;
}
