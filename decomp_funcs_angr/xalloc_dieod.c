extern struct_0 exit_failure;
extern unsigned int g_40e34f;

int xalloc_die()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rax

    v0 = v2;
    dcgettext(0x0, &g_40e34f, 0x5);
    error(exit_failure, 0x0, "%s");
}
