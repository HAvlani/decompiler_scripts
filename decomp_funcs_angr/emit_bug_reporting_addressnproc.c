extern unsigned int g_407b82;
extern unsigned int g_407bac;
extern unsigned int g_407e00;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_407b82, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_407bac, 0x5));
    dcgettext(0x0, &g_407e00, 0x5);
}
