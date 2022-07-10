extern unsigned int g_418031;

int xalloc_die()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v3;  // rax

    v0 = v3;
    dcgettext(0x0, &g_418031, 0x5);
    error(0x0, 0x0, "%s");
    cleanup_fatal(); /* do not return */
}
