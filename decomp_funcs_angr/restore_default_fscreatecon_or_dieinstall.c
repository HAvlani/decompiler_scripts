typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int g_418468;

int restore_default_fscreatecon_or_die()
{
    struct_0 *v0;  // [bp-0x8]
    struct_0 *v2;  // rbx

    v0 = v2;
    v2->field_0 = 95;
    error(0x1, *(__errno_location()), dcgettext(0x0, &g_418468, 0x5));
}