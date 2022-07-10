typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int g_417008;
extern unsigned long long hnd.7828;
extern char initialized.7827;

int get_labeling_handle()
{
    struct_0 *v0;  // [bp-0x8]
    struct_0 *v2;  // rbx
    struct_0 *v3;  // rbx

    if (initialized.7827 != 0)
    {
        return hnd.7828;
    }
    v0 = v2;
    initialized.7827 = 1;
    v2->field_0 = 95;
    hnd.7828 = 0;
    error(0x0, *(__errno_location()), dcgettext(0x0, &g_417008, 0x5));
    v3 = v0;
    return hnd.7828;
}
