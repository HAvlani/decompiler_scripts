extern struct_0 exit_failure;
extern unsigned int g_417dcf;

int print_and_abort()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rax

    v0 = v2;
    dcgettext(0x0, &g_417dcf, 0x5);
    __fprintf_chk();
    exit(exit_failure); /* do not return */
}