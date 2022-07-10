extern struct_0 exit_failure;
extern unsigned int g_40caa0;

int openat_save_fail()
{
    unsigned int v1;  // edi

    error(exit_failure, v1, dcgettext(0x0, &g_40caa0, 0x5));
}
